/*
 * excercise7.h
 *
 *  Created on: 30 thg 9, 2024
 *      Author: ACER
 */

#ifndef INC_EXCERCISE8_H_
#define INC_EXCERCISE8_H_

#include "main.h"

extern int hour;
extern int minute;
extern int second;
extern int index_led;

void display7SEG(int num);
void update7SEG(int index);
void clock();
void updateClockBuffer();

#endif /* INC_EXCERCISE8_H_ */
