#!/bin/bash
if [ ! -d "linuxpam-req" ] ; then
	echo Error! Requires linuxpam-req to execute
	exit
fi
echo Installing linux pam..
wget linux-pam.org/library/Linux-PAM-1.1.6.tar.bz2
if [ -z "$1" ] ; then
tar xf Linux-PAM-1.1.6.tar.bz2
cd Linux-PAM-1.1.6
./configure --prefix=/usr \
            --sysconfdir=/etc \
            --docdir=/usr/share/doc/Linux-PAM-1.1.6 \
            --disable-nis &&
make
install -v -m755 -d /etc/pam.d &&
cat > /etc/pam.d/other << "EOF"
auth     required       pam_deny.so
account  required       pam_deny.so
password required       pam_deny.so
session  required       pam_deny.so
EOF
make check
rm -rfv /etc/pam.d
make install
chmod -v 4755 /sbin/unix_chkpwd
cd ..
echo Cleaning up...
rm Linux-PAM-1.1.6.tar.bz2
rm -r Linux-PAM-1.1.6
fi
echo Shadow...
cd linuxpam-req
./shadow.sh $1
cd ..
echo Done!