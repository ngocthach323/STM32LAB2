/*
 * excercise9.c
 *
 *  Created on: Oct 1, 2024
 *      Author: ACER
 */
#include "excercise9.h"

int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};

void displayLedMatrix(int row, int col) {
	int shift = 1;
	if (row == 0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}

	if (row == 1) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}

	if (row == 2) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}

	if (row == 3) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}

	if (row == 4) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}

	if (row == 5) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}

	if (row == 6) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}

	if (row == 7) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - (col & shift));
		col = col >> 1;
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - (col & shift));
	}
}

void updateLedMatrix(int index) {
	switch (index) {
		case 0:
			displayLedMatrix(0, matrix_buffer[0]);
			break;
		case 1:
			displayLedMatrix(1, matrix_buffer[1]);
			break;
		case 2:
			displayLedMatrix(2, matrix_buffer[2]);
			break;
		case 3:
			displayLedMatrix(3, matrix_buffer[3]);
			break;
		case 4:
			displayLedMatrix(4, matrix_buffer[4]);
			break;
		case 5:
			displayLedMatrix(5, matrix_buffer[5]);
			break;
		case 6:
			displayLedMatrix(6, matrix_buffer[6]);
			break;
		case 7:
			displayLedMatrix(7, matrix_buffer[7]);
			break;
		default:
			break;
	}
}


