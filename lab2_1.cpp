// Do not remove the include below
#include "lab2_1.h"
#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9
#define DUTY_CYCLE 20
void myAnalogWrite(int pin,int percent,int time)
{
	int temp;

	temp=time/DUTY_CYCLE;
	while(temp>0){
	digitalWrite(REAR_LED_PIN,HIGH);
	delay(DUTY_CYCLE*(percent/100.0));
	digitalWrite(REAR_LED_PIN,LOW);
	delay(DUTY_CYCLE*((100-percent)/100.0));
	temp--;
	}
}
void setup(){
	pinMode(REAR_LED_PIN,OUTPUT);
}
void loop(){
	myAnalogWrite(REAR_LED_PIN,100,2000);
	myAnalogWrite(REAR_LED_PIN,75,2000);
	myAnalogWrite(REAR_LED_PIN,50,2000);
	myAnalogWrite(REAR_LED_PIN,25,2000);
	myAnalogWrite(REAR_LED_PIN,0,2000);
}
