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
	DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
//	unsigned char tmpC = 0x00; // Temporary variable to hold the value of B
	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char tmpD = 0x00;
	unsigned char tmpE = 0x00;
	int availableSpots = 0;
while(1) {
		// 1) Read input
		tmpA =(PINA & 0x01) ;// 0001
		tmpC = (PINA & 0x02) >> 1; //0010
		tmpD = (PINA & 0x04) >> 2; //0100
		tmpE = (PINA & 0x08) >> 3; //1000
		// 2) Perform computation
		// if PA is 01 then PB is 1;
		tmpB = tmpA + tmpC + tmpD + tmpE;

		tmpB = 0x04 - tmpB;
		PORTC = tmpB;
	
	} 																		 												 					return 0;
	 																		 												 					}

