
all: build/monitor.exe build/vt100.bin
	

build/monitor.exe: build
	cc -o $@ tools/monitor.c

build/vt100.bin:
	-rm -f build/*.o build/*.d
	(cd vt100 && make)

monitor: build/monitor.exe
	build/monitor.exe /dev/ttyUSB0

program:
	(cd vt100 && make program)

build:
	mkdir $@

clean:
	-rm -f build/*
	-rmdir build


