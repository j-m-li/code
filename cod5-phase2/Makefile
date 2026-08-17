SOURCEDIR=../src
BUILDDIR=.

CC=clang
LD=clang
AS=clang -c 

CFLAGS=-Wall -ansi -D_POSIX_C_SOURCE=200809L -D_CRT_NONSTDC_NO_DEPRECATE=1 \
      -D_CRT_SECURE_NO_WARNINGS=1 -g 

SOURCES= \
	todo.c 

OBJS=$(subst $(SOURCEDIR),$(BUILDDIR),$(SOURCES:.c=.o))

top: build/xmake.exe
	(cd build && (xmake.exe all || ./xmake.exe all))

build/xmake.exe:
	./configure.cmd || configure.cmd

all: test
	echo done

test:
	echo TODO

clean:
	rm -f *.o xmake.exe ac90.exe
	rm -rf build/

./%.o: ../src/%.c
	@$(CC) -S $(CFLAGS) $< -o $*.s
	@$(AS) -o $@ $*.s
	@rm -f $*.s

