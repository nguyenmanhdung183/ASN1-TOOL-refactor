import os
import glob

OUTPUT_DIR = "output"
MERGED_DIR = "merged_output"
MAIN_STRUCT_DIR = "main_struct_output"
MAIN_STRUCT_FILE = "MAIN_STRUCT.h"
MAIN_C_FILE = "output_main.c"
MAIN_H_FILE = "output_main.h"
PREFIX = "e2ap_"
EXISTED_FILE = "existed.txt"
text_to_insert_c_header ="#include \"output_main.h\""
text_to_insert_h_header ="""
#ifndef OUTPUT_MAIN_H
#define OUTPUT_MAIN_H
"""
text_to_insert_h_foter ="#endif"

#=================================================================
def read_skip_parts():
    """Đọc danh sách các phần cần skip từ file skip_in_scope.txt."""
    skip_parts = set()
    if os.path.isfile("skip_in_scope.txt"):
        with open("skip_in_scope.txt", "r", encoding="utf-8") as f:
            for line in f:
                skip_parts.add(line.strip())
    return skip_parts


# ================================================================
#cập nhật existed.txt sau khi tạo file
# ================================================================
def update_existed_list(new_parts, existed_parts):
    """
    Ghi thêm các bản tin mới vào existed.txt.
    new_parts: danh sách bản tin mới sinh ra
    existed_parts: set chứa các bản tin đã tồn tại trước đó
    """
    to_add = [p for p in new_parts if p not in existed_parts]
    if not to_add:
        print("Không có bản tin mới để thêm vào existed.txt")
        return
    
    with open(EXISTED_FILE, "a", encoding="utf-8") as ef:
        for p in to_add:
            ef.write(p + "\n")
    print(" Đã cập nhật existed.txt")
# ================================================================
#đọc existed.txt để tạo file
# ================================================================

def read_existed_list():
    """Đọc danh sách các bản tin đã tạo từ file existed.txt."""
    existed_parts = set()
    if os.path.isfile(EXISTED_FILE):
        with open(EXISTED_FILE, "r", encoding="utf-8") as f:
            for line in f:
                existed_parts.add(line.strip())
    return existed_parts
#===============================================================
def add_protocol_files_to_main(c_out, h_out):
    """
    Hàm nối các file có đuôi protocolIEs.h, protocolIEs.c, protocolIEs_element.h, và protocolIEs_element.c vào cuối
    các file output_main.c và output_main.h.
    """
    # Định nghĩa các đuôi file cần nối
    protocol_file_patterns = [
        "*protocolIEs_element.h", "*protocolIEs_element.c",
        "*protocolIEs.h", "*protocolIEs.c"
    ]
    
    # Lấy danh sách tất cả các file khớp với các đuôi trên trong OUTPUT_DIR
    all_protocol_files = []
    for pattern in protocol_file_patterns:
        all_protocol_files.extend(glob.glob(os.path.join(OUTPUT_DIR, pattern)))

    # Nối các file .c và .h vào các file chính
    for file in all_protocol_files:
        file_base = os.path.basename(file)
        
        if file_base.endswith(".c"):
            with open(file, "r", encoding="utf-8") as cf:
                c_out.write(f"// --- Begin of {file_base} ---\n")
                c_out.write(cf.read())  # Nối nội dung của file .c
                c_out.write(f"\n// --- End of {file_base} ---\n\n")
        
        elif file_base.endswith(".h"):
            with open(file, "r", encoding="utf-8") as hf:
                h_out.write(f"// --- Begin of {file_base} ---\n")
                h_out.write(hf.read())  # Nối nội dung của file .h
                h_out.write(f"\n// --- End of {file_base} ---\n\n")

#===============================================================

def rectangular_comment(text):
    lines = text.split("\n")
    width = max(len(line) for line in lines)
    border = "/" + "*" * (width + 4) + "/"
    comment_lines = [border]
    for line in lines:
        comment_lines.append(f"/* {line.ljust(width)} */")
    comment_lines.append(border)
    return "\n".join(comment_lines) + "\n\n"

