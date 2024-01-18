#include <Arduino.h>


int UVOUT = 32; // Salida de datos del sensor
int REF_3V3 = 4; // Fuente de 3.3V del sensor
int averageAnalogRead(int pinToRead);
void setup()
{
  // Iniciamos el serial
  Serial.begin(115200);
  
  // Iniciamos los pines del sensor
  pinMode(UVOUT, INPUT);
  pinMode(REF_3V3, INPUT);

  

// Devuelve la media de la salida del sensor
int averageAnalogRead(int pinToRead){
  byte numberOfReadings = 8;
  unsigned int runningValue = 0; 
 
  for(int x = 0 ; x < numberOfReadings ; x++)
  {
    runningValue += analogRead(pinToRead);
  }
  
  runningValue /= numberOfReadings;
 
  return(runningValue);
}

// Limita el valor de la variable que le introduzcamos
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// Devuelve el valor de indice UV, es decir, el valor final que vamos a usar
int indicereturn()
{
  int uvLevel = averageAnalogRead(UVOUT);
  int refLevel = averageAnalogRead(REF_3V3);
  
  // Usamos el pin de 3.3V del sensor como referencia para conseguir datos precisos
  float outputVoltage = 3.3 / refLevel * uvLevel;
  
  float uvIntensity = mapfloat(outputVoltage, 0.82, 2.8, 0.0, 15.0); // Convertimos el voltaje en intensidad UV
  // uvLevel = salida del ML8511
  // outputVoltage = voltaje del ML8511

  int indice;
  int longonda = map(uvLevel, 0, 4095, 0, 1170);

  if (longonda < 50) { indice = 0; }
  else if (longonda < 227) { indice = 1; }
  else if (longonda < 318) { indice = 2; }
  else if (longonda < 408) { indice = 3; }
  else if (longonda < 503) { indice = 4; }
  else if (longonda < 606) { indice = 5; }
  else if (longonda < 696) { indice = 6; }
  else if (longonda < 795) { indice = 7; }
  else if (longonda < 881) { indice = 8; }
  else if (longonda < 976) { indice = 9; }
  else if (longonda < 1079) { indice = 10; }
  else { indice = 11; }

  return indice;
}




void loop(){
  
}