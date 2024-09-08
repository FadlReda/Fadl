/*
 * ADC.h
 *
 * Created: 8/21/2024 1:34:11 AM
 *  Author: Ascom`
 */ 

#ifndef ADC_H_
#define ADC_H_


#include <avr/io.h>
#include "std_macros.h"

void ADC_init(void);
uint16_t ADC_read(void);


#endif /* ADC_H_ */
