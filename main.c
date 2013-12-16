/*
 * created: 8 Dec 2013
 * C2C Gared Chapman
 * Final Lab - The Maze
 * Capt Branchflower - M4
 */
#include <msp430.h>
#include "Maze.h"

int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	initializeMotors();
	ADC10init();
	_delay_cycles(1000000);

	for (;;) {
		unsigned int centerscan = detectCenter();
		unsigned int leftscan = detectLeft();

		if (leftscan > 0x1b0){
						LeftTurn();
						_delay_cycles(100000);
		}
		else if (centerscan > 0x1ff)
		{
			LeftTurn();
			_delay_cycles(100000);
		}
		else if (detectRight() > 0x380){
			RightTurn();
			_delay_cycles(100000);
		}
		else
		{
			moveForward();
		}

	}

	return 0;
}

