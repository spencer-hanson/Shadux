#Install LinuxPam to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs linuxpam to the system
        echo --update updates the data for linuxpam
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating linuxpam...
        cd linuxpam
        wget $(../links.sh linuxpam)
        mv Linux-PAM-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing linuxpam...
        cp data/#*.tar* linuxpam
        cd linuxpam
        tar xf Linux-PAM-*tar.*
	cd Linux-PAM-*
	./configure --prefix=/usr \
            --sysconfdir=/etc \
            --docdir=/usr/share/doc/Linux-PAM-1.1.6 \
            --disable-nis
	make
	install -v -m755 -d /etc/pam.d
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
        echo Finished, Cleaning up...
        rm Linux-PAM-*.tar*
        rm -r Linux-PAM*
        echo Done!
        exit
fi
usage
