/*
 * LED.c
 *
 * Created: 8/21/2024 1:44:44 AM
 *  Author: Ascom`
 */ 
#include "LED.h"

/*----------------------------------------------------------------------------*-
led_init() : to init. heating element indication led by making it an output pin.
-*----------------------------------------------------------------------------*/

void led_init(void){
	
	// PIN 0 in the port is an output pin
	// the LED pin is initially off
	
	set_bit(LED_PORT_DIR,LED_PIN);
	clr_bit(LED_PORT,LED_PIN);

}

/*----------------------------------------------------------------------------*-
LED control : to turn on/off or toggle the LED.
-*----------------------------------------------------------------------------*/

void led_on(void){
	set_bit(LED_PORT,LED_PIN);
}

void led_off(void){
	clr_bit(LED_PORT,LED_PIN);
}