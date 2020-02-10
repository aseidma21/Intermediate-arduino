boolean photostate = 0;
void setup()
{
 Serial.begin(9600);
 pinMode(2,INPUT_PULLUP); //holds photointerrupter at logic voltage until interrupted
 pinMode(6,OUTPUT);
 attachInterrupt(digitalPinToInterrupt(2), photo, RISING); //tells photointerrupter to interrupt when pin goes low to high
 //attachInterrupt(digitalPinToInterrupt(2), picture, FALLING); //tells photointerrupter to interrupt when pin goes high to low
}
void loop()
{
 Serial.println(photostate); //prints out the variable boolean
 digitalWrite(6, photostate); //prints on/off state to LED
 delay(10);
}
void photo()
{
 photostate = !photostate; //interrupts teh function(and makes it stop)
}




