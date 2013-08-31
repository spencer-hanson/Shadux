#!/bin/bash
function pause() {
	read -p "Press Enter to continue"
}
echo Installing openssh...
wget ftp.openbsd.org/pub/OpenBSD/OpenSSH/portable/openssh-6.2p2.tar.gz
pause
if [ -z "$1" ] ; then
tar xf openssh-6.2p2.tar.gz
pause
cd openssh-6.2p2
install -v -m700 -d /var/lib/sshd &&
pause
chown -v root:sys /var/lib/sshd &&
pause
groupadd -g 50 sshd &&
pause
useradd -c 'sshd PrivSep' -d /var/lib/sshd -g sshd \
    -s /bin/false -u 50 sshd
pause
./configure --prefix=/usr                     \
            --libexecdir=/usr/lib/openssh     \
            --sysconfdir=/etc/ssh             \
            --datadir=/usr/share/sshd         \
            --with-md5-passwords              \
            --with-privsep-path=/var/lib/sshd &&
pause
make
pause
make install
pause
make install -v -m755 contrib/ssh-copy-id /usr/bin 
pause
make install -v -m644 contrib/ssh-copy-id.1 /usr/share/man/man1
pause
make install -v -m755 -d /usr/share/doc/openssh-6.2p2
pause
make install -v -m644 INSTALL LICENCE OVERVIEW README* \
    /usr/share/doc/openssh-6.2p2    
pause
cd ..
echo Cleaning up..
rm -r openssh-6.2p2
rm openssh-6.2p2.tar.gz
fi
echo Done!
