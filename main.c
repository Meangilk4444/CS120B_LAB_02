#include <avr/io.h>
#include "simAVRHeader.h"

int main(void)
{
	DDRM = 0xFF;
	PORTB = 0x00;
	while(1)
	{
		PORTB = 0x0F;
	}
	return 1;
}
