
#include <LiquidCrystal.h> //Includes LCD code Library

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //These are the pins for RS, EN, DB4, DB5, DB6, and DB7(respectively)

void setup(){
	lcd.begin(16, 2);
	lcd.setCursor(0,0); //sets LCD to start printing at the first line and first collumn
	lcd.print("hello, world!"); //print a message "hello world" on the lcd
}
void loop(){
	lcd.setCursor(0, 1); //sets the cursor to column 0 line 1
	lcd.print(millis() /1000); //print the number of seconds since reset
}
