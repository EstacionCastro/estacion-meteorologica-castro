#include <Arduino.h>

const int SENSOR=3;
const int umbraltiempo=300;
volatile int ISRContador = 0;
int contador = 0;
float litros=0;
long tiempocontador=0;
long tiempohora =0;


void contadorLitros(){
  if(millis()>(tiempocontador+umbraltiempo)){
    ISRContador++;
    tiempocontador=millis();
    Serial.println(ISRContador);
  }
}


void setup(){
   pinMode(SENSOR, INPUT_PULLUP);
   Serial.begin(9600);
   attachInterrupt(digitalPinToInterrupt(SENSOR), contadorLitros, FALLING);
}



void loop()  {
 if (millis()<tiempohora)
 {
    tiempohora=0;
    }
 if (millis()-tiempohora>10000)
 { 
    tiempohora = millis();
    litros=ISRContador *0.28;
    if (litros>0)
    {
    Serial.print("Litros por m2 caidos en una una Hora (Lm2)" );
    Serial.println(litros);
    ISRContador= 0;
    contador= 0;
    }
  }
}
