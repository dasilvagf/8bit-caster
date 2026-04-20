# Flash the code to the avr
avrdude -c arduino -p m328p  -P /dev/ttyUSB0 -U flash:w:bin/obj.hex