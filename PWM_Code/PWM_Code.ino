PWM Code
/*
 Title: PWM Signal
 
 Name: Carl Sagrado
 Student no: X00084403
 
 Version 1.0
 
 Description: 
 - Read the value of the throttle pot and convert into PWM 
Signal
 
 Hardware Required:
 * MSP-MSP430G2553 
 * 10-kilohm Potentiometer
 * hook-up wire
*/
long int outputValue; 
void setup()
{
 // put your setup code here, to run once:
// Serial.begin(9600);
 pinMode(P1_6,OUTPUT); //set pin to output
}
void loop()
{
 outputValue = analogRead(P1_0);
 int fadeValue = map(outputValue, 0, 1023, 0, 255); // sets the value 
(range from 0 to 255):
 analogWrite(P1_6, fadeValue);
 // put your main code here, to run repeatedly: 
