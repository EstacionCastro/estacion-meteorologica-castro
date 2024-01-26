#include <Arduino.h>

// Parte de la funcion interrup la cual si detecta un vuelco carga la funcion asocida contadorVuelcos
// pero para evitar los rebotes le pongo un retraso , tiempoRebote
const int SENSOR=5;
const int tiempoRebote=300;
volatile int numVuelcos = 0;// numero de vuelcos, comienza en 0
int contador = 0;
float litrosHora=0;
long tiempocontador=0;
long tiempohora =0;


void funContadorVuelcos(){
  if(millis()>(tiempocontador+tiempoRebote)){ //cuando supera el tiempo de rebote
    numVuelcos++;                             // cuenta y guarda el resultado
    tiempocontador=millis();                  // prepara el contador para otra medida
    //Serial.println(numVuelcos);// Mejor no ponerlo. Cuando se llama a un controlador de interrupciones, bloquea todo el sistema. 
    //Por lo tanto, solo debe hacer un trabajo mínimo y regresar rápidamente. 
    //Sin embargo, la comunicación en serie es lenta y provoca grandes retrasos
}
}

void setup(){
   pinMode(SENSOR, INPUT_PULLUP);
   Serial.begin(9600);
   attachInterrupt(digitalPinToInterrupt(SENSOR), funContadorVuelcos, FALLING);
}



/* void loop()  {
 if (millis()<tiempohora)       //NO ENTIENDO 
 {                         
    tiempohora=0;               //NO ENTIENDO
    }
 if (millis()-tiempohora>5000)  // // 1h=3600000 sg si el tiempo supera la hora tomo las medidas de todos los vuelcos
 { 
    tiempohora = millis();
    litrosHora=numVuelcos * 0.2794; // 
    if (litrosHora>0)                // 
    {
    Serial.println(tiempohora);  
    Serial.print("litrosHora por m2 caidos en una una Hora (Lm2)" );
    Serial.println(litrosHora);
    numVuelcos= 0;
    contador= 0;
    }
  }
} */

void loop()  {
                          
  int litrosacumulados = numVuelcos * 0.2794;   // lectura de los acumulados                 
 if (millis()-tiempohora>5000)  // 1h=3600000 sg si el tiempo supera la hora tomo las medidas de todos los vuelcos
 //++++++++++++++++ lectura acumulada +++++++++++++++++++++++++++
 { 
    tiempohora = millis();
    litrosHora=numVuelcos * 0.2794;     // lectura de litros/hora
    //++++++++++++++++ lectura por horas +++++++++++++++++++++++++++
    if (litrosHora>0)                // si ha pasado la hora AND hay algún vuelco pongo todo a cero
    {                                 // tanto el numVuelcos como
    Serial.println(tiempohora);  
    Serial.print("litrosHora por m2 caidos en una una Hora (Lm2)" );
    Serial.println(litrosHora);
    numVuelcos= 0;
    }
  }
  //++++++++++++++++ lectura por días +++++++++++++++++++++++++++

   int litrosDia=litrosHora*24; 


}