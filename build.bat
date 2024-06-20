@echo off

:: Build and link
@call avr-gcc -I../avr-lib/include -Os -DF_CPU=8000000 -mmcu=attiny85 -c src/main.c -o bin/main.o

:: Get the avrlib dir
@call COPY ..\avr-lib\bin\libavr.a bin\

@call avr-gcc -DF_CPU=8000000 -mmcu=attiny85 -o bin/obj.out bin/main.o -L%CD%/bin/ -l:libavr.a
@call avr-objcopy -O ihex bin/obj.out bin/obj.hex
