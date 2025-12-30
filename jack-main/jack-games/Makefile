
all: build.sh
	./build.sh
	./release.sh
	echo done
clean:
	rm -f *.exe *.linux32 *.linux64 *.app *.dmg *.zip *.tar.gz
	rm -f *.c

get:
	scp jml@192.168.43.93:src/jack-games/*.zip .
	scp jml@192.168.43.93:src/jack-games/*.tar.gz .

