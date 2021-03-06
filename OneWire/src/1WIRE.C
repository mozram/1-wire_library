/************************************************************************/
/*																		*/
/*			Access Dallas 1-Wire Devices								*/
/*                                                                      */
/*              Author: Peter Dannegger                                 */
/*                      danni@specs.de                                  */
/*			Modified for DS28E05 by: Zulhilmi Ramli						*/
/*						soul@outlook.my									*/
/*                                                                      */
/************************************************************************/
#include "main.h"
#include <util/delay.h>


#ifndef W1_PIN
#define W1_PIN	PE5
#define W1_IN	PINE
#define W1_OUT	PORTE
#define W1_DDR	DDRE

#define tRSTL	50
#define tRSTH	80
#define tMSP	8
#define tMSR	1
#define tW0L	8
#define tW1L	1
#define tRL		1
#define tSLOT	13
#define tREC	6
#endif


bit w1_reset(void)
{
  bit err;

  W1_OUT &= ~(1<<W1_PIN); //drive bus low
  W1_DDR |= 1<<W1_PIN; // set pin as output
  _delay_us(tRSTL); // reset time low
  //DELAY( DELAY_US( 480 ));			// 480 us
  cli();
  W1_DDR &= ~(1<<W1_PIN); //set pin as input. Release bus
  _delay_us(tMSP); // time slot duration 8 us
  //DELAY( DELAY_US( 66 ));
  err = W1_IN & (1<<W1_PIN);			// no presence detect
  Enable_global_interrupt();
  _delay_us(480-66);
  //DELAY( DELAY_US( 480 - 66 ));
  if( (W1_IN & (1<<W1_PIN)) == 0 )		// check for short circuit
    err = 1;
  return err;
}


uchar w1_bit_io( bit b )
{
  cli();
  W1_DDR |= 1<<W1_PIN; //set pin as output
  _delay_us(1);
  //DELAY( DELAY_US( 1 ));
  if( b )
    W1_DDR &= ~(1<<W1_PIN);
  _delay_us(tMSR);
  //DELAY( DELAY_US( 15 - 1 ));
  if( (W1_IN & (1<<W1_PIN)) == 0 )
    b = 0;
  _delay_us(tSLOT - 1 - tMSR);
  //DELAY( DELAY_US( 60 - 15 ));
  W1_DDR &= ~(1<<W1_PIN);
  Enable_global_interrupt();
  return b;
}


uint w1_byte_wr( uchar b )
{
  uchar i = 8, j;
  do{
    j = w1_bit_io( b & 1 );
    b >>= 1;
    if( j )
      b |= 0x80;
  }while( --i );
  return b;
}


uint w1_byte_rd( void )
{
  return w1_byte_wr( 0xFF );
}


uchar w1_rom_search( uchar diff, uchar idata *id )
{
  uchar i, j, next_diff;
  bit b;

  if( w1_reset() )
    return PRESENCE_ERR;			// error, no device found
  w1_byte_wr( SEARCH_ROM );			// ROM search command
  next_diff = LAST_DEVICE;			// unchanged on last device
  i = 8 * 8;					// 8 bytes
  do{
    j = 8;					// 8 bits
    do{
      b = w1_bit_io( 1 );			// read bit
      if( w1_bit_io( 1 ) ){			// read complement bit
	if( b )					// 11
	  return DATA_ERR;			// data error
      }else{
	if( !b ){				// 00 = 2 devices
	  if( diff > i ||
	    ((*id & 1) && diff != i) ){
	    b = 1;				// now 1
	    next_diff = i;			// next pass 0
	  }
	}
      }
      w1_bit_io( b );     			// write bit
      *id >>= 1;
      if( b )					// store bit
	*id |= 0x80;
      i--;
    }while( --j );
    id++;					// next byte
  }while( i );
  return next_diff;				// to continue search
}


void w1_command( uchar command, uchar idata *id )
{
  uchar i;
  w1_reset();
  if( id ){
    w1_byte_wr( MATCH_ROM );			// to a single device
    i = 8;
    do{
      w1_byte_wr( *id );
      id++;
    }while( --i );
  }else{
    w1_byte_wr( SKIP_ROM );			// to all devices
  }
  w1_byte_wr( command );
}

void w1_read_rom(uint8_t *uid)
{
	w1_reset();
	w1_byte_wr(READ_ROM);
	for(uint i = 0; i < 8; i++){
		uid[i] = w1_byte_rd();
	}
}