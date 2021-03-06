#include <NewPing.h>

//Tell the Arduino where the sensor is hooked up
NewPing sonar(8, 9);

long inches;

void setup() {
//Activate the serial monitor so you can see the output of the sensor
Serial.begin(9600);
}

void loop() {
delay(100);
//Ping the sensor to determine distance in inches
inches = sonar.ping_in();
//Print the distance in inches to the serial monitor
Serial.print(inches);
Serial.print(" in.");
Serial.print("\n");

}
