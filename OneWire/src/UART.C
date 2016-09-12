#include "main.h"


void uinit( void )
{
  UBRR1L = bauddivider;			//set baud rate
  UBRR1H = bauddivider >> 8;
  UCSR1A = 0;				//no U2X, MPCM
  UCSR1C = (1<<USBS1)|(3<<UCSZ10);	//8 Bit
  UCSR1B = (1<<RXEN1)|(1<<TXEN1);
}


void uputchar( char c )
{
  while( (UCSR1A & 1<<UDRE1) == 0 );
  UDR1 = c;
}


void uputs( char *s )
{
  while( *s )
    uputchar( *s++ );
}


void uputsnl( char *s )
{
  uputs( s );
  uputchar( 0x0D );
}