#===============================================================
def merge_main_struct_headers_by_parts(parts, existed_parts, skip_parts=None):
    """
    Merge các file .h trong MAIN_STRUCT_DIR theo cùng logic xử lý part như chương trình main:
    - Dựa theo thứ tự trong parts
    - Bỏ qua part đã tồn tại trong existed_parts
    - Tên file: PREFIX + part.replace('-', '_') + '.h'
    - Merge theo thứ tự
    """
    MAIN_STRUCT_DIR = "main_struct_output"
    MAIN_STRUCT_FILE = "MAIN_STRUCT.h"
    PREFIX = "e2ap_"

    os.makedirs(MAIN_STRUCT_DIR, exist_ok=True)

    output_path = os.path.join(MAIN_STRUCT_DIR, MAIN_STRUCT_FILE)

    with open(output_path, "w", encoding="utf-8") as out:
        out.write("/* Auto-generated MAIN_STRUCT.h */\n\n")

        for part in parts:
            if part in existed_parts or part in skip_parts:
                continue  # bỏ qua part đã tồn tại

            file_base = PREFIX + part.replace("-", "_") + ".h"
            header_path = os.path.join(MAIN_STRUCT_DIR, file_base)

            if os.path.isfile(header_path):
               # out.write(f"// --- Begin of {file_base} ---\n")
                with open(header_path, "r", encoding="utf-8") as hfile:
                    out.write(hfile.read())
                #out.write(f"\n// --- End of {file_base} ---\n\n")
            else:
                # Tương tự logic rectangular_comment() trong code bạn
                missing = f"File .h missing: {file_base}"
                out.write(rectangular_comment(missing))

    print(f" Đã tạo file merged: {output_path}")

#===============================================
def main():
    os.makedirs(MERGED_DIR, exist_ok=True)

    leaf_files = glob.glob("Tool_read_pdf/*_bottomup_leaf.txt")
    if not leaf_files:
        print("Không tìm thấy file *_bottomup_leaf.txt nào!")
        return

    all_parts = []
    existed_parts = read_existed_list() # dungnm23 add existed list
    skip_parts = read_skip_parts()      # đọc các phần cần skip từ skip_in_scope.txt

    for leaf_file in leaf_files:
        with open(leaf_file, "r", encoding="utf-8") as f:
            for line in f:
                part = line.strip()
                if part and part not in all_parts and part not in existed_parts and part not in skip_parts: # dungnm23 add existed list
                    all_parts.append(part)

    c_out_path = os.path.join(MERGED_DIR, MAIN_C_FILE)
    h_out_path = os.path.join(MERGED_DIR, MAIN_H_FILE)
    
    #update_existed_list(all_parts, existed_parts)   # <<--- dungnm23 add existed list


    with open(c_out_path, "w", encoding="utf-8") as c_out, open(h_out_path, "w", encoding="utf-8") as h_out:
    
        #-----------------
        c_out.write(text_to_insert_c_header + "\n")
        h_out.write(text_to_insert_h_header + "\n")
        
        # ======================================================
        # THÊM: Ghi doc/header.c và doc/header.h vào đầu file
        # ======================================================
        header_c_path = "doc/header.c"
        header_h_path = "doc/header.h"

        if os.path.isfile(header_c_path):
            with open(header_c_path, "r", encoding="utf-8") as hcf:
                c_out.write("// --- Begin of doc/header.c ---\n")
                c_out.write(hcf.read())
                c_out.write("\n// --- End of doc/header.c ---\n\n")
        else:
            c_out.write(rectangular_comment("Missing: doc/header.c"))

        if os.path.isfile(header_h_path):
            with open(header_h_path, "r", encoding="utf-8") as hhf:
                h_out.write("// --- Begin of doc/header.h ---\n")
                h_out.write(hhf.read())
                h_out.write("\n// --- End of doc/header.h ---\n\n")
        else:
            h_out.write(rectangular_comment("Missing: doc/header.h"))
        # ======================================================
            
        
        
        for part in all_parts:
            part_file_base = PREFIX + part.replace("-", "_")
            #part_file_base = part.replace("-", "_")


            c_path = os.path.join(OUTPUT_DIR, part_file_base + ".c")
            h_path = os.path.join(OUTPUT_DIR, part_file_base + ".h")

            if os.path.isfile(c_path):
                with open(c_path, "r", encoding="utf-8") as cf:
                    c_out.write(f"// --- Begin of {part_file_base}.c ---\n")
                    c_out.write(cf.read())
                    c_out.write(f"\n// --- End of {part_file_base}.c ---\n\n")
            else:
                comment = rectangular_comment(f"File .c missing: {part_file_base}.c")
                c_out.write(comment)

            if os.path.isfile(h_path):
                with open(h_path, "r", encoding="utf-8") as hf:
                    h_out.write(f"// --- Begin of {part_file_base}.h ---\n")
                    h_out.write(hf.read())
                    h_out.write(f"\n// --- End of {part_file_base}.h ---\n\n")
            else:
                comment = rectangular_comment(f"File .h missing: {part_file_base}.h")
                h_out.write(comment)
#------------------------
        add_protocol_files_to_main(c_out, h_out)

        h_out.write(text_to_insert_h_foter + "\n")
        
    print(f"Đã tạo file {c_out_path} và {h_out_path} trong thư mục {MERGED_DIR}")

    # Merge MAIN_STRUCT.h 
    merge_main_struct_headers_by_parts(all_parts, existed_parts,skip_parts)


if __name__ == "__main__":
    main()
