echo Are you sure? \(y/n\)
read SURE
if [ $SURE = "Y" ] || [ $SURE = "y" ]; then
echo Cleaning...
rm -r bin
rm -r boot
rm -r dev
rm -r etc
rm -r home
rm -r lib
rm -r media
rm -r mnt
rm -r opt
rm -r proc
rm -r root
rm -r run
rm -r sbin
rm -r srv
rm -r sys
rm -r tmp
rm -r usr
rm -r var
echo Done!
fi
exit
