#!/bin/bash
echo Installing iptables...
wget www.netfilter.org/projects/iptables/files/iptables-1.4.19.1.tar.bz2
if [ -z "$1" ] ; then
tar xf iptables-1.4.19.1.tar.bz2
cd iptables-1.4.19.1
./configure --prefix=/usr                          \
            --exec-prefix=                         \
            --bindir=/usr/bin                      \
            --with-xtlibdir=/lib/xtables           \
            --with-pkgconfigdir=/usr/lib/pkgconfig \
            --enable-libipq                        \
            --enable-devel &&
make

make install &&
ln -sfv ../../sbin/xtables-multi /usr/bin/iptables-xml &&
for file in libip4tc libip6tc libipq libiptc libxtables
do
  ln -sfv ../../lib/`readlink /lib/${file}.so` /usr/lib/${file}.so &&
  rm -v /lib/${file}.so &&
  mv -v /lib/${file}.la /usr/lib &&
  sed -i "s@libdir='@&/usr@g" /usr/lib/${file}.la
done

fi
echo Done!