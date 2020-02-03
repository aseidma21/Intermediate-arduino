
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup(){
	lcd.begin(16, 2);
	lcd.setCursor(0,0);
	lcd.print("hello, world!"); //print a message on the lcd
}
void loop(){
	lcd.setCursor(0, 1); //sets the cursor to column 0 line 1
	lcd.print(millis() /1000); //print the number of seconds since reset
}
