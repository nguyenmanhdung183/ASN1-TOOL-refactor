@echo off
setlocal

REM ===== SSH Info =====
set STAGE1_USER=stage1_user
set STAGE1_HOST=192.168.1.101
set STAGE2_USER=stage2_user
set STAGE2_HOST=192.168.1.102
set PROD_USER=prod_user
set PROD_HOST=10.0.0.50

REM ===== Remote files =====
set REMOTE_LOG1=/var/log/system.log
set REMOTE_LOG2=/var/app/app.log

REM ===== Local save =====
set LOCAL_SAVE1=C:\logs\system.log
set LOCAL_SAVE2=C:\logs\app.log

echo Downloading log 1 via double jump...
scp -o ProxyJump=%STAGE1_USER%@%STAGE1_HOST%,%STAGE2_USER%@%STAGE2_HOST% %PROD_USER%@%PROD_HOST%:%REMOTE_LOG1% "%LOCAL_SAVE1%"

echo Downloading log 2 via double jump...
scp -o ProxyJump=%STAGE1_USER%@%STAGE1_HOST%,%STAGE2_USER%@%STAGE2_HOST% %PROD_USER%@%PROD_HOST%:%REMOTE_LOG2% "%LOCAL_SAVE2%"

echo All logs downloaded!
pause
