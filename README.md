# dmenu - dynamic menu

dmenu is an efficient dynamic menu for X.

## Requirements

In order to build dmenu you need the Xlib header files.

## Installation

Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install

## Applied patches

- dmenu-border-20230512-0fe460d.diff
- dmenu-lineheight-5.2.diff
- dmenu-noescape-20230328-dfbbf7f.diff
- dmenu-numbers-20220512-28fb3e2.diff
- dmenu-preselect-5.2.diff
- dmenu-rejectnomatch-4.7.diff
- dmenu-xyw-5.0.diff

## Running dmenu

usage: dmenu [-bfirv] [-l lines] [-h height] [-p prompt] [-fn font] [-m monitor]
             [-no-escape] [-cn numbers] [-sf color] [-w windowid] [-sb color]
             [-x offset] [-y offset] [-z width] [-nb color] [-nf color] [-n preselect]

See the man page for more details.
