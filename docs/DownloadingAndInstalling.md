# Introduction
LC3Tools is a cross-platform set of tools to build code for and simulate the LC-3 system
described in Introduction to Computing.

# Download
The latest version of LC3Tools for all platforms can be found at
[https://github.com/chiragsakhuja/lc3tools/releases](https://github.com/chiragsakhuja/lc3tools/releases)

**Windows Users**: lc3tools-setup-VERSION.exe

**macOS Users**: LC3Tools-VERSION.dmg

**Linux Users**: lc3tools-VERSION-x86_64.AppImage

The latest VERSION at the time of writing is 2.0.0.

# Install
**Windows Users**: Double-click the executable to install LC3Tools.

**macOS Users**: Double-click the DMG to mount a virtual drive in which you can drag the
LC3Tools.app file into the Applications directory to install it (similar to how many programs are
installed).

**Linux Users**: First mark the AppImage as executable (chmod +x). Then, double-click the
executable, which will prompt you to either 1) install LC3Tools or 2) open LC3Tools without
installation. 
>Note that GLIBC version >= 2.19 is necessary on Linux.

>If AppImage files does not start with a double-click, try running from the terminal window ```./LC3Tools-VERSION.AppImage```
>
>If an error similar to ```AppImages require FUSE to run``` appears, review [FUSE Wiki](https://github.com/AppImage/AppImageKit/wiki/FUSE) and search for your linux distribution

>***Note from Stack Overflow***:
>
>*fuse* is present in the Ubuntu repositories, and therefore can be safely installed.
>
>However, it conflicts with a newer version of *fuse*, *fuse3*, which is installed by default. If you choose to use fuse rather than *fuse3*, you will lose some functionality that depends on *fuse3*

# Additional Resources
There are several other resources, including more documentation and instructions on the
command line tools, at [https://github.com/chiragsakhuja/lc3tools.git](https://github.com/chiragsakhuja/lc3tools.git)
