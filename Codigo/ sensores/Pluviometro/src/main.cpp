#include <Arduino.h>

// Parte de la funcion interrup la cual si detecta un vuelco carga la funcion asocida contadorVuelcos
// pero para evitar los rebotes le pongo un retraso , tiempoRebote
const byte sensor=5;
const int tiempoRebote=500;
volatile int numVuelcos = 0;// numero de vuelcos, comienza en 0
float litrosIntervalo=0;
unsigned long flagVuelcos=500;
unsigned long flagEnvio =0;
int intervaloEnvio=20000;

void funContadorVuelcos();
void pluviometro();

void setup(){
   pinMode(sensor, INPUT_PULLUP);
   Serial.begin(9600);
   attachInterrupt(digitalPinToInterrupt(sensor), funContadorVuelcos, FALLING);
   
}



/* void loop()  {
 if (millis()<flagEnvio)       //NO ENTIENDO 
 {                         
    flagEnvio=0;               //NO ENTIENDO
    }
 if (millis()-flagEnvio>5000)  // // 1h=3600000 sg si el tiempo supera la hora tomo las medidas de todos los vuelcos
 { 
    flagEnvio = millis();
    litrosIntervalo=numVuelcos * 0.2794; // 
    if (litrosIntervalo>0)                // 
    {
    Serial.println(flagEnvio);  
    Serial.print("litrosIntervalo por m2 caidos en una una Hora (Lm2)" );
    Serial.println(litrosIntervalo);
    numVuelcos= 0;
    contador= 0;
    }
  }
} */

void loop()  {
   Serial.println(numVuelcos);     
   //++++++++++++++++ lectura acumulada +++++++++++++++++++++++++++                  
  int litrosacumulados = numVuelcos * 0.2794;   // lectura de los acumulados                 
 if (millis()-flagEnvio>intervaloEnvio)  // 1h=3600000 sg si el tiempo supera la hora tomo las medidas de todos los vuelcos
 
 { 
  pluviometro();
  flagEnvio = millis();

  }
  

}
void funContadorVuelcos(){
  if(millis()>(flagVuelcos+tiempoRebote)){ //cuando supera el tiempo de rebote
    numVuelcos++;                             // cuenta y guarda el resultado
    flagVuelcos=millis();                  // prepara el contador para otra medida
    //Serial.println(numVuelcos);// Mejor no ponerlo. Cuando se llama a un controlador de interrupciones, bloquea todo el sistema. 
    //Por lo tanto, solo debe hacer un trabajo mínimo y regresar rápidamente. 
    //Sin embargo, la comunicación en serie es lenta y provoca grandes retrasos
}
}
void pluviometro(){
     
    litrosIntervalo=numVuelcos * 0.2794;     // lectura de litros/hora
    //++++++++++++++++ lectura por horas +++++++++++++++++++++++++++
    if (litrosIntervalo>0)                // si ha pasado la hora AND hay algún vuelco pongo todo a cero
    {                                 // tanto el numVuelcos como
    Serial.println(flagEnvio);  
    Serial.print("litrosIntervalo por m2 caidos en una una Hora (Lm2)" );
    Serial.println(litrosIntervalo);
    numVuelcos= 0;
    delay(1000);
    }
    //++++++++++++++++ lectura por días +++++++++++++++++++++++++++

   int litrosDia=litrosIntervalo*24; 

}
// se ha observado que aunque el delay sea grande no le afecta a la 
// interrupción es decir sigue contando vuelcospero si le afecta a 
//los millis es decir paraliza los millis y por tanto la tiempo=millis ahora será
// tiempo=millis+delay. Por tando el delay solo lo utilizaré para pruebas despúes
// lo eliminaré

//Resumen: delay paraliza la máquina incluido los millis pero
// attachinterrupt no le afecta para nada