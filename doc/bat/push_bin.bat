@echo off
setlocal

REM ====== THÔNG TIN SERVER ======
set USER=vht
set HOST=10.61.248.57

REM ====== FILE GỐC TRÊN WINDOWS ======
set LOCAL_FILE=C:\data\bin\app.bin

REM ====== TÊN FILE MỚI SAU KHI ĐỔI (CHỈ TÊN, KHÔNG ĐƯỜNG DẪN) ======
set NEW_NAME=app_2025.bin

REM ====== THƯ MỤC ĐÍCH TRÊN SERVER ======
set REMOTE_DIR=/home/myuser/bin/

REM ====== TẠO FILE TẠM VỚI TÊN MỚI ======
set TEMP_FILE=%TEMP%\%NEW_NAME%
copy /y "%LOCAL_FILE%" "%TEMP_FILE%" >nul

echo Uploading "%TEMP_FILE%" as "%NEW_NAME%" ...
scp "%TEMP_FILE%" %USER%@%HOST%:%REMOTE_DIR%

echo Done!
pause
