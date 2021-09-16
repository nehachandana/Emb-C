#include "activity2.h"

/**
 * @brief initialising ADC conbersion by setting voltage reference as AVcc and prescalar selected as 64
 * 
 */
void InitADC()
{
    /**
     * @brief selecting voltage reference for ADC
     * 
     */
    ADMUX = VoltageReference; // Aref = AVcc

    ADCSelect = EnableADC|PreScalor;

}

/**
 * @brief 
 * 
 * @param ch To select channel from which analog input is obtained
 * @return uint16_t returns Analog to digital converted value
 */
uint16_t ReadADC(uint8_t ch)
{
    /** 
     * @brief selecting ADC channel
     *
     */
    ADMUX SelectMUX;
    ch = SelectChannel;
    ADMUX |= ch;

     /**
      * 
      * @brief starting ADC Conversion
      *
      */
     ADCSelect|=StartConversion;

     /**
      * 
      * @brief waiting for the conversion to complete
      *
      */

     while(ConversionCompletes);
     /** 
      * @brief clearing ADIF by writing one to it, that is conversion is complete
      *
      */
     ADCSelect|=EndConversion;

     /** 
      * @brief returning the analogue to digital converted value
      *
      */
     return(ADC);


}