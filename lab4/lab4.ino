/*
*     Лабораторная работа 4
*     "Телега"
*     Автор: Прокопенко Мария, Суворов Игорь
*     Дата создания: 13.05.15
*/
#define OUT1 6
#define OUT2 5
#define OUT3 9
#define OUT4 10
void setup(){
 pinMode(OUT1, OUTPUT);
 pinMode(OUT2, OUTPUT);
 pinMode(OUT3, OUTPUT);
 pinMode(OUT4, OUTPUT);
}

void testDrive (int out1, int out2, int out3, int out4){
	digitalWrite(OUT1, out1);
	digitalWrite(OUT2, out2);
	digitalWrite(OUT3, out3);
	digitalWrite(OUT4, out4);

}

void leftMotorForward() {
	digitalWrite(OUT1, LOW);
	digitalWrite(OUT2, HIGH);
}

void leftMotorBack() {
	digitalWrite(OUT2, LOW);
	digitalWrite(OUT1, HIGH);
}

void leftMotorForwardPWM(byte pwmDuty) {
	digitalWrite(OUT1, LOW);
	digitalWrite(OUT2, pwmDuty);
}

void leftMotorBackPWM(byte pwmDuty) {
	digitalWrite(OUT2, LOW);
	digitalWrite(OUT1, pwmDuty);
}

void leftMotorStop() {
	digitalWrite(OUT2, LOW);
	digitalWrite(OUT1, LOW);
}

void rightMotorForward() {
	digitalWrite(OUT4, LOW);
	digitalWrite(OUT3, HIGH);
}


void rightMotorBack() {
	digitalWrite(OUT3, LOW);
	digitalWrite(OUT4, HIGH);
}

void rightMotorForwardPWM(byte pwmDuty) {
	digitalWrite(OUT3, LOW);
	digitalWrite(OUT4, pwmDuty);
}

void rightMotorBackPWM(byte pwmDuty) {
	digitalWrite(OUT4, LOW);
	digitalWrite(OUT3, pwmDuty);
}

void rightMotorStop() {
	digitalWrite(OUT3, LOW);
	digitalWrite(OUT4, LOW);
} 

void loop(){
	rightMotorForwardPWM(250);
	leftMotorForwardPWM(250);
	delay(2000);
	rightMotorBackPWM(120);
	leftMotorBackPWM(120);
	delay(2000);
}