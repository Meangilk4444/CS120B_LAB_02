/*	Author: phuan033
 *  Partner(s) Name: Karen Gonzalez
 *	Lab Section:025?
 *	Assignment: Lab #2  Exercise #?
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned char tmpB = 0x00; // Temporary variable to hold the value of B
	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
while(1) {
		// 1) Read input
		tmpA = PINA & 0x03;
		// 2) Perform computation
		// if PA is 01 then PB is 1;
		if ((tmpA == 0x01)) { // True if PA0A1 is 1
 			tmpB =  0x01; // Sets tmpB to 1								
 											
		} else { 																		 					tmpB =  0x00; // Sets tmpB to 0
												 												 		}															 																 			PORTB = tmpB;	
	} 																		 												 					return 0;
	 																		 												 					}
