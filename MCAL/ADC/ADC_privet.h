
#ifndef ADC_PRIVET_H_
#define ADC_PRIVET_H_


#define ADMUX   *((volatile uint8_t *)0x27)       /*ADC MULTIPLEXER SELECTION REGISTER*/

#define REFS1    7             /*ADC REFRENCE SELCTION BITS*/
#define REFS0    6
#define ADLAR    5             /*ADC LEFT ADJUST RESULT*/
#define MUX4     4             /*ADC SELECT CHANALES AND GAINS BIT*/
#define MUX3     3             /*ADC SELECT CHANALES AND GAINS BIT*/
#define MUX2     2             /*ADC SELECT CHANALES AND GAINS BIT*/
#define MUX1     1             /*ADC SELECT CHANALES AND GAINS BIT*/
#define MUX0     0             /*ADC SELECT CHANALES AND GAINS BIT*/






#define ADCSRA  *((volatile uint8_t *)0x26)        /*ADC CONTROL AND STATUES REGISTER*/

#define ADEN   7                  /*ADC ENABEL BIT*/
#define ADSC   6                   /*ADC START CONVERSION*/
#define ADATE  5                   /*ADC AUTO TRIGRRING*/
#define ADIF   4                   /*ADC INTURRUPT FLAG BIT*/
#define ADIE   3                   /*ADC SPACEFIC ITURRUPYT ENABEL*/
#define ADPS2  2                   /*ADC PRESCALLER SELECTIONBITS*/
#define ADPS1  1
#define ADPS0  0



#define ADCH    *((volatile uint8_t *)0x25)        /*ADC HIGH DATA REGISTER*/
#define ADCL    *((volatile uint8_t *)0x24)         /*ADC LOW DATA REGISTRE*/

#define SFIOR    *((volatile uint8_t *)0x50)         /*SPETIAL FUNCTION INPUT OUTPUT REGISTER*/

#define ADC_DATA    *((uint16_t *)0x24)


          /*FOR REFRENCE VOLTAGE*/
#define AVCC                   1
#define AREF                   2
#define INTERNAL_2_56          3

          /*FOR PRESCALER*/
#define  MASK_VALUE   0b11111000
#define  DIVIDE_BY_2   1
#define  DIVIDE_BY_4   2
#define  DIVIDE_BY_8   3
#define  DIVIDE_BY_16  4
#define  DIVIDE_BY_32  5
#define  DIVIDE_BY_64  6
#define  DIVIDE_BY_128 7
#endif
