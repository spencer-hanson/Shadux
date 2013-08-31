#!/bin/bash
echo Installing linker...
wget links.twibright.com/download/links-2.7.tar.bz2
if [ -z "$1" ] ; then
tar xf links-2.7.tar.bz2
cd links-2.7
./configure --prefix=/usr &&
make
make install &&
install -v -d -m755 /usr/share/doc/links-2.7 &&
install -v -m644 doc/links_cal/* KEYS BRAILLE_HOWTO \
    /usr/share/doc/links-2.7
cd ..
echo Cleaning up...
rm -r links-2.7
rm links-2.7.tar.bz2
fi
echo Done!