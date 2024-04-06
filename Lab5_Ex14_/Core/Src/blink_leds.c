/*
 * blink_leds.c
 *
 *  Created on: Feb 27, 2024
 *      Author: farhan
 */

#include "blink_leds.h"
#include "cmsis_os.h"
#include "main.h"

void flashLed(uint16_t GPIO_Pin, int delay, int cycles)
{
	for(int i = 0; i < cycles; i++)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_Pin, GPIO_PIN_SET);
		osDelay(delay);
		HAL_GPIO_WritePin(GPIOD, GPIO_Pin, GPIO_PIN_RESET);
		osDelay(delay);
	}
}




