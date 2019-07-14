/*
 * SMARTLCD.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"LCD_SMART.h"



// AA 3D 00 08 00 00 00 0F CC 33 C3 3C

 void Write_Command(unit8 VP_LSB_address,unit8 _8bit_data){

	 UART_sendByte(0xAA);

	 UART_sendByte(0x3D);
	 /***********************************************************************************/
	 UART_sendByte(0x00);

	 UART_sendByte(0x08);

	 UART_sendByte(0x00);

	 UART_sendByte(VP_LSB_address);
	 /***********************************************************************************/
	 UART_sendByte(0x00);

	 UART_sendByte(_8bit_data);
	 /***********************************************************************************/
	 UART_sendByte(0xCC);

	 UART_sendByte(0x33);

	 UART_sendByte(0xC3);

	 UART_sendByte(0x3C);

	 _delay_ms(10);

  }

