#installs gpm to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs gpm to the system
        echo --update updates the data for gpm
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating gpm...
        cd gpm
        wget $(../links.sh gpm)
        mv gpm-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing gpm...
        cp data/gpm-*.tar* gpm
        cd gpm
        tar xf gpm-*.tar*
	cd gpm-*
	./autogen.sh
	./configure --prefix=/usr --sysconfdir=/etc
	make
	install-info --dir-file=/usr/share/info/dir           \
             /usr/share/info/gpm.info
	ln -v -sfn libgpm.so.2.1.0 /usr/lib/libgpm.so
	install -v -m644 conf/gpm-root.conf /etc
	install -v -m755 -d /usr/share/doc/gpm-1.20.7/support
	install -v -m644    doc/support/*                     \
                    /usr/share/doc/gpm-1.20.7/support
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
        echo Finished, Cleaning up...
        rm gpm-*.tar*
        rm -r gpm-*
        echo Done!
        exit
fi
usage
