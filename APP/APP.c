/*
 * APP.c
 *
 *  Created on: Jan 22, 2022
 *      Author: abdalah
 */


#include "primitive_data_types.h""

void main()
{
	uint16_t  Digital_value=0 ;
	uint16_t Vin =0;
	ADC_VOIDINT();
	LCD_VoidInit4b();



	while(1)
	{
		         /*Test case for analog input*/
		 Digital_value=ADC_U8ReadValue(0);
	  uint8_t * ptr ="digital=";
		LCD_VoidWriteStringfor4bits(ptr);

		/*Display digital input*/
		LCD_WriteNum(Digital_value);

		/*delay for visualize */
		LCD_VoidDelay(500);

		/*clear LCD*/
		LCD_VoidWriteCommand4b(0x01);
		LCD_SetCursorFor4bits(0,0);
	}
}
