:<<"::CMDGOTO"
@echo off
goto :CMDENTRY
rem https://stackoverflow.com/questions/17510688/single-script-to-run-in-both-windows-batch-and-linux-bash
::CMDGOTO

echo "========== 3P build ${SHELL} ================="
DIR=$(dirname "$0")
(mkdir -p bin;)
(echo build .. $2)
(cd ${DIR}/bin; cc -Wall -o trip ../src/trip.c; ./trip ../doc/hello.3p > h.c; cc -o hello h.c ; ./hello)
(cd ${DIR}/bin; ./trip ../doc/spec.3p;)
exit $?
:CMDENTRY

echo ============= 3P build %COMSPEC% ============
set OLDDIR=%CD%
mkdir bin  >nul 2>&1
cd bin
echo build %1 %2
cl %~dp0\src\rikiki.c /D_CRT_SECURE_NO_WARNINGS=1 /Fe:rkc.exe >>build.log 2>&1
clang -D_CRT_SECURE_NO_WARNINGS=1 %~dp0\src\rikiki.c -o rkc.exe >>build.log 2>&1
chdir /d %OLDDIR%
exit 0

