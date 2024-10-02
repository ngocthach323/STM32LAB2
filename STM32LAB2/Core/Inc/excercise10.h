/*
 * excercise10.h
 *
 *  Created on: Oct 2, 2024
 *      Author: ACER
 */

#ifndef INC_EXCERCISE10_H_
#define INC_EXCERCISE10_H_

#include "main.h"

extern int index_led_matrix;

void displayLedMatrix(int row, int col);
void updateLedMatrix(int index);
void updateLedMatrixBuffer();

#endif /* INC_EXCERCISE10_H_ */
