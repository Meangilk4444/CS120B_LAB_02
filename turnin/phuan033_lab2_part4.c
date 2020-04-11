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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTD = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
//	unsigned char tmpC = 0x00; // Temporary variable to hold the value of B
	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char tmpD = 0x00;
	unsigned char tmpE = 0x00;
	unsigned char tmpF = 0x00;
//	unsigned char tmpG = 0x00;
//	unsigned char checkifF = 0x00;
while(1) {
		// 1) Read input
		tmpA = PINA & 0xFF;
		tmpB = PINB & 0xFF; 
		tmpC = PINC & 0xFF; 		
		
		if(tmpA > tmpC)
		{
			tmpE = tmpA - tmpC;
		}
		else
		{
			tmpE = tmpC - tmpA;
		}
		
		 
		tmpD = tmpA + tmpB + tmpC;
		tmpF = (tmpD & 0xFC);
						
		if(tmpD > 140)
		{	
			tmpF = tmpF | 0x01;	
		}
		
		if(tmpE > 80)
		{
			tmpF = tmpF | 0x02;		
		}
		
		
		
		PORTD = tmpF;
	} 																		 									return 0;																									}

