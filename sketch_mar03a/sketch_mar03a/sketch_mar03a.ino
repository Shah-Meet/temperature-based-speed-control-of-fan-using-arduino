#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,4,5,6,7);

void setup() {
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.setCursor(3,0);
  lcd.print("Prashil");

  
}
