#!/bin/bash
if [ ! -d "gpm-req" ] ; then
	echo Error! Requires gpm-req to execute
	exit
fi
echo Installing GPM...
wget www.nico.schottelius.org/software/gpm/archives/gpm-1.20.7.tar.bz2
if [ -z "$1" ] ; then
tar xf gpm-1.20.7.tar.bz2
cd gpm-1.20.7
./autogen.sh                                &&
./configure --prefix=/usr --sysconfdir=/etc &&
make

install-info --dir-file=/usr/share/info/dir           \
             /usr/share/info/gpm.info                 &&

ln -v -sfn libgpm.so.2.1.0 /usr/lib/libgpm.so         &&
install -v -m644 conf/gpm-root.conf /etc              &&

install -v -m755 -d /usr/share/doc/gpm-1.20.7/support &&
install -v -m644    doc/support/*                     \
                    /usr/share/doc/gpm-1.20.7/support &&
install -v -m644    doc/{FAQ,HACK_GPM,README*}        \
                    /usr/share/doc/gpm-1.20.7

cat > /etc/sysconfig/mouse << "EOF"
# Begin /etc/sysconfig/mouse

MDEVICE="/dev/input/mice"
PROTOCOL="imps2"
GPMOPTS=""

# End /etc/sysconfig/mouse
EOF

cd ..
echo Cleaning up...
rm -r gpm-1.20.7
rm gpm-1.20.7.tar.bz2
fi
echo Links
cd gpm-req
./links.sh $1
cd ..
echo Done!