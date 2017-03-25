# Led_controlled_by_phone

*** WiFi access point ***
sudo /usr/sbin/hostapd /etc/hostapd/hostapd.conf

*** Kompilacja ***
cd Desktop/LedON
gcc -o server LedON.c server.c -lwiringPi
sudo ./server
