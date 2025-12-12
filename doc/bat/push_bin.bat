@echo off
setlocal

REM Windows file
set LOCAL_FILE=C:\data\bin\app.bin
set NEW_NAME=app_2025.bin
set TEMP_FILE=%TEMP%\%NEW_NAME%
copy /y "%LOCAL_FILE%" "%TEMP_FILE%" >nul

REM SSH Info
set STAGE1_USER=stage1_user
set STAGE1_HOST=192.168.1.101
set STAGE2_USER=stage2_user
set STAGE2_HOST=192.168.1.102
set PROD_USER=prod_user
set PROD_HOST=10.0.0.50
set PROD_DIR=/home/prod_user/bin/

echo Uploading "%TEMP_FILE%" to production via double jump...
scp -o ProxyJump=%STAGE1_USER%@%STAGE1_HOST%,%STAGE2_USER%@%STAGE2_HOST% "%TEMP_FILE%" %PROD_USER%@%PROD_HOST%:%PROD_DIR%

echo Done!
pause
