/*
 * excercise10.c
 *
 *  Created on: Oct 2, 2024
 *      Author: ACER
 */
#include "excercise10.h"

int index_led_matrix = 0;

uint8_t matrix_buffer[8] = {0x18, 0x3C, 0x7E, 0xFF, 0xFF, 0x7E, 0x3C, 0x18};

void displayLedMatrix(int row, int col) {
	if (row == 0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
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
	}

    //mảng chứa trạng thái từng cột
    int colBits[8];
    //lấy từng bit từ col và lưu vào mảng
    for (int i = 0; i < 8; ++i) {
        colBits[i] = (col >> i) & 1;
    }
    //gán trạng thái cho từng cột
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1 - colBits[7]);  // cột 0
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1 - colBits[6]);  // cột 1
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1 - colBits[5]); // cột 2
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1 - colBits[4]); // cột 3
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1 - colBits[3]); // cột 4
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1 - colBits[2]); // cột 5
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, 1 - colBits[1]); // cột 6
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1 - colBits[0]); // cột 7
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

void updateMatrix_buffer(){
	// shift bit of every buffer from right to left
	matrix_buffer[0] = (matrix_buffer[0] << 1) | (matrix_buffer[0] >> 7);
	matrix_buffer[1] = (matrix_buffer[1] << 1) | (matrix_buffer[1] >> 7);
	matrix_buffer[2] = (matrix_buffer[2] << 1) | (matrix_buffer[2] >> 7);
	matrix_buffer[3] = (matrix_buffer[3] << 1) | (matrix_buffer[3] >> 7);
	matrix_buffer[4] = (matrix_buffer[4] << 1) | (matrix_buffer[4] >> 7);
	matrix_buffer[5] = (matrix_buffer[5] << 1) | (matrix_buffer[5] >> 7);
	matrix_buffer[6] = (matrix_buffer[6] << 1) | (matrix_buffer[6] >> 7);
	matrix_buffer[7] = (matrix_buffer[7] << 1) | (matrix_buffer[7] >> 7);
}

