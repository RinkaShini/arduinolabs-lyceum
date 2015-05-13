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

void leftMotorBack() {
	digitalWrite(OUT1, LOW);
	digitalWrite(OUT2, HIGH);
}

void leftMotorForward() {
	digitalWrite(OUT2, LOW);
	digitalWrite(OUT1, HIGH);
}

void leftMotorStop() {
	digitalWrite(OUT2, LOW);
	digitalWrite(OUT1, LOW);
}

void rightMotorBack() {
	digitalWrite(OUT3, LOW);
	digitalWrite(OUT4, HIGH);
}

void rightMotorForward() {
	digitalWrite(OUT4, LOW);
	digitalWrite(OUT3, HIGH);
}

void rightMotorStop() {
	digitalWrite(OUT3, LOW);
	digitalWrite(OUT4, LOW);
} 

void loop(){
	rightMotorForward();
	leftMotorForward();
	delay(2000);
	rightMotorBack();
	leftMotorBack();
	delay(2000);
}