#!/bin/sh

rm -f *.zip *.tar.gz *.dmg

rm -rf jack-games
mkdir -p jack-games/
cp *32.exe jack-games/
cp README.md jack-games/
zip -r jack-games-windows32.zip jack-games/

rm -rf jack-games
mkdir -p jack-games/
cp *64.exe jack-games/
cp README.md jack-games/
zip -r jack-games-windows64.zip jack-games/

rm -rf jack-games
mkdir -p jack-games/
cp *.linux32 jack-games/
cp README.md jack-games/
tar -cvzf jack-games-linux32.tar.gz jack-games/

rm -rf jack-games
mkdir -p jack-games/
cp *.linux64 jack-games/
cp README.md jack-games/
tar -cvzf jack-games-linux64.tar.gz jack-games/

rm -rf jack-games
mkdir -p jack-games/
cp *.app jack-games/
cp README.md jack-games/
hdiutil create -volname JackGames -srcfolder jack-games -ov -format UDZO jack-games-macos.dmg

