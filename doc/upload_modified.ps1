# ===== Cấu hình =====    powershell -ExecutionPolicy Bypass -File .\upload_modified.ps1

$source = "C:\path\to\your\folder"     # thư mục gốc ở Windows
$user = "vht"
$host = "10.61.248.57"
$remoteRoot = "/home/vht"              # thư mục gốc trên server
$stampFile = "last_upload.txt"         # lưu timestamp lần trước

# ===== Nếu chưa từng upload, tạo timestamp = 0 =====
if (!(Test-Path $stampFile)) {
    "0" | Out-File $stampFile
}

$last = Get-Content $stampFile          # đọc timestamp cũ

# ===== Quét toàn bộ file trong thư mục và thư mục con =====
Get-ChildItem -Path $source -Recurse -File | ForEach-Object {

    # timestamp của file hiện tại
    $ts = $_.LastWriteTime.ToString("yyyyMMddHHmmss")

    if ($ts -gt $last) {

        # tính đường dẫn tương ứng trên server
        $relative = $_.FullName.Substring($source.Length).TrimStart("\")
        $remotePath = ($remoteRoot + "/" + $relative).Replace("\","/")

        # tạo thư mục trên server nếu chưa tồn tại
        $remoteDir = Split-Path $remotePath -Parent
        ssh "$user@$host" "mkdir -p '$remoteDir'"

        Write-Host "Uploading $($_.FullName) → $remotePath"
        scp $_.FullName "$user@$host:`"$remotePath`""
    }
}

# ===== cập nhật timestamp =====
(Get-Date).ToString("yyyyMMddHHmmss") | Out-File $stampFile

Write-Host "Done."
