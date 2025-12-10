REM xoá các file .c và .h trong thư mục output
echo Deleting .c and .h files in output directory...
del /Q output\*.c
del /Q output\*.h
del /Q compose_output\*.c
del /Q main_struct_output\*.h
del /Q main_struct_output\*.c
del /Q compose_output\*.c
del /Q 1_RESULT\*.c
del /Q 1_RESULT\*.h

echo Deletion complete.

