@echo off
setlocal

REM Windows file
set LOCAL_FILE=C:\data\bin\app.bin
set NEW_NAME=app_2025.bin
set TEMP_FILE=%TEMP%\%NEW_NAME%
copy /y "%LOCAL_FILE%" "%TEMP_FILE%" >nul

REM SSH info
set STAGE_USER=stage_user
set STAGE_HOST=192.168.1.100
set PROD_USER=prod_user
set PROD_HOST=10.0.0.50
set PROD_DIR=/home/prod_user/bin/

echo Uploading "%TEMP_FILE%" to production via jump host...
scp -o ProxyJump=%STAGE_USER%@%STAGE_HOST% "%TEMP_FILE%" %PROD_USER%@%PROD_HOST%:%PROD_DIR%

echo Done!
pause
