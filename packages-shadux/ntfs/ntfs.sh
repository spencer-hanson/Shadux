#Installs support for the ntfs filesystem, requires a kernel module
#!/bin/bash
function usage() {
	echo Usage $0 [--install] [--update]
	echo --install installs ntfs to the system
	echo --update updates the ntfs tarfile
}

if [ -z "$1" ] ; then
	usage
	exit
fi

if [ "$1" = "--update" ] ; then
	echo Updating ntfs...
	cd ntfs
	wget $(../links.sh ntfs)
	mv ntfs-*.t* ../data
	echo Done!
	exit
fi

fi [ "$1" = "--install" ] ; then
	echo Installing ntfs...
	cp data/ntfs-*.t* ntfs
	cd ntfs
	tar xf tars/ntfs-*.t*
	cd ntfs-*
	./configure --prefix=/usr --disable-static
	make
	make install
	ln -sv /bin/ntfs-3g /sbin/mount.ntfs
	ln -sv /usr/share/man/man8/{ntfs-3g,mount.ntfs}.8
	chmod -v 4755 /sbin/mount.ntfs
        echo Finished, Cleaning up...
        rm ntfs-*.t*
        rm -r ntfs-*
        echo Done!
        exit
fi
