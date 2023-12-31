/*
			8bit-ray caster
Ray-Caster written in C99 for the ATmega328 and the LCD TFT ST7735.

Copyright (C) 2023  Gabriel Felipe da Silva

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

#include <stdint.h>

#include "include/avr_registers.h"

int main (int argc, char** argv)
{
	// Config SPI for data transfer
	SPCR = 0x0; // Clear
	SET_BIT(SPCR, 6); // Enable SPI
	SET_BIT(SPCR, 4); // We (the AVR) are going to act as the Master of the LED


	// Clear SPI register
	SPCR = 0x0;
	return 0x0;
}
