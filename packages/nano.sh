#!/bin/bash
echo Installing...
wget www.nano-editor.org/dist/v2.0/nano-2.0.7.tar.gz
if [ -z "$1" ] ; then
tar xf nano-2.0.7.tar.gz
cd nano-2.0.7
echo Configuring...
./configure --disable-wrapping --disable-speller --enable-extra --enable-color --enable-utf8 --prefix=/usr --sysconfdir=/etc/nano --enable-multibuffer --enable-nanorc --enable-color --enable-all && make
make install
install -v -m644 -D doc/nanorc.sample /etc/nano/nanorc.sample
install -v -m755 -d /usr/share/doc/nano-2.0.7
install -v -m644 doc/{,man/,texinfo/}*.html /usr/share/doc/nano-2.0.7
cd ..
echo Cleaning up...
rm nano-2.0.7.tar.gz
rm -r nano-2.0.7
fi
echo Done!
