/*
 * SmecarApp.c
 *
 * Created: 29.12.2018. 16.47.40
 * Author : User23
 */ 
#define F_CPU 9600000UL
#include <avr/delay.h>
#include <avr/io.h>
#define USLOVSPEEDLIMIT 0x08 //Maska za speed limit
#define USLOVENGINEOFF  0x18 //Maska za engine OFF

void Init();
void SpeedLimitEngineOFF();
int main(void)
{
	Init();
        while (1) 
    {
		SpeedLimitEngineOFF();//proverava na kojim su pinovima signali prisutni i na osnovu njih radi dalje.
	}
}
void Init()
{
	DDRB=0;
	DDRB |= 1<<DDB2 | 1<<DDB1;//PINOVI 2 I 1 PORTA B SU OUTPUT
	PORTB |= 1<<PORTB3 | 1<<PORTB4;//PINOVI 3 I 5 PORTA B SU INPUT I AKTIVIRAN IM JE PULLUP OTPORNIK
}
void SpeedLimitEngineOFF()
{
	if (!(PINB & USLOVSPEEDLIMIT))
	{
		PORTB |= 1<<PORTB2;
		
		if (!(PINB & USLOVENGINEOFF))
		{
			PORTB |= 1<<PORTB1;
			_delay_ms(5000);
		}
		else
		{
			PORTB &= ~(1<<PORTB1);
		}
	}
	else
	{
		PORTB &= ~(1<<PORTB2);
		PORTB &= ~(1<<PORTB1);
	}
	
	
}



