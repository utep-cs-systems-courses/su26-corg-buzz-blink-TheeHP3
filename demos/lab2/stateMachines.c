#include <msp430.h>

#include "buzzer.h"
#include "stateMachines.h"

char switch_state = 0;

void state_machine()
{
    switch(switch_state)
    {
        case 1:
            P1OUT |= BIT0;
            P1OUT &= ~BIT6;

            buzzer_set_period(1818);
            break;

        case 2:
            P1OUT |= BIT0;
            P1OUT &= ~BIT6;

            buzzer_set_period(1529);
            break;

        case 3:
            P1OUT &= ~BIT0;
            P1OUT |= BIT6;

            buzzer_set_period(1212);
            break;

        case 4:
            P1OUT &= ~BIT0;
            P1OUT |= BIT6;

            buzzer_set_period(909);
            break;

        default:
            P1OUT &= ~(BIT0 | BIT6);

            buzzer_set_period(0);
            break;
    }
}
