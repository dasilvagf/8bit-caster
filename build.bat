@echo off

:: Build and link
@call avr-gcc -I. -Os -DF_CPU=8000000 -mmcu=attiny85 -c src/main.c -o main.o
@call avr-gcc -DF_CPU=8000000 -mmcu=attiny85 -o obj.out main.o
@call avr-objcopy -O ihex obj.out obj.hex

:: Flash the code to the Arduino Board
@call avrdude -c arduino -p m328p  -P com6 -U flash:w:obj.hex
