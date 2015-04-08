#include <LiquidCrystal.h>


LiquidCrystal lcd(4, 5, 10, 11, 12, 13);

int ruchka;
void setup() {

  lcd.begin(16, 2);

  lcd.print("RUCHKA");

}

  void loop() {
    lcd.clear();
    lcd.home();
    lcd.print("fucking cool");
    lcd.print("\x8D");
  	ruchka=map(analogRead(A0),0,1023,0,17);
  	lcd.setCursor(0, 1);
  	for (int i; i<=ruchka; i++)
    {
      lcd.print("\xFF");
    }
    delay (100);

  	
  }