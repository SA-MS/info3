#!/bin/bash
echo PROGRAM FOR FIRST START IN ARCH
echo RUN THIS PROGRAMM IN SUDO


pacman -Syu

#FÜR COMPILIEREN UND DEBUGGEN
pacman -S gcc
pacman -S vim
pacman -S gdb
#FÜR CODEBLOCKS
pacman -S xterm
pacman -S codeblocks
#PYTHON 2&3
pacman -S python2
pacman -S python3
#ANYDESK (TEAMVIEWER)
pacman -S yay   # yay installer installieren
yay -S anydesk	# anydesk installiern
$exit
echo !!!! NOTICE - EXIT SUCESSFULLY !!!!
