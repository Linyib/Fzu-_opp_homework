@echo off
if exist 作业2.exe (echo 已完成) else (echo 未编译)
echo ......开始编译......
gcc Lin.cpp -o 作业2.exe
echo ......已结束......
if exist 作业2.exe (echo 已编译) else (echo 未编译)
pause