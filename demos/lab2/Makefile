COMMON_OBJECTS  =
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h -I/opt/ti/msp430-gcc/include
LDFLAGS         = -L/opt/ti/msp430-gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: buzzer.elf

#additional rules for files
buzzer.elf: ${COMMON_OBJECTS} buzzer.o buzzerMain.o switches.o stateMachines.o leds.o p2_interrupt_handler.o wdInterruptHandler.o ../lib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: buzzer.elf
	mspdebug ${MSPLOADER_OPTION} "prog $^"

buzzer.c: buzzer.h
buzzerMain.c: buzzer.h
leds.c: leds.h
switches.c: switches.h
stateMachines.c: stateMachines.h
clean:
	rm -f *.o *.elf
