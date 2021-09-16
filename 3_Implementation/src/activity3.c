#include "activity3.h"

/**
 * @brief PWM port definitions
 * 
 */
void portPWM(){

    TCCR1A |= NonInveringPWM|ModeSelection2|ModeSelection1;
    TCCR1B |= ModeSelection3|PWMPrescalar;
    DDRB |= LEDPWM;

}