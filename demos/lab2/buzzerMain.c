#include <msp430.h>

#include "libTimer.h"
#include "buzzer.h"
#include "leds.h"
#include "switches.h"
#include "stateMachines.h"

int main()
{
    configureClocks();

    buzzer_init();

    leds_init();

    buzzer_set_period(0);

    switches_init();

    enableWDTInterrupts();

    or_sr(0x18);

    while(1)
    {
    }

    return 0;
}
