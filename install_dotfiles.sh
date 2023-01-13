#!/bin/bash
install="sudo make clean install"
sudo mkdir -p /opt/
cd /opt/
sudo git clone https://github.com/JefferyNani/dotfiles.git
cd /opt/dotfiles/

# install dwm dwmblocks dmenu st
cd /opt/dotfiles/dwm/
$install
cd /opt/dotfiles/dwmblocks
$install
cd /opt/dotfiles/dmenu 
$install
cd /opt/dotfiles/st
$install
cd /opt/dotfiles/scripts
chmod +x *
sudo mv * /usr/bin/
cd /opt/dotfiles
sudo mv * /opt/
echo "Please look at the github for the required Dependencies that need to be installed for the functioning of certian things in the configs"
