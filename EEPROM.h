/*
 * EEPROM.h
 *
 * Created: 8/21/2024 1:37:22 AM
 *  Author: Ascom`
 */ 

#ifndef EEPROM_H_
#define EEPROM_H_

#include <avr/io.h>
#include "std_macros.h"

void EEPROM_write(const unsigned short addr, unsigned char data);
unsigned char EEPROM_read(const unsigned short addr);

#endif /* EEPROM_H_ */
