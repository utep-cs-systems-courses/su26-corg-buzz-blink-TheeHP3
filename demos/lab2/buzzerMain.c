#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

void switches_init()
{
    /* Assume S1-S4 are P2.0-P2.3 */

    P2DIR &= ~(BIT0 | BIT1 | BIT2 | BIT3);   // Inputs

    P2REN |= (BIT0 | BIT1 | BIT2 | BIT3);    // Enable pull resistors

    P2OUT |= (BIT0 | BIT1 | BIT2 | BIT3);    // Pull-up resistors
}

int main()
{
    configureClocks();

    buzzer_init();

    /* Speaker starts OFF */
    buzzer_set_period(0);

    switches_init();

    while (1)
    {
        if (!(P2IN & BIT0))
        {
            buzzer_set_period(2000);
        }
        else if (!(P2IN & BIT1))
        {
            buzzer_set_period(1500);
        }
        else if (!(P2IN & BIT2))
        {
            buzzer_set_period(1000);
        }
        else if (!(P2IN & BIT3))
        {
            buzzer_set_period(500);
        }
        else
        {
            buzzer_set_period(0);
        }
    }

    return 0;
}
