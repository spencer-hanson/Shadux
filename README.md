# Shadux

INSTALL ORDER
--------------
* openssl
* certauth
* openssh
* gpm
* links
* linuxpam
* shadow
* man


TODO 
---------
* Hardened Linux from scratch
* Rebuild all the packages manually
* Recreate all build packages scripts
* Parted isn't built
* Break up usersys.sh into other scripts
* dhcpcd.sh download tarfile link
* Bootscripts builds certian packages to run on boot
* scripts/install.conf has building info
* iptables doesn't work
* no internet interfaces
* other users bash prompt look bad
* set hostname somewhere to Shadux
* charset data/locale thingy
* add apt-get/dpkg support
* add lspci and lsusb
* Nano seems to be in the packages and in the compile script
* Don't forget to fix all of the requirements

KERNEL NOTES
==================================
~~~~

Device Drivers --->

 USB support --->

  USB Wireless Device Management support

  EHCI HCD USB 2.0

  OHCI HCD support

  UHCI HCD support

  USB Mass Storage support

  Generic Driver Options --->

    Maintain a devtmpfs filesystem to mount at /dev

Block devices --->

  Loopback device support

Serial ATA and Parallel ATA drivers --->

  ATA SFF support --->

    ATA BMDMA support --->

      VIA SATA support

      VIA PATA support

Fusion MPT device support --->

  Fusion MPT ScsiHost for SPI

  Fusion MPT ScsiHost for FC

  Fusion MPT ScsiHost for SAS

Network device support --->

  Ethernet driver support --->

    AMD devices --->

      AMD PCnet32 PCI support

    Intel devices --->

      Intel(R) PRO/1000 Gigabit Ethernet support

    VIA devices --->

      VIA Rhine support

  Wireless LAN --->

    Atheros Wireless Cards --->

      Atheros 5xxx wireless cards support

Device Drivers ---> Graphics Support --->

  Direct Rendering Manager --->

    Intel 8xx/9xx/G3x/G4x/HD Graphics --->

      Enable modesetting on intel by default

Frame Buffer Device ---> Support for frame buffer devices --->

    VESA VGA graphics support

  Bootup logo --->

    Standard 224-color Linux logo

  Sound card support --->

    Advanced Linux Sound Arch --->

      PCI sound devices --->

        Ensoniq AudioPCI 1371/1373

        Intel/SiS/nVidia/AMD/ALi AC97 Controller

        VIA 82C686A/B, 8233/8235 AC97 Controller

File systems --->

  Miscellaneous filesystems --->

    SquashFS 4.0 - Squashed file system support --->

      Include support for ZLIB compressed file systems

      Include support for LZO compressed file systems

      Include support for XZ compressed file systems

  Second extended fs support

  Ext3 journalling file system support

  The Extended 4 (ext4) filesystem

  Btrfs filesystem (EXPERIMENTAL)

  CD-ROM/DVD Filesystems --->

    ISO 9660 CDROM file system support

      Microsoft Joliet CDROM extensions

    UDF file system support

  DOS/FAT/NT Filesystems --->

    MSDOS fs support

    VFAT (Windows-95) fs support

      Default codepage for FAT: "437"

      Default iocharset for FAT: "iso8859-1"

  NSFS file system support --->

      NTFS write support

  Miscellaneous filesystems --->

    SquashFS 4.0 - Squashed file system support --->

      Include support for ZLIB compressed file systems

      Include support for LZO compressed file systems

      Include support for XZ compressed file systems
 ~~~~
