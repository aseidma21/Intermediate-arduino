boolean photostate = 0;
void setup()
{
 Serial.begin(9600);
 pinMode(2,INPUT_PULLUP);
 pinMode(6,OUTPUT);
 attachInterrupt(digitalPinToInterrupt(2), photo, RISING);
 //attachInterrupt(digitalPinToInterrupt(2), picture, FALLING);
}
void loop()
{
 Serial.println(photostate);
 digitalWrite(6, photostate);
 delay(10);
}
void photo()
{
 photostate = !photostate;
}




