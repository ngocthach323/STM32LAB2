/*
 * excercise7.h
 *
 *  Created on: Oct 1, 2024
 *      Author: ACER
 */

#ifndef INC_EXCERCISE7_H_
#define INC_EXCERCISE7_H_

#include "main.h"

extern int hour;
extern int minute;
extern int second;
extern int index_led;

void display7SEG(int num);
void update7SEG(int index);
void updateClockBuffer();

#endif /* INC_EXCERCISE7_H_ */