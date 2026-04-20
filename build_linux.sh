# Build source object
avr-gcc -I./ -Os -DF_CPU=8000000 -mmcu=attiny85 -c src/main.c -o bin/main.o

# Copy lib to our build directory
cp ../avr-lib/bin/libavr.a bin\

avr-gcc -DF_CPU=8000000 -mmcu=attiny85 -o bin/obj.out bin/main.o -Lbin/ -l:libavr.a
avr-objcopy -O ihex bin/obj.out bin/obj.hex
