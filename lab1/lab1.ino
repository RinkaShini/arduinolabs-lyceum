#include <Bounce.h>
/*
*     Лабораторная работа 1
*     "Счетчик нажатий"
*     Автор: Прокопенко Мария
*     Дата создания:18.03.2015
*/

#define PIN_A 2
#define PIN_B 3
#define PIN_C 4
#define PIN_D 5
#define PIN_E 6 
#define PIN_F 7
#define PIN_G 8
#define PIN_P 9
#define BUTTON_UP 11
#define BUTTON_DOWN 12

int number=9;

Bounce bounserUp = Bounce(BUTTON_UP, 5);
Bounce bounserDown = Bounce(BUTTON_DOWN, 5);

byte digit[10] = {
  0b00111111,
  0b00000110,
  0b01011011,
  0b01001111,
  0b01100110,
  0b01101101,
  0b01111101,
  0b00000111,
  0b01111111,
  0b01101111
};
void setup() {
  pinMode(PIN_A,OUTPUT);
  pinMode(PIN_B,OUTPUT);
  pinMode(PIN_C,OUTPUT);
  pinMode(PIN_D,OUTPUT);
  pinMode(PIN_E,OUTPUT);
  pinMode(PIN_F,OUTPUT);
  pinMode(PIN_G,OUTPUT);
  pinMode(PIN_P,OUTPUT);  
  pinMode(BUTTON_DOWN, INPUT_PULLUP);
  pinMode(BUTTON_UP, INPUT_PULLUP);

}
void loop() {

  if (bounserUp.update()) {
    if (bounserUp.read() ==LOW) {
      number+=1;
    }
  }

  if (bounserDown.update()) {
    if (bounserDown.read() == LOW) {
      number-=1;
    }
  }

  // if (digitalRead(BUTTON_UP)) number+=1;
  // if (digitalRead(BUTTON_DOWN)) number-=1;
  if (number==-1)  number=9;
  if (number==10)  number=0;

showDigit(number);
//delay(300);
//number++;
}
void showDigit(int i){
digitalWrite(PIN_A,digit[i]&(1<<0));
digitalWrite(PIN_B,digit[i]&(1<<1));
digitalWrite(PIN_C,digit[i]&(1<<2));
digitalWrite(PIN_D,digit[i]&(1<<3));
digitalWrite(PIN_E,digit[i]&(1<<4));
digitalWrite(PIN_F,digit[i]&(1<<5));
digitalWrite(PIN_G,digit[i]&(1<<6));
digitalWrite(PIN_P,digit[i]&(1<<7));
}