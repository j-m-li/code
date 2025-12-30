#!/bin/sh
echo compiling $1
rm -rf ./$1/lib/
mkdir -p ./$1/lib/ext/
cp -r ../jack/lib/std/  ./$1/lib/std/
cp -r ../jack/lib/c/  ./$1/lib/c/
# cp -r ../jack/lib/ext/Sys2.jack  ./$1/lib/ext/
../jack/jack.run -hack $1
../jack/build/Release/jack -hack $1
clang -mmacosx-version-min=10.14 framework Cocoa -framework OpenGL -o $1.app $1.c
i686-w64-mingw32-gcc -g -municode $1.c -lgdi32 -lwsock32 -lopengl32 -lwinspool -lshell32 -luuid -o ${1}32.exe 
gcc -m32 -Wall -ggdb $1.c -lX11 -lGL -lGLU -o $1.linux32
gcc -m64 -ggdb  -o $1.linux64 $1.c -lX11 -lGL -lGLU 
x86_64-w64-mingw32-gcc -g -municode $1.c -lgdi32 -lwsock32 -lopengl32 -lwinspool -lshell32 -luuid -o ${1}64.exe 



