const int potpin = A5; //potentiometer data pin
const int diodepin = A4; //diode data pin
int value;
int speed;
void setup()
{
	pinMode(potpin, INPUT);
	pinMode(diodepin, OUTPUT);
	
}

void loop()
{
 value = analogRead(potpin);      //Read and save analog value from potentiometer
 //speed = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  analogWrite(diodepin, value);      	//Send PWM value to led
  delay(100);	

	delay(500);	
}

  



