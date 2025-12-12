@echo off
set USER=vht
set HOST=10.61.248.57

REM File trên Windows
set LOCAL_FILE=C:\data\bin\app.bin

REM Thư mục đích trên server
set REMOTE_DIR=/home/myuser/bin/

echo Uploading %LOCAL_FILE% ...
scp "%LOCAL_FILE%" %USER%@%HOST%:%REMOTE_DIR%
echo Done!
pause
