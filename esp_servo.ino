#include <ESP32Servo.h>              // Install ESP32Servo library from library manager in Arduino IDE or download from github

Servo myServo;                       // Create an servo object
int servoPin = 18;                   // Declare GPIO pin 18 as servoPin
void setup() 
{
  myServo.attach(servoPin);          // This function links the servo object "myServo" to the pin defined by servoPin 
  Serial.begin(115200);              // Set the baud rate for serial communication
}

void loop() 
{
for(int a=0; a<=180; a+=10)          // This is a for loop that iterates over values of a from 0 to 180 in steps of 10 degrees
{
  myServo.write(a);                  // The write() function sends the necessary PWM signal to the servo pin to position the servo to the desired angle
  Serial.print(a);                   // This prints the current angle a to the Serial Monitor, so you can see what angle the servo is being moved to
  Serial.print("\n");                
  delay(1000);                       // This gives the servo time to move to the new position before the next movement occurs
}
}
