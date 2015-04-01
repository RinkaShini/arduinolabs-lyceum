#include <LiquidCrystal.h>


LiquidCrystal lcd(4, 5, 10, 11, 12, 13);

int ruchka;
void setup() {

  lcd.begin(16, 2);

}

  void loop() {
    lcd.clear();
    lcd.home();
    lcd.print("fucking cool");
  	ruchka=analogRead(A0);
  	lcd.setCursor(0, 1);
  	lcd.print(ruchka);
  	delay(100);
  }