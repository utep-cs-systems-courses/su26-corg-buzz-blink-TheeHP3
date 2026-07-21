#include <msp430.h>

#include "switches.h"
#include "stateMachines.h"

void __attribute__((interrupt(WDT_VECTOR))) WDT_ISR(void)
{
    switch_update();
    state_machine();
}
