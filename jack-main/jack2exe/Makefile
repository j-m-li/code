CC=gcc
CFLAGS=-I.
OBJ=j2exe.o
LIBS=

all: j2.exe

j2.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

j2exe.c: j2c.py jexe/main.jack
	python j2c.py
clean:
	rm -f $(OBJ)
	rm -f j2.exe

