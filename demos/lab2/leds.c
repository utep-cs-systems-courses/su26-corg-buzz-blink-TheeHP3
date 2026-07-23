#include <msp430.h>
#include "leds.h"

void leds_init()
{
    /* Red LED = P1.0
       Green LED = P1.6 */

    P1DIR |= BIT0;
    P1DIR |= BIT6;

    P1OUT &= ~(BIT0 | BIT6);
}
