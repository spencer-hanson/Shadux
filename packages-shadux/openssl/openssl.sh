#installs openssl to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs openssl to the system
        echo --update updates the data for openssl
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating openssl...
        cd openssl
        wget $(../links.sh openssl)
        wget $(../links.sh openssl_patch1)
	wget $(../links.sh openssl_patch2)
	mv openssl-*.tar* ../data
	mv openssl-*.patch ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing openssl...
        cp data/openssl-*.tar* openssl
	cp data/openssl-*.patch openssl
        cd openssl
	tar xf openssl-*.tar*
	cd openssl-*
	patch -Np1 -i ../openssl-1.0.1e-fix_parallel_build-1.patch
	patch -Np1 -i ../openssl-1.0.1e-fix_pod_syntax-1.patch
	./config --prefix=/usr --openssldir=/etc/ssl shared zlib-dynamic
	make
	make MANDIR=/usr/share/man MANSUFFIX=ssl install
	install -dv -m755 /usr/share/doc/openssl-1.0.1e
	cp -vfr doc/*     /usr/share/doc/openssl-1.0.1e
	cd ..
	echo Finished, Cleaning up...
	rm -r openssl-*
	rm openssl-*.patch
	rm openssl-*.tar*
	echo Done!
	exit
fi
usage
