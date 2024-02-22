/*
			8bit-ray caster
Ray-Caster written in C99 for the ATmega328 and the LCD TFT ST7735.

Copyright (C) 2023  Gabriel Felipe S. da Silva

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <avr-base/avr_registers.h>
#include <devices/st7735/st7735.h>

int main (int argc, char** argv)
{
// The file objects are compiled in separeted commands, therefore gcc cannot predict the definition
// of the functions in the avr-lib, which will come only in the future, during linking.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
	
	// Arduino UNO board oscillator frequency = 16 MHz.
	init_spi(16u);



	close_spi();

#pragma GCC diagnostic pop
	return 0x0;
}
