curl -L https://packagecloud.io/varnishcache/varnish4/gpgkey | sudo apt-key add -
sudo apt-get install debian-archive-keyring
sudo echo "deb https://packagecloud.io/varnishcache/varnish41/ubuntu/ xenial main
deb-src https://packagecloud.io/varnishcache/varnish41/ubuntu/ xenial  main" | sudo tee /etc/apt/sources.list.d/varnishcache_varnish4.list
sudo apt-get install varnish 
sudo apt-get install varnish-dev 
sudo apt-get install libvarnishapi1 
sudo apt-get install libvarnishapi-dev
sudo apt-get install varnish-dev
sudo apt-get update
sudo apt-get install autotools-dev
sudo apt-get install autoconf
sudo apt-get install automake
sudo apt-get install libtool
sudo apt-get install python-docutils
sudo apt-get install libtool-bin
cd ~/libvmod-hiring
gco 4.1
#./autogen
#./configure --with-rst2man=true

