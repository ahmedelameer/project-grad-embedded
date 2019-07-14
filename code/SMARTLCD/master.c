/*
 * master.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */





#include"LCD_SMART.h"
#include"LCD.h"


int main(void){

	LCD_init();

	UART_init();
    DDRD|=0x80;




	while(1){

		Write_Command(0x00,0x0F);
		Write_Command(0x02,0x01);
		Write_Command(0x04,0x02);
		Write_Command(0x08,0x03);



_delay_ms(10000);




		//      AA 3D 00 08 00 00 0000 CC 33 C3 3C

		    UART_sendByte(0xAA);

		    UART_sendByte(0x3D);
/***********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x08);

		    UART_sendByte(0x00);

		    UART_sendByte(0x00);
/***********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x0A);
/***********************************************************************************/
		    UART_sendByte(0xCC);

		    UART_sendByte(0x33);

		    UART_sendByte(0xC3);

		    UART_sendByte(0x3C);



_delay_ms(100);



		    UART_sendByte(0xAA);

		    UART_sendByte(0x3D);
/*************************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x08);

		    UART_sendByte(0x00);

		    UART_sendByte(0x02);
/**************************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x0B);
/**************************************************************************************/
		    UART_sendByte(0xCC);

		    UART_sendByte(0x33);

		    UART_sendByte(0xC3);

		    UART_sendByte(0x3C);


_delay_ms(100);


		    UART_sendByte(0xAA);

		    UART_sendByte(0x3D);
/********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x08);

		    UART_sendByte(0x00);

		    UART_sendByte(0x04);
/*********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x0C);
/*********************************************************************************/
		    UART_sendByte(0xCC);

		    UART_sendByte(0x33);

		    UART_sendByte(0xC3);

		    UART_sendByte(0x3C);



		    _delay_ms(100);


		    UART_sendByte(0xAA);

		    UART_sendByte(0x3D);
		    /********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x08);

		    UART_sendByte(0x00);

		    UART_sendByte(0x06);
		    /*********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x0D);
		    /*********************************************************************************/
		    UART_sendByte(0xCC);

		    UART_sendByte(0x33);

		    UART_sendByte(0xC3);

		    UART_sendByte(0x3C);


		    _delay_ms(100);


		    UART_sendByte(0xAA);

		    UART_sendByte(0x3D);
		    /********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x08);

		    UART_sendByte(0x00);

		    UART_sendByte(0x08);
		    /*********************************************************************************/
		    UART_sendByte(0x00);

		    UART_sendByte(0x0E);
		    /*********************************************************************************/
		    UART_sendByte(0xCC);

		    UART_sendByte(0x33);

		    UART_sendByte(0xC3);

		    UART_sendByte(0x3C);



		    //AA 3E 00 08 00 00 CC 33 C3 3C
		  /*  LCD_displayStrRowCol(0,0,"ahmed");
		    UART_sendByte(0xAA);

		    UART_sendByte(0x3E);

		    UART_sendByte(0x00);

		    UART_sendByte(0x08);

		    UART_sendByte(0x00);

		    UART_sendByte(0x00);

		    UART_sendByte(0xCC);

		    UART_sendByte(0x33);

			UART_sendByte(0xC3);

			UART_sendByte(0x3C);

			x=UART_recieveByte();
			num= (num & 0xFF00)| x ;
			x=UART_recieveByte();
			num= (num & 0x00FF)|((num<<8)|x);
			LCD_gotoRawCol(1,0);
			LCD_IntToStr(num);*/



		    PORTD^=(1<<7);















	}


	return 0;
}
