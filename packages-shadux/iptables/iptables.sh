#Installs iptables onto the system
#!/bin/bash
function usage() {
	echo Usage $0 [--install] [--update]
	echo --install installs iptables to the system
	echo --update updates the iptables tarfile
}

if [ -z "$1" ] ; then
	usage
	exit
fi

if [ "$1" = "--update" ] ; then
	echo Updating iptables...
	cd iptables
	wget $(../links.sh iptables)
	mv iptables-*.tar* ../data
	echo Done!
	exit
fi

if [ "$1" = "--install" ] ; then
	echo Installing iptables...
	cp data/iptables-*.tar* iptables
	cd iptables
	tar xf iptables-*.tar*
	cd iptables-*
	./configure --prefix=/usr                          \
            --exec-prefix=                         \
            --bindir=/usr/bin                      \
            --with-xtlibdir=/lib/xtables           \
            --with-pkgconfigdir=/usr/lib/pkgconfig \
            --enable-libipq                        \
            --enable-devel
	make
	make install
	ln -sfv ../../sbin/xtables-multi /usr/bin/iptables-xml &&
	for file in libip4tc libip6tc libipq libiptc libxtables
	do
	  ln -sfv ../../lib/`readlink /lib/${file}.so` /usr/lib/${file}.so &&
	  rm -v /lib/${file}.so &&
	  mv -v /lib/${file}.la /usr/lib &&
	  sed -i "s@libdir='@&/usr@g" /usr/lib/${file}.la
	done
echo Done!
fi
