#!/bin/bash
echo Installing parted...
wget ftp.gnu.org/gnu/parted/parted-3.1.tar.xz
if [ -z "$1" ] ; then
tar xf parted-3.1.tar.xz
cd parted-3.1
#./configure --prefix=/usr --disable-static
#make
#make -C doc html
#makeinfo --html -o doc/html doc/parted.texi
#makeinfo --plaintext -o doc/parted.txt doc/parted.texi
#make install
#install -v -m755 -d /usr/share/doc/parted-3.1/html
#install -v -m644 doc/html/* /usr/share/doc/parted-3.1/html
#install -v -m644 doc/{FAT,API,parted.{txt,html}} /usr/share/doc/parted-3.1
cd ..
echo Cleaning up...
rm -r parted-3.1
rm parted-3.1.tar.xz
fi
echo Done!
