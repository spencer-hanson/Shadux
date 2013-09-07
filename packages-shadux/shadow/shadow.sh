#Installs shadow to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs shadow to the system
        echo --update updates the data for shadow
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating shadow...
        cd shadow
        wget $(../links.sh shadow)
        mv shadow-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing shadow...
        cp data/shadow-*.tar* shadow
        cd shadow
       	tar xf shadow-*tar*
	cd shadow-*
	sed -i 's/groups$(EXEEXT) //' src/Makefile.in
	find man -name Makefile.in -exec sed -i 's/groups\.1 / /' {} \; &&
	sed -i -e 's/ ko//' -e 's/ zh_CN zh_TW//' man/Makefile.in
	sed -i -e 's@#ENCRYPT_METHOD DES@ENCRYPT_METHOD SHA512@' \
       -e 's@/var/spool/mail@/var/mail@' etc/login.defs
	sed -i -e 's@PATH=/sbin:/bin:/usr/sbin:/usr/bin@&:/usr/local/sbin:/usr/local/bin@' \
       -e 's@PATH=/bin:/usr/bin@&:/usr/local/bin@' etc/login.defs
	./configure --prefix=/usr --sysconfdir=/etc
	make
	make install
	mv -v /usr/bin/passwd /bin
	sed -i 's/yes/no/' /etc/default/useradd
	install -v -m644 /etc/login.defs /etc/login.defs.orig
	for FUNCTION in FAIL_DELAY FAILLOG_ENAB \
                LASTLOG_ENAB \
                MAIL_CHECK_ENAB \
                OBSCURE_CHECKS_ENAB \
                PORTTIME_CHECKS_ENAB \
                QUOTAS_ENAB \
                CONSOLE MOTD_FILE \
                FTMP_FILE NOLOGINS_FILE \
                ENV_HZ PASS_MIN_LEN \
                SU_WHEEL_ONLY \
                CRACKLIB_DICTPATH \
                PASS_CHANGE_TRIES \
                PASS_ALWAYS_WARN \
                CHFN_AUTH ENCRYPT_METHOD \
                ENVIRON_FILE
	do
	    sed -i "s/^${FUNCTION}/# &/" /etc/login.defs
	done
	echo Setting up /etc/pam.d/system-account...
	cat > /etc/pam.d/system-account << "EOF"
	# Begin /etc/pam.d/system-account

	account   required    pam_unix.so

	# End /etc/pam.d/system-account
	EOF

	echo Setting up /etc/pam.d/system-auth...
	cat > /etc/pam.d/system-auth << "EOF"
	# Begin /etc/pam.d/system-auth

	auth      required    pam_unix.so

	# End /etc/pam.d/system-auth
	EOF

	echo Setting up /etc/pam.d/system-session...
	cat > /etc/pam.d/system-session << "EOF"
	# Begin /etc/pam.d/system-session

	session   required    pam_unix.so

	# End /etc/pam.d/system-session
	EOF

	echo Setting up /etc/pam.d/system-password...
	cat > /etc/pam.d/system-password << "EOF"
	# Begin /etc/pam.d/system-password

	# use sha512 hash for encryption, use shadow, and try to use any previously
	# defined authentication token (chosen password) set by any prior module
	password  required    pam_unix.so       sha512 shadow try_first_pass

	# End /etc/pam.d/system-password
	EOF

	echo Setting up /etc/pam.d/login...
	cat > /etc/pam.d/login << "EOF"
	# Begin /etc/pam.d/login

	# Set failure delay before next prompt to 3 seconds
	auth      optional    pam_faildelay.so  delay=3000000

	# Check to make sure that the user is allowed to login
	auth      requisite   pam_nologin.so

	# Check to make sure that root is allowed to login
	# Disabled by default. You will need to create /etc/securetty
	# file for this module to function. See man 5 securetty.
	#auth      required    pam_securetty.so

	# Additional group memberships - disabled by default
	#auth      optional    pam_group.so

	# include the default auth settings
	auth      include     system-auth

	# check access for the user
	account   required    pam_access.so

	# include the default account settings
	account   include     system-account

	# Set default environment variables for the user
	session   required    pam_env.so

	# Set resource limits for the user
	session   required    pam_limits.so

	# Display date of last login - Disabled by default
	#session   optional    pam_lastlog.so

	# Display the message of the day - Disabled by default
	#session   optional    pam_motd.so

	# Check user's mail - Disabled by default
	#session   optional    pam_mail.so      standard quiet

	# include the default session and password settings
	session   include     system-session
	password  include     system-password

	# End /etc/pam.d/login
	EOF
	echo Setting up /etc/pam.d/passwd...
	cat > /etc/pam.d/passwd << "EOF"
	# Begin /etc/pam.d/passwd

	password  include     system-password

	# End /etc/pam.d/passwd
	EOF

	echo Setting up /etc/pam.d/su...
	cat > /etc/pam.d/su << "EOF"
	# Begin /etc/pam.d/su

	# always allow root
	auth      sufficient  pam_rootok.so
	auth      include     system-auth

	# include the default account settings
	account   include     system-account

	# Set default environment variables for the service user
	session   required    pam_env.so

	# include system session defaults
	session   include     system-session

	# End /etc/pam.d/su
	EOF

	echo Setting up /etc/pam.d/chage...
	cat > /etc/pam.d/chage << "EOF"
	#Begin /etc/pam.d/chage

	# always allow root
	auth      sufficient  pam_rootok.so

	# include system defaults for auth account and session
	auth      include     system-auth
	account   include     system-account
	session   include     system-session

	# Always permit for authentication updates
	password  required    pam_permit.so

	# End /etc/pam.d/chage
	EOF
	echo Setting up misc. files...

	for PROGRAM in chfn chgpasswd chpasswd chsh groupadd groupdel \
        	       groupmems groupmod newusers useradd userdel usermod
	do
	    install -v -m644 /etc/pam.d/chage /etc/pam.d/${PROGRAM}
	    sed -i "s/chage/$PROGRAM/" /etc/pam.d/${PROGRAM}
	done

	echo Setting up /etc/pam.d/other...
	cat > /etc/pam.d/other << "EOF"
	# Begin /etc/pam.d/other

	auth        required        pam_warn.so
	auth        required        pam_deny.so
	account     required        pam_warn.so
	account     required        pam_deny.so
	password    required        pam_warn.so
	password    required        pam_deny.so
	session     required        pam_warn.so
	session     required        pam_deny.so

	# End /etc/pam.d/other
	EOF

	[ -f /etc/login.access ] && mv -v /etc/login.access{,.NOUSE}
	[ -f /etc/limits ] && mv -v /etc/limits{,.NOUSE}
	cd ..
        echo Finished, Cleaning up...
        rm shadow-*.tar*
        rm -r shadow-*
        echo Done!
        exit
fi
usage
