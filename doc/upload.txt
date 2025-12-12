type $env:USERPROFILE\.ssh\id_rsa.pub | ssh myuser@your-server "mkdir -p ~/.ssh && cat >> ~/.ssh/authorized_keys && chmod 600 ~/.ssh/authorized_keys"

@echo off
setlocal enabledelayedexpansion

REM ====== THÔNG TIN SERVER ======
set USER=myuser
set HOST=192.168.1.10

REM ====== DANH SÁCH FILE SOURCE / DEST ======
set SRC1=C:\backup\a.txt
set DST1=/home/user/A

set SRC2=C:\backup\b.txt
set DST2=/home/user/B

set SRC3=C:\backup\c.txt
set DST3=/home/user/C

set SRC4=C:\backup\d.txt
set DST4=/home/user/D

set SRC5=C:\backup\e.txt
set DST5=/home/user/E

set SRC6=C:\backup\f.txt
set DST6=/home/user/F

REM ====== UPLOAD TỪNG FILE TƯƠNG ỨNG ======
for %%i in (1 2 3 4 5 6) do (
    set S=!SRC%%i!
    set D=!DST%%i!
    echo Uploading "!S!" to "!D!" ...
    scp "!S!" %USER%@%HOST%:!D!
)

echo ============================
echo Upload completed!
echo ============================
pause
