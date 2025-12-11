# ===== Cấu hình ===== powershell -ExecutionPolicy Bypass -File .\upload_modified.ps1
# ===== Cấu hình =====
$source = "W:\Temp"              # thư mục gốc ở Windows
$user = "root"
$remoteHost = "192.168.135.99"
$remoteRoot = "/root/dungnm23"   # thư mục gốc trên server
$stampFile = "last_upload.txt"   # lưu timestamp lần trước

# ===== Nếu chưa từng upload, tạo timestamp = 0 =====
if (!(Test-Path $stampFile)) {
    "0" | Out-File $stampFile
}

$last = Get-Content $stampFile

# ===== Quét tất cả file trong thư mục gốc và thư mục con =====
Get-ChildItem -Path $source -Recurse -File | ForEach-Object {

    $ts = $_.LastWriteTime.ToString("yyyyMMddHHmmss")

    if ($ts -gt $last) {

        # Lấy đường dẫn tương đối so với thư mục gốc
        $relative = $_.FullName.Substring($source.Length)
        $relative = $relative.TrimStart('\')  # bỏ dấu \ đầu

        # Tạo đường dẫn remote tương ứng
        $remotePath = Join-Path $remoteRoot $relative
        $remotePath = $remotePath.Replace("\","/")  # chuyển sang / cho Linux

        # Tạo thư mục trên server nếu chưa tồn tại
        $remoteDir = Split-Path $remotePath -Parent
        ssh "${user}@${remoteHost}" "mkdir -p '$remoteDir'"

        # Upload file
        Write-Host "Uploading $($_.FullName) → $remotePath"
        scp $_.FullName "${user}@${remoteHost}:$remotePath"
    }
}

# ===== Cập nhật timestamp =====
(Get-Date).ToString("yyyyMMddHHmmss") | Out-File $stampFile

Write-Host "Done."
