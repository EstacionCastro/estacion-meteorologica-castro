
#include <Arduino.h>

int UVsensorIn = 32; //Output from the sensor
 
int averageAnalogRead(int pinToRead) ;
int averageAnalogRead(int UVsensorIn); 
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max);


void setup()
{
  pinMode(UVsensorIn, INPUT);
  Serial.begin(9600); //open serial port, set the baud rate to 9600 bps
}
 
void loop()
{
  int uvLevel = averageAnalogRead(UVsensorIn);
 
  float outputVoltage = 3.3 * uvLevel/4095;
  float uvIntensity = mapfloat(outputVoltage, 0.99, 2.9, 0.0, 15.0);
 
  Serial.print(" UV Intensity: ");
  Serial.print(uvIntensity);
  Serial.print(" mW/cm^2"); 
  Serial.println(); 
  delay(200);
}
 
//Takes an average of readings on a given pin
//Returns the average
int averageAnalogRead(int pinToRead)
{
  byte numberOfReadings = 8;
  unsigned int runningValue = 0; 
 
  for(int x = 0 ; x < numberOfReadings ; x++)
    runningValue += analogRead(pinToRead);
  runningValue /= numberOfReadings;
 
  return(runningValue);  
 
}
 
// put function definitions here:
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

