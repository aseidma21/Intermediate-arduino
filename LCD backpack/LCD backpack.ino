
#include <LiquidCrystal_I2C.h> //Includes library for LCD and LCD backpack
LiquidCrystal_I2C lcd(0x27,16,2);// set the LCD address to 0x2 for a 16 chars and 2 line display
//if 0x27 doesn't work try 0x3F

void setup()
{
	lcd.init(); //initiates LCD
	lcd.backlight(); //turns on the background light
	lcd.print("HELLO WORLD!"); //prints out words to the LCD
}

void loop()
{
	lcd.setCursor(0, 1); // sets cursor on second line
	lcd.print(millis()/1000); //prints out seconds since the start of the program
	delay(100);
}

