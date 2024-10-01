/*
 * excercise9.h
 *
 *  Created on: Oct 1, 2024
 *      Author: ACER
 */

#ifndef INC_EXCERCISE9_H_
#define INC_EXCERCISE9_H_

#include "main.h"

int hour = 15;
int minute = 8;
int second = 50;

extern int index_led;
extern int led_buffer[];

void clock();
void display7SEG(int num);
void updateClockBuffer();

#endif /* INC_EXCERCISE9_H_ */
