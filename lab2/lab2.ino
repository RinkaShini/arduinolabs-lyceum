/*
*     Лабораторная работа 2
*     "Индикатор датчиков"
*     Автор: Прокопенко Мария
*     Дата создания: 1.04.2015
*/
#include <OneWire.h>

#include <LiquidCrystal.h>


LiquidCrystal lcd(4, 5, 10, 11, 12, 13);

int ruchka;
void setup() {

  lcd.begin(16, 2);

  lcd.print("RUCHKA");
}
  void loop() {
    OneWire  ds(9);
  byte i;
  byte present = 0;
  byte type_s = 0;
  byte data[12];
  byte addr[8];
  float celsius, fahrenheit;
  if ( !ds.search(addr)) {
    ds.reset_search();
    delay(250);
    return;
  }
  Serial.print("ROM =");
  for( i = 0; i < 8; i++) {
  }
  if (OneWire::crc8(addr, 7) != addr[7]) {
      Serial.println("CRC is not valid!");
      return;
  }
  Serial.println();

  ds.reset();
  ds.select(addr);
  ds.write(0x44, 1);        
  delay(100);  
  present = ds.reset();
  ds.select(addr);    
  ds.write(0xBE);         

  for ( i = 0; i < 9; i++) {           
    data[i] = ds.read();
  }
  int16_t raw = (data[1] << 8) | data[0];
  if (type_s) {
    raw = raw << 3; 
    if (data[7] == 0x10) {
      raw = (raw & 0xFFF0) + 12 - data[6];
    }
  } else {
    byte cfg = (data[4] & 0x60);
    if (cfg == 0x00) raw = raw & ~7; 
    else if (cfg == 0x20) raw = raw & ~3; 
    else if (cfg == 0x40) raw = raw & ~1; 
  }
  celsius = (float)raw / 16.0;
  
    lcd.clear();
    lcd.home();
    lcd.print ("T1= ");
    lcd.print (celsius);
  	ruchka=map(analogRead(A0),0,1023,0,17);
  	lcd.setCursor(0, 1);
  	for (int u; u<=ruchka; u++)
    {
      lcd.print("\xFF");
    }
    delay (100);

  	
  }