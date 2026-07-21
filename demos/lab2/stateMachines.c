#include "buzzer.h"
#include "stateMachines.h"

void state_machine(int state)
{
    switch(state)
    {
        case 1:
            buzzer_set_period(1818);
            break;

        case 2:
            buzzer_set_period(1529);
            break;

        case 3:
            buzzer_set_period(1212);
            break;

        case 4:
            buzzer_set_period(909);
            break;

        default:
            buzzer_set_period(0);
            break;
    }
}
