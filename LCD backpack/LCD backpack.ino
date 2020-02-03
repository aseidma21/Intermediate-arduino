
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);// set the LCD address to 0x2 for a 16 chars and 2 line display
//if 0x27 doesn't work try 0x3F

void setup()
{
	lcd.init();
	lcd.backlight();
	lcd.print("HELLO WORLD!");
}

void loop()
{
	lcd.setCursor(0, 1);
	lcd.print(millis()/1000);
	delay(100);
}

