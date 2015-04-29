/*
*     Лабораторная работа 3
*     "Бегущая строка"
*     Автор: Прокопенко Мария 
*     Дата создания: 15.04.2015
*/
#include <SPI.h>

#define SS_PIN 10


void setup(){
pinMode(SS_PIN,  OUTPUT);
SPI.begin();
}

void loop(){
		drawLine();
	}
void drawLine() {
	for (int i=0; i<8; i++) {
	digitalWrite (SS_PIN,LOW);
	SPI.transfer(0xFF-(1<<i));
	SPI.transfer(0xFF);
	digitalWrite(SS_PIN,HIGH);
	delay (125); 
		}
	}

