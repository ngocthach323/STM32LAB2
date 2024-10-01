/*
 * excercise9.h
 *
 *  Created on: Oct 1, 2024
 *      Author: ACER
 */

#ifndef INC_EXCERCISE9_H_
#define INC_EXCERCISE9_H_

#include "main.h"

extern int index_led_matrix;
extern uint8_t matrix_buffer[];

void updateLedMatrix(int index);
void displayLedMatrix(int row, int col);

#endif /* INC_EXCERCISE9_H_ */
