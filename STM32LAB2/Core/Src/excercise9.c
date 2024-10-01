/*
 * excercise9.c
 *
 *  Created on: Oct 1, 2024
 *      Author: ACER
 */
#include "excercise9.h"

//tang thoi gian dong ho
void clock() {
	second++;
	if (second >= 60) {
		minute++;
		second = 0;
	}
	if (minute >= 60) {
		hour++;
		minute = 0;
	}
	if (hour >= 24) {
		hour = 0;
	}
}

//led 7 doan
void display7SEG(int num) {

}

//hien thi gio phut tren 4 led 7 doan
int index_led = 0;
int led_buffer[4] = {9, 7, 5, 3};

void updateClockBuffer() {
	if (hour < 10) {
		led_buffer[0] = 0;
		led_buffer[1] = hour;
	}
	if (hour >= 10) {
		led_buffer[0] = hour / 10;
		led_buffer[1] = hour % 10;
	}
	if (minute < 10) {
		led_buffer[2] = 0;
		led_buffer[3] = minute;
	}
	if (minute >= 10) {
		led_buffer[2] = minute / 10;
		led_buffer[3] = minute % 10;
	}
}


