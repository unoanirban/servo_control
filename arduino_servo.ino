#include <Servo.h>              // Include the Servo library for Arduino

Servo myServo;                  // Create a Servo object to control the servo
int servoPin = 9;               // Define the pin where the servo is connected (e.g., pin 9)

void setup() 
{
  myServo.attach(servoPin);     // Attach the servo object to the specified pin
  Serial.begin(9600);           // Initialize serial communication at 9600 baud rate
}

void loop() 
{
  for (int a = 0; a <= 180; a += 10)  // Iterate from 0 to 180 degrees in steps of 10
  {
    myServo.write(a);           // Move the servo to the current angle (a)
    Serial.print("Servo Angle: ");
    Serial.println(a);          // Print the current angle to the Serial Monitor
    delay(1000);                // Wait 1 second for the servo to reach the position
  }
}
