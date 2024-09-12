import RPi.GPIO as GPIO               # This is a library used to control the GPIO pins of the Raspberry Pi
import time                           # This library is used to introduce delays in the program

GPIO.setmode(GPIO.BOARD)              # This line sets the pin numbering system as per the physical pin layout 
GPIO.setup(11, GPIO.OUT)              # This configures pin 11 as an output pin

p = GPIO.PWM(11,50)                   # This creates a PWM object named "p" on pin 11, with a frequency of 50 Hz
p.start(2.5)                          # This starts the PWM signal with an initial duty cycle of 2.5%

while True:
    p.ChangeDutyCycle(0)              # Pauses the signal momentarily, which might cause the servo to "hold" its position
    time.sleep(0.5)                   # 0.5 second delay
    p.ChangeDutyCycle(2.5)            # Positions the servo to approximately 0 degrees
    time.sleep(0.5)
    p.ChangeDutyCycle(5)              # Positions the servo to approximately 45 degrees
    time.sleep(0.5)
    p.ChangeDutyCycle(7.5)            # Positions the servo to approximately 90 degrees
    time.sleep(0.5)
    p.ChangeDutyCycle(10)             # Positions the servo to approximately 135 degrees
    time.sleep(0.5)
    p.ChangeDutyCycle(12.5)           # Positions the servo to approximately 180 degrees
    time.sleep(0.5)
