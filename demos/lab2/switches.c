#include <msp430.h>
#include "switches.h"

void switches_init()
{
    /* S1-S4 assumed on P2.0-P2.3 */

    P2DIR &= ~(BIT0 | BIT1 | BIT2 | BIT3);

    P2REN |= (BIT0 | BIT1 | BIT2 | BIT3);

    P2OUT |= (BIT0 | BIT1 | BIT2 | BIT3);
}

char switch_pressed()
{
    if (!(P2IN & BIT0))
        return 1;

    if (!(P2IN & BIT1))
        return 2;

    if (!(P2IN & BIT2))
        return 3;

    if (!(P2IN & BIT3))
        return 4;

    return 0;
}
