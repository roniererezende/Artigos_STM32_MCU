/*
 * BarramentoLeds.h
 *
 *  Created on: Jun 17, 2020
 *      Author: Eduardo
 */

#ifndef BARRAMENTOLEDS_H_
#define BARRAMENTOLEDS_H_

#include "stdint.h"
#include "stdbool.h"
#include "main.h"

#define DESLIGA_LED_0 	HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, GPIO_PIN_SET)
#define LIGA_LED_0 		HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, GPIO_PIN_RESET)
#define LER_LED_0 		HAL_GPIO_ReadPin(LED_0_GPIO_Port, LED_0_Pin)

#define DESLIGA_LED_1 	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET)
#define LIGA_LED_1 		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET)
#define LER_LED_1 		HAL_GPIO_ReadPin(LED_1_GPIO_Port, LED_1_Pin)

#define DESLIGA_LED_2 	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET)
#define LIGA_LED_2 		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET)
#define LER_LED_2 		HAL_GPIO_ReadPin(LED_2_GPIO_Port, LED_2_Pin)

#define DESLIGA_LED_3 	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET)
#define LIGA_LED_3 		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET)
#define LER_LED_3 		HAL_GPIO_ReadPin(LED_3_GPIO_Port, LED_3_Pin)

#define DESLIGA_LED_4 	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET)
#define LIGA_LED_4 		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET)
#define LER_LED_4 		HAL_GPIO_ReadPin(LED_4_GPIO_Port, LED_4_Pin)

#define DESLIGA_LED_5 	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET)
#define LIGA_LED_5 		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET)
#define LER_LED_5 		HAL_GPIO_ReadPin(LED_5_GPIO_Port, LED_5_Pin)

#define DESLIGA_LED_6 	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET)
#define LIGA_LED_6 		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET)
#define LER_LED_6 		HAL_GPIO_ReadPin(LED_6_GPIO_Port, LED_6_Pin)

#define DESLIGA_LED_7 	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET)
#define LIGA_LED_7 		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET)
#define LER_LED_7 		HAL_GPIO_ReadPin(LED_0_GPIO_Port, LED_7_Pin)

enum {
	DESLIGAR,
	LIGAR,
	LER_ESTADO
};

uint8_t controleLED(uint8_t leds, uint8_t oper);
void sequencial(void);

#endif /* BARRAMENTOLEDS_H_ */
