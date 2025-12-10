import os
import shutil
import time
import glob

filepath = "list.txt"

clean_path = "clean.bat"
quick_path = "quick.bat"

ALL_LEAF_PATH = "./all_bottomup_leaf.txt"
FULL_MESSAGE_DIR = "../full_message"

OUTPUT_E2AP_H = "./E2AP.h"
OUTPUT_E2AP_C = "./E2AP.c"

OUT_MAIN_STRUCT_H = "./MAIN_STRUCT.h"
OUT_COMPOSE_C = "./MAIN_COMPOSE.c"

start_time = time.time()

def read_file(path):
    """Always read file safely (no unicode crash)"""
    return open(path, "r", encoding="utf-8", errors="ignore").read()


# =====================================================
# PREPARE
# =====================================================
if os.path.exists(ALL_LEAF_PATH):
    os.remove(ALL_LEAF_PATH)

with open(filepath, 'r') as file:
    msg_list = [l.strip() for l in file.readlines()]

# Remove old generated files
for fp in [OUTPUT_E2AP_H, OUTPUT_E2AP_C, OUT_MAIN_STRUCT_H, OUT_COMPOSE_C]:
    if os.path.exists(fp):
        os.remove(fp)


# =====================================================
# MAIN LOOP
# =====================================================
for msg in msg_list:
    print(f"\n>>> Processing message: {msg}")

    # Write msg.config
    with open("../msg.config", "w") as cfg:
        cfg.write(msg + "\n")
        cfg.write("read_pdf_to_text/E2AP_ASN1_v07.00_final.txt")

    # Run clean + quick
    os.chdir("..")
    os.system(clean_path)
    os.system(quick_path)

    # Prepare destination folders
    dst_folder = f"full_message/{msg}"
    os.makedirs(dst_folder, exist_ok=True)

    copy_items = [
        ("output", f"{dst_folder}/output_{msg}"),
        ("merged_output", f"{dst_folder}/merger_output_{msg}"),
        ("main_struct_output", f"{dst_folder}/main_struct_output{msg}"),
        ("compose_output", f"{dst_folder}/compose_output{msg}")
    ]

    for src, dst in copy_items:
        if os.path.exists(src):
            shutil.copytree(src, dst, dirs_exist_ok=True)
            print(f"Copied {src} → {dst}")
        else:
            print(f"{src} not found")

    # Collect bottom-up leafs
    os.chdir("automate")
    leaf_files = glob.glob("../Tool_read_pdf/*bottomup_leaf.txt")
    with open(ALL_LEAF_PATH, "a", encoding="utf-8") as out_leaf:
        for lf in leaf_files:
            out_leaf.write(read_file(lf))


# =====================================================
# UNIQUE FIELDS
# =====================================================
print("\n=== Unique leaf fields ===")
unique_fields = []

if os.path.exists(ALL_LEAF_PATH):
    for line in open(ALL_LEAF_PATH, "r", encoding="utf-8"):
        line = line.strip()
        if line and line not in unique_fields:
            unique_fields.append(line)

print("Total unique fields =", len(unique_fields))


# =====================================================
# MERGE E2AP.h / E2AP.c
# =====================================================

with open(OUTPUT_E2AP_H, "w", encoding="utf-8") as out_h, \
     open(OUTPUT_E2AP_C, "w", encoding="utf-8") as out_c:

    # tạo 1 vector chứa các field đã lấy
    taken_fields = []
    taken_fields_2 = []
    
    out_h.write("#ifndef E2AP_H\n#define E2AP_H\n\n")
    out_c.write('#include "E2AP.h"\n\n')

    if os.path.exists("./HEADER_E2AP.h"):
        out_h.write(read_file("./HEADER_E2AP.h") + "\n")

    if os.path.exists("./HEADER_E2AP.c"):
        out_c.write(read_file("./HEADER_E2AP.c") + "\n")

    for field in unique_fields:
        base = field.replace("-", "_")
        found = False
        
        for msg in msg_list:
            folder = os.path.join(FULL_MESSAGE_DIR, msg, f"output_{msg}")

            if not os.path.isdir(folder):
                continue

            for root, _, files in os.walk(folder):
                if f"e2ap_{base}.h" in files:
                    if field in taken_fields:
                        #print(f"[INFO] Duplicate E2AP file for field: {field} in message: {msg}, skipping...")
                        continue
                    out_h.write(read_file(os.path.join(root, f"e2ap_{base}.h")))
                    found = True
                    taken_fields.append(field)
                if f"e2ap_{base}.c" in files:
                    if field in taken_fields_2:
                        #print(f"[INFO] Duplicate E2AP file for field: {field} in message: {msg}, skipping...")
                        continue
                    out_c.write(read_file(os.path.join(root, f"e2ap_{base}.c")))
                    found = True
                    taken_fields_2.append(field)

        if not found:
            print(f"[WARN] Missing E2AP file for field: {field}")

    out_h.write("\n#endif // E2AP_H\n")

print("\n=== E2AP.h / E2AP.c generated ===")


# =====================================================
# MERGE MAIN_STRUCT.h
# =====================================================
with open(OUT_MAIN_STRUCT_H, "w", encoding="utf-8") as out_struct:

    out_struct.write("#ifndef MAIN_STRUCT_H\n#define MAIN_STRUCT_H\n\n")

    if os.path.exists("./HEADER_MAIN_STRUCT.h"):
        out_struct.write(read_file("./HEADER_MAIN_STRUCT.h") + "\n")
    taken_fields = []
    for field in unique_fields:
        base = field.replace("-", "_")
        found = False

        for msg in msg_list:
            folder = os.path.join(FULL_MESSAGE_DIR, msg, f"main_struct_output{msg}")

            if not os.path.isdir(folder):
                continue

            for root, _, files in os.walk(folder):
                if f"e2ap_{base}.h" in files:
                    if field in taken_fields:
                        #print(f"[INFO] Duplicate STRUCT file for field: {field} in message: {msg}, skipping...")
                        continue
                    out_struct.write(read_file(os.path.join(root, f"e2ap_{base}.h")))
                    found = True
                    taken_fields.append(field)

        if not found:
            print(f"[WARN] Missing STRUCT file for field: {field}")

    out_struct.write("\n#endif // MAIN_STRUCT_H\n")

print("\n=== MAIN_STRUCT.h generated ===")


# =====================================================
# MERGE MAIN_COMPOSE.c
# =====================================================
with open(OUT_COMPOSE_C, "w", encoding="utf-8") as out_compose:

    out_compose.write('#include "MAIN_COMPOSE.h"\n\n')

    if os.path.exists("./HEADER_MAIN_COMPOSE.h"):
        out_compose.write(read_file("./HEADER_MAIN_COMPOSE.h") + "\n")
    taken_fields = []
    for field in unique_fields:
        base = field.replace("-", "_")
        found = False

        for msg in msg_list:
            folder = os.path.join(FULL_MESSAGE_DIR, msg, f"compose_output{msg}")

            if not os.path.isdir(folder):
                continue

            for root, _, files in os.walk(folder):
                if f"compose_{base}.c" in files:
                    if field in taken_fields:
                        #print(f"[INFO] Duplicate COMPOSE file for field: {field} in message: {msg}, skipping...")
                        continue
                    out_compose.write(read_file(os.path.join(root, f"compose_{base}.c")))
                    found = True
                    taken_fields.append(field)
                    

        if not found:
            print(f"[WARN] Missing COMPOSE file for field: {field}")

print("\n=== MAIN_COMPOSE.c generated ===")


# DONE
print("\nDONE in %.2f seconds\n" % (time.time() - start_time))
