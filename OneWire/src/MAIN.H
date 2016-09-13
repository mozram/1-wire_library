/************************************************************************/
/*                                                                      */
/*                      1-Wire Example					*/
/*                                                                      */
/*              Author: Peter Dannegger                                 */
/*                      danni@specs.de                                  */
/*                                                                      */
/************************************************************************/
#ifndef _main_h_
#define _main_h_
#include <avr/io.h>
#include <interrupt.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

//#define	XTAL		11059200L
#define XTAL		8000000L
#define F_CPU	8000000L //for delay 
#define	BAUD	9600
#define bauddivider (uint32_t)((XTAL / BAUD / 16) - 1)


#define uchar unsigned char
#define uint unsigned int
#define bit uchar
#define idata
#define code


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

#include "1wire.h"
#include "delay.h"
#include "tempmeas.h"
#include "timebase.h"
#include "uart.h"

#endif
