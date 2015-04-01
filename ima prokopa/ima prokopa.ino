#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 5, 10, 11, 12, 13);

char symbol=0;
void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Me");
  lcd.print("\xBD");
  lcd.print("\xC7");
  lcd.print("  ");
  lcd.print("\xA4");
  lcd.print("o");
  lcd.print("\xB3");
  lcd.print("y");
  lcd.print("\xBF");
  lcd.print("  ");
  lcd.setCursor(0, 1);
  /*lcd.print("\xAB");
  lcd.print("ep");
  lcd.print("\xBD");
  lcd.print("\xB8");
  lcd.print("\xBA");
  lcd.print("o");
  lcd.print("\xB3");*/
  lcd.print("\xA8");
  lcd.print("pokope");
  lcd.print("\xBD");
  lcd.print("ko");
  lcd.print(" ");
  lcd.print("\x93");
  lcd.print("\x92");
  lcd.print("\x8D");
  lcd.print("\x92");
  lcd.print("\x93");
  

}

void loop() {

}

