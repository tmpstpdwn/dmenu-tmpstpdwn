# dmenu - dynamic menu

dmenu is an efficient dynamic menu for X.

## Requirements

In order to build dmenu you need the Xlib header files.

## Installation

Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu (if
necessary as root):

``` bash
make clean install
```

## Applied patches

- dmenu-bar-height-5.2.diff
- dmenu-noinput-5.2.diff
- dmenu-rejectnomatch-4.7.diff
- dmenu-xresources-4.9.diff

## Running dmenu

Refer to the man page.
