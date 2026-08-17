:<<"::CMDGOTO"
@echo off
goto :CMDENTRY
rem https://stackoverflow.com/questions/17510688/single-script-to-run-in-both-windows-batch-and-linux-bash
::CMDGOTO

echo "========== cod5 configure ${SHELL} ================="
DIR=$(dirname "$0")
(mkdir -p ${DIR}/build;)
(cd ${DIR}/build; cc ../tools/xmake.c -o xmake.exe)
cp Makefile ${DIR}/build/
# (cd ${DIR}/build;./build $1 $2)
exit $?
:CMDENTRY

echo ============= cod5 configure %COMSPEC% ============
set OLDDIR=%CD%
rem chdir /d %1
mkdir build  >nul 2>&1
chdir /d build
if "%CD%" == "%OLDDIR%" (
	rem echo build %1 %2
	echo fatal error! 
 	goto :ENDOFFILE
)
del *.exe >build.log 2>&1

clang -D_FILE_OFFSET_BITS=64 -D_CRT_SECURE_NO_WARNINGS=1 %~dp0\tools\xmake.c -o xmake.exe >>build.log 2>&1
IF EXIST xmake.exe (
	copy ..\Makefile .
	goto :ENDOFFILE
)
cl /Z7 /DDEBUG /D_FILE_OFFSET_BITS=64 %~dp0\tools\xmake.c /D_CRT_SECURE_NO_WARNINGS=1 /Fe:xmake.exe >>build.log 2>&1
IF EXIST xmake.exe (
	copy ..\Makefile.vc Makefile
	goto :ENDOFFILE
) ELSE (
	echo ERROR: C compiler not found
)
:ENDOFFILE
chdir /d %OLDDIR%


