@echo off
set USER=vht
set HOST=10.61.248.57

REM File từ server
set REMOTE_FILE=/home/myuser/bin/app.bin

REM Nơi lưu trên Windows
set LOCAL_DIR=C:\data\bin\

echo Downloading %REMOTE_FILE% ...
scp %USER%@%HOST%:%REMOTE_FILE% "%LOCAL_DIR%"
echo Done!
pause
