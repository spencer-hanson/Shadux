#Installs the os, bootloader and fstab
#!/bin/bash
echo Building...
./build.sh --build $1 $2 $3 $4 $5 $6 $7 $8 $9
install/bootloader.sh $
