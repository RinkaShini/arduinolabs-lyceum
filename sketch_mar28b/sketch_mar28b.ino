// Подключаем стандартную библиотеку LiquidCrystal
#include <LiquidCrystal.h>
 
// Инициализируем объект-экран, передаём использованные 
// для подключения контакты на Arduino в порядке:
// RS, E, DB4, DB5, DB6, DB7
LiquidCrystal lcd(4, 5, 10, 11, 12, 13);
String allString = "Hello world";
int i = 0;
boolean type = true;
void setup() 
{
    lcd.begin(16, 2);
    Serial.begin(9600);
}
 
void loop() 
{
  if ( Serial.available() >= MESSAGE_BYTES)
  {
    if (i < 10) { 
      lcd.setCursor(i, 0);
      char c = Serial.read();
      lcd.print(c);
      i++;
    }
  }
//  if (i <= allString.length()) {
//    if (type == true) {
//      lcd.print(allString.charAt(i++));
//    } else {
//      lcd.print("*");
//      i++;
//    }
//    delay(200);
//    if (i == allString.length()) {
//        type = !type;
//        i = 0;
//    }
//  }
}
