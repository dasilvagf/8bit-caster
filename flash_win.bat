:: Flash the code to the avr
@call avrdude -c arduino -p m328p  -P com4 -U flash:w:obj.hex
