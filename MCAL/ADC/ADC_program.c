


#include "primitive_data_types.h"
#include "BIT_MATH.h"
#include "ADC_privet.h"
#include "DIO_interface.h"
#include "ADC_interface.h"


#include "ADC_config.h"


void ADC_VOIDINT(void)
{
	/*select Vref to ADC*/
#if ADC_U8_REF_SELECTION == AREF
	CLR_BIT(ADMUX ,REFS0 );
	CLR_BIT(ADMUX ,REFS1);
#elif ADC_U8_REF_SELECTION == AVCC
	SET_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);
#elif ADC_U8_REF_SELECTION == INTERNAL_2_56
	SET_BIT(ADMUX,REFS0);
	SET_BIT(ADMUX,REFS1);
#else
#error "WRONG ADC ORDER"
#endif
	/*ADCLAR= 0 (RIGHT ADJUST RESULT)*/
	
	CLR_BIT(ADMUX,5);
	

	/*ADC auto trigger enabel =0*/
	CLR_BIT(ADCSRA,5);
	
	/*Interrubt Enabel =0*/
	CLR_BIT(ADCSRA,3);
	
	/*SET prescaller configration*/

	ADCSRA &= MASK_VALUE;

	ADCSRA |= ADC_u8_PRESCALER_SELECTION ;

	/*ADC ENABEL*/
	SET_BIT(ADCSRA,ADEN);

	
}



uint16_t  ADC_U8ReadValue(uint8_t  Cop_Chnum)
{
      /*select chanal*/
	  
	  /*reset old value*/
for(uint8_t  i=0;i<=4;i++)
  CLR_BIT(ADMUX,i);


if(Cop_Chnum<8)
ADMUX|=Cop_Chnum;


/*start conversion*/

SET_BIT(ADCSRA,ADSC);



/*wait to fire flag of conversion*/

while((0)==(GET_BIT(ADCSRA,ADIF)));

/*set flag to zero because this is polling*/

SET_BIT(ADCSRA,ADIF);

/*return data*/

return ADC_DATA;
	
	
}

