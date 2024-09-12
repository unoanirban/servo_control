#include <ESP32Servo.h>

Servo myServo;
int servoPin = 18;
void setup() 
{
  myServo.attach(servoPin);
  Serial.begin(115200);
}

void loop() 
{
for(int a=0; a<=180; a+=10)
{
  myServo.write(a);
  Serial.print(a);
  Serial.print("\n");
  delay(1000);
}
}
