#Installs openssh to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs openssh to the system
        echo --update updates the data for openssh
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating openssh...
        cd openssh
        wget $(../links.sh openssh)
        mv openssh-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing openssh...
        cp data/openssh-*.tar* openssh
        cd openssh
	tar xf openssh-*.tar*
	cd openssh-*
	install -v -m700 -d /var/lib/sshd &&
	chown -v root:sys /var/lib/sshd &&
	groupadd -g 50 sshd &&
	useradd -c 'sshd PrivSep' -d /var/lib/sshd -g sshd \
	    -s /bin/false -u 50 sshd
	./configure --prefix=/usr                     \
            --libexecdir=/usr/lib/openssh     \
            --sysconfdir=/etc/ssh             \
            --datadir=/usr/share/sshd         \
            --with-md5-passwords              \
            --with-privsep-path=/var/lib/sshd
	make
	make install
	install -v -m755 contrib/ssh-copy-id /usr/bin
	install -v -m644 contrib/ssh-copy-id.1 /usr/share/man/man1
	install -v -m755 -d /usr/share/doc/openssh-6.2p2
	install -v -m644 INSTALL LICENCE OVERVIEW README* \
	    /usr/share/doc/openssh-6.2p2
	cd ..
	echo Finished, Cleaning up..
	rm -r openssh-*
	rm openssh-*.tar*
	echo Done!
	exit
fi
usage
