/*
 * BarramentoLeds.c
 *
 *  Created on: Jun 17, 2020
 *      Author: Eduardo
 */
#include "BarramentoLeds.h"

uint8_t controleLED(uint8_t leds, uint8_t oper){

	uint8_t estado = 0;

	switch (oper){

	case LIGAR:{

		(leds & (1 << 0)) == 1? LIGA_LED_0:0;
		(leds & (1 << 1)) == 1? LIGA_LED_1:0;
		(leds & (1 << 2)) == 1? LIGA_LED_2:0;
		(leds & (1 << 3)) == 1? LIGA_LED_3:0;
		(leds & (1 << 4)) == 1? LIGA_LED_4:0;
		(leds & (1 << 5)) == 1? LIGA_LED_5:0;
		(leds & (1 << 6)) == 1? LIGA_LED_6:0;
		(leds & (1 << 7)) == 1? LIGA_LED_7:0;

	} break;

	case DESLIGAR:{

		(leds & (1 << 0)) == 0? DESLIGA_LED_0:0;
		(leds & (1 << 1)) == 0? DESLIGA_LED_1:0;
		(leds & (1 << 2)) == 0? DESLIGA_LED_2:0;
		(leds & (1 << 3)) == 0? DESLIGA_LED_3:0;
		(leds & (1 << 4)) == 0? DESLIGA_LED_4:0;
		(leds & (1 << 5)) == 0? DESLIGA_LED_5:0;
		(leds & (1 << 6)) == 0? DESLIGA_LED_6:0;
		(leds & (1 << 7)) == 0? DESLIGA_LED_7:0;

	} break;

	case LER_ESTADO:{

		estado = 0;

		estado |= (LER_LED_0 << 0);
		estado |= (LER_LED_1 << 1);
		estado |= (LER_LED_2 << 2);
		estado |= (LER_LED_3 << 3);
		estado |= (LER_LED_4 << 4);
		estado |= (LER_LED_5 << 5);
		estado |= (LER_LED_6 << 6);
		estado |= (LER_LED_7 << 7);
	}
	}

	return estado;
}

void sequencial(void){

	uint8_t leds;

	for(uint8_t i = 0; i<8; i++){

		leds = (1<<i);
		controleLED(leds, DESLIGAR);
		controleLED(leds, LIGAR);
		HAL_Delay(500);

	}
}
