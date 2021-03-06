/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */
#include <asf.h>
#include "main.h"
#include <util/delay.h>

int main (void)
{
	/* Insert system clock initialization code here (sysclk_init()). */

	board_init();

	/* Insert application code here, after the board has been initialized. */

	uinit();
	Enable_global_interrupt();
	uputsnl( "1-Wire-Reader:\r\n" );

	uint8_t uid[8] = {0};

	w1_read_rom(uid);

	_delay_ms(200);
	_delay_ms(200);
	_delay_ms(200);
	_delay_ms(200);
	_delay_ms(200);
	
	_delay_ms(200);
	_delay_ms(200);
	_delay_ms(200);
	_delay_ms(200);
	_delay_ms(200);

	for(;;){				// main loop

		bit err;
		err = w1_reset();

		if(err == 32)
		{
			ioport_set_pin_high(LED_ON_BOARD);
			uputsnl("No device detected!\r\n");
		}
		else if(err == 0){
			ioport_set_pin_low(LED_ON_BOARD);
			uputsnl("Device detected!\r\n");
			}
		else if(err == 1){
			ioport_set_pin_high(LED_ON_BOARD);
			uputsnl("Wire is shorted. Check connection!\r\n");
		}
		else{
			ioport_set_pin_high(LED_ON_BOARD);
			uputsnl("Unknown error!\r\n");
		}
		_delay_ms(200);
		_delay_ms(200);
		_delay_ms(200);
		_delay_ms(200);
		_delay_ms(200);
		
		_delay_ms(200);
		_delay_ms(200);
		_delay_ms(200);
		_delay_ms(200);
		_delay_ms(200);

// 		if( second == 1 ){
// 			start_meas();
// 			second = 2;
// 		}
// 		if( second == 3 ){
// 			read_meas();
// 			second = 0;
// 		}
	}
}
