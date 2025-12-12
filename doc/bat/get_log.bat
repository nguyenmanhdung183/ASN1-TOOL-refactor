@echo off
set USER=vht
set HOST=10.61.248.57

REM File log 1
set REMOTE_LOG1=/var/log/system/syslog
set LOCAL_SAVE1=C:\logs\syslog.txt

REM File log 2
set REMOTE_LOG2=/var/app/logs/app.log
set LOCAL_SAVE2=C:\logs\app.log

echo Downloading log 1...
scp %USER%@%HOST%:%REMOTE_LOG1% "%LOCAL_SAVE1%"

echo Downloading log 2...
scp %USER%@%HOST%:%REMOTE_LOG2% "%LOCAL_SAVE2%"

echo Done!
pause
