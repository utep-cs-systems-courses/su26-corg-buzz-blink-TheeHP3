#include <msp430.h>

#include "switches.h"

void __attribute__((interrupt(PORT2_VECTOR))) Port_2_ISR(void)
{
    switch_update();

    P2IFG &= ~(BIT0 | BIT1 | BIT2 | BIT3);
}
