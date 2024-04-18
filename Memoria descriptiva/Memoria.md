**Repaso trabajo con markdown directamente en visual studio code (vs)**  NO BORRAR
En vs pincho y abro el fichero de texto ¨Memoria.md" y abajo a la dcha observo que lo trata como un document text, por tanto tengo que cambiarlo a formato Markdown y ahora observo que en el memú del fichero ha cambiado la marca y si lo pincho me sale una nueva opción de previsualizar. Por lo que puedo dividir la pantalla y colocar en una parte el fichero raw y en otra el previsualizado.
Después para ayudarme escribo los comandos y pulso ctrl+space y se me autocompleta.
Heading
bold
italic
list
link
image
Forma más rapída de insertar una imagen desde tu mismo repositorio https://code.visualstudio.com/assets/docs/languages/Markdown/drop-link.gif
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# INTRODUCCIÓN
La meteorología es la ciencia que estudia el estado del tiempo, el clima y las condiciones atmosféricas de una determinada zona del planeta, la cual requiere conocer de manera simultánea un conjunto de parámetros meteorológicos como la temperatura, la presión, la humedad, el viento, la radiación solar, etc… para poder realizar los pronósticos o evaluar las condiciones climáticas que pudiesen afectar una determinada actividad en una zona. Es por ello que surge la necesidad de una instalación física como son las Estaciones Meteorológicas, las cuales son capaces de medir y registrar todas las variables meteorológicas mencionadas en tiempo real, para poder realizar dichos estudios y pronósticos, a través de un conjunto de instrumentos y sensores instalados de manera estratégica en su estructura. Las Estaciones meteorológicas cuentan con una diversidad de tipologías en su construcción, las cuales permiten realizar mediciones específicas de ciertas variables meteorológicas, que pudiesen afectar ciertas actividades en una determinada zona, como por ejemplo: la agricultura, la hidrología, la generación eléctrica en plantas solares, la aeronáutica, los riesgos climáticos en infraestructuras civiles entre otras. Las estaciones meteorológicas hoy en día cuentan con modernos sistemas automatizados con poca intervención humana, que permiten la medición, el registro y la transmisión en tiempo real y continua en cualquier parte del planeta de todas las variables meteorológicas de la zona, incluso el intercambio global de información entre estaciones, logrando así la precisión en los pronósticos y los estudios climáticos.
# OBJETIVOS DEL PROYECTO
* El objetivo principal de este proyecto es poder monitorizar de forma rápida y sencilla el tiempo (presión atmosférica, temperatura, humedad, radiación cantidad de lluvia por m2, etc.) en una determinada región, de modo que aunque, al tratarse de un proyecto hecho por "novatos", se pueda obtener una estimación lo más exacta posible de todos esos cambios en el tiempo. 

* Así pues, una vez tomadas las mediciones, recoger todos esos datos en una base de datos para que otras instituciones, como por ejemplo, la universidad de Castilla-La Mancha, pueda acceder a ello y llevar a cabo un registro del tiempo en diversas regiones y compararlo entre ellas.

* Además, lo que también queremos conseguir es ayudar a todo aquel que quiera hacer su propia estación metereológica  esté atrancado con alguna cosa, de tal modo que al ver el código y leer los problemas que hemos tenido y cómo los hemos solucionado, pueda resolver sus propios problemas o al menos tener unas pautas sobre los pasos que tiene que seguir.
# PASOS A SEGUIR


En primer lugar, lo más recomendado sería invertir un poco de tiempo investigando sobre los distintos sensores que hay en el mercado y realizar una tabla de sus características para compararlos según la relación calidad-precio para adquirir el sensor más conveniente.

A continuación, hay que hacer los códigos, preferiblemente con visual estudio code. Yo recomiendo hacer primero los códigos de cada sensor por separado para así hacer pruebas de ellos y asegurarse de que funcionan a la perfección y que el código está bien hecho.

El siguente paso sería crearse una base de datos y a los códigos creados anteriormente, modificarlos para que esos datos que captan, los envíen a la base de datos. Y una vez que esté hecho y funcionando correctamente, ya vendría la hora de fusionar los códigos de los sensores en un solo código común qque englobe todos los anteriores.

Finalmente, habría que montar la estación en un lugar alto, como un tejado, para que así capte bien todos los fenómenos metereológicos de a su alrededor.


![estacion metereologica](https://www.sevensensor.com/files/2023/06/Sensores-Meteorologicos.jpg)



# MATERIALES NECESARIOS

### SENSOR TRA Y HUMEDAD

![dht11](https://hetpro-store.com/TUTORIALES/wp-content/uploads/2015/03/CONEXION_DHT11.jpg)

Con el sensor y la placa finalmente funcionando, el siguiente paso era encontrar un lugar para guardar la información. Tuve que usar SQL y PHP para crear una tabla de datos en una base de datos creada en 000webhost.com. No tenía ni idea de cómo funcionaba SQL, pero encontré algunos tutoriales sencillos que me ayudaron a entenderlo un poco.

Después de mucha prueba y error, conseguí que la placa guardara las lecturas de humedad en la base de datos. Pero necesitaba un código que no sabía hacer para enviar esas lecturas a la base de datos. Investigué un poco más y aprendí sobre códigos de "post". Parecen raros de ver pero resulta que es como darle un papelito a la base de datos y decirle que lo guarde.
Creé una tabla en html y php para organizar las medidas y tenerlas guardadas, n hubo mucho problema en hacer esto.

Con el código "post" funcionando y la tabla hecha, tuve que subir todo lo que había hecho a GitHub. Al principio, GitHub me pareció un sitio rro de subir archivos, pero con paciencia, entendí cómo subir mis cosas allí. Ahora, cualquiera puede ver lo que hice.
### SENSOR PRESIÓN (BMP280)

![bmp280](ImagenesT/bmp180.jpg)

El BMP280 es un sensor de presión barométrica diseñado para medir la presión atmosférica y estimar la altitud sobre el nivel del mar (aunque en este código omití la parte de calcular la altura). La presión atmosférica resulta de la fuerza ejercida por la atmósfera sobre la superficie terrestre, variando con la altitud y la temperatura. En puntos más altos, la presión disminuye debido a la menor cantidad de aire. Además, la presión atmosférica se ve afectada por la temperatura, ya que esta influye en la densidad del aire, alterando su peso y, por ende, la presión.

El BMP280 mide la presión absoluta y la temperatura. Al detectar la temperatura, podemos compensar su impacto en la presión, logrando una estimación más precisa de la altitud. Este sensor se alimenta directamente desde la salida de 5V de Arduino y cuenta con un diseño compacto, bajo consumo de corriente, y componentes adicionales como un regulador de voltaje, resistencias pull-up y capacitores by-pass para mejorar su rendimiento.
| Adaptador LCD a I2C | Arduino Uno, Nano, Mini. | WROVER ESP32 |
|-----------|-----------|-----------|
| VCC | 5V | 5V |
| GND | GND | GND |
| SCL | A5 | 22 |
| SDA | A4 | 21 |

*En "Arduino Mega , DUE" los pines son 21,20 respectivamente y en Arduino Leonardo 3,2.
### SENSOR RADIACIÓN SOLAR

![Placa ESP32](https://github.com/BaiAlbert/estacion-meteorologica-castro/blob/89b71ae78ae480effb5675cff5101ddd829ffe39/Fotos/ML8511/Placa%20ESP32.jpg)
*Placa de desarrollo ESP32 utilizada.*
![Sensor ML8511](https://github.com/BaiAlbert/estacion-meteorologica-castro/blob/89b71ae78ae480effb5675cff5101ddd829ffe39/Fotos/ML8511/Sensor.jpg)
*Sensor ML8511 para la medición de datos sobre la radiación ultravioleta.*
![Sensor ML8511 (parte trasera)](https://github.com/BaiAlbert/estacion-meteorologica-castro/blob/89b71ae78ae480effb5675cff5101ddd829ffe39/Fotos/ML8511/Sensor%20(parte%20trasera).jpg)

El módulo ML8511 es un sensor de luz ultravioleta (UV), entrega una señal de voltaje analógica que depende de la cantidad de luz UV que detecta. Sensor ideal para proyectos de monitoreo de condiciones ambientales como el índice UV, Aplicaciones Meteorológicas, cuidado de la piel, medición industrial de nivel UV.

El sensor ML8511 detecta luz con una longitud de onda entre 280-390nm, este rango cubre tanto al espectro UV-B como al UV-A. La salida analógica está relacionada linealmente con la intensidad UV (mW/cm2). Esta señal analógica puede ser conectada a un microcontrolador para ser convertido por un ADC y así trabajar con la medición. 

### PLUVIÓMETRO 
![foto](https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcQoHQyPXPgu9GdTTlE0Vt4-ops4_vuV9VdCSpZtE3QKDyCQ9LGXIBJc8uttywQaJdxrY0MSYCR3zJXoecuadLiOtY0RNj-F6RVDw_VxP-JF1yv8DldtZNFq4qGQI02keLU6jNe_NQ&usqp=CAc)

Al principio, estuve investigando sobre qué pluviómetro utilizar en relación calidad-precio, y acabé decantándome por un pluviómetro casero en el que para que funcionase necesitaba un imán de neodimio y un sensor, llamado KY-025, que detecta el campo magnético del imán, de tal modo que cuando se ha llenado un lado del balancín, este al volcarse y viceversa, el imán al ir pegado en el balancín, se mueva de izquierda a derecha continuamente y así, cada uno de ese vuelcos, sean detectados por el sensor y mediante un código recibir los vuelcos y los L/m2 de agua caída.

En cuanto al código lo único ue tuve quehacer fue buscarlo en youtube donde me apereció un vídeo en el ue aprendí mucho y ya te lo daba hecho [https://www.youtube.com/watch?v=hvD2rsqDduU&t=457s]. Y para hacer la base de datos  subir las mediciones, lo que hice fue seguir paso a paso las indicaciones de este otro vídeo [https://www.youtube.com/watch?v=hvveBxxdx0Q&t=284s].

En cuanto a la medición, esta se hace en litros por metro cuadrado que quiere decir los litros que han caído en un metro cuadrado, o sea, litros dividido por metro cuadrado. Si los litros son una l y los metros cuadrados son m2 entonces tenemos l/m2. Los litros son una unidad de volumen. Nos dicen qué espacio ocupa algo. En un espacio de un metro cúbico, caben mil litros, es decir, 1m3=1000l. Esto implica que un litro son 1/1000 = 0.001 metros cúbicos. Pues fijaos: lm2=0.001m3m2=0.001mm2m2=0.001m
Pues ya está, nos queda que los litros por metro cuadrado son la milésima parte de un metro. ¡Pero espera, eso tiene nombre… milímetros! Es decir, yo tengo un bote de un metro cuadrado. Lo saco a la lluvia. Caen 20 litros por metro cuadrado. Eso quiere decir que la altura del agua dentro del bote será de 20 milímetros

 Generalmente podemos referirnos a una cierta cantidad en milímetros por hora. Mientras la cantidad sea más alta, significaría lluvias más fuertes o intensas.


### RESTO DE COMPONENTES



# CARACTERÍSTICAS
(De los sensores.Medición analógica, digital,protocolo de comunicación, Tablas de características, sensibilidad, precisión)
| Parámetros | Sensor DT11 |
|------------|-------------|
| Alimentación | 3Vdc ≤ Vcc ≤ 5Vdc |
| Señal de Salida | Digital |
| Rango de medida Temperatura | De 0 a 50 °C |
| Precisión Temperatura | +2 °C |
| Resolución Temperatura | 0.1°C |
| Rango de medida Humedad | De 20% a 90% RH |
| Precisión Humedad | 4% RH |
| Resolución Humedad | 1%RH |
| Tiempo de sensado | 1s |
| Tamaño | 12 x 15.5 x 5.5mm |

| Parámetros | Sensor BMP280 |
|------------|---------------|
| Rango de presión | 300 – 1100 hPa ± 1hPa |
| Rango de temperatura | -40 – 85 ºC ± 1,0 ºC |
| Nivel lógico | 3,3V |
| Consumo | 2,7 µA |
| Comunicación | I2C, SPI |

| Parámetros | Sensor ML8511 |
|-------------|-------------|
| Voltaje de alimentación | 3.V-5V DC |
| Salida de voltaje analógica lineal | de 1V a 3V |
| Longitud de onda | 280-390nm |
| Longitud de onda pico | 365nm |
| Consumo de energía | ultrabajo |
| Dimensiones | 12*12mm |
| Peso | 2 gramos |

| Parámetros | Pluviómetro (sensor KY-025) |
|------------|-------------|
| Voltaje de trabajo | 3.3V - 5V |
| Salida digital  | activa a nivel bajo |
| Salida analógica | Indica la intensidad del campo |
| Tamaño | 3.2 x 1.9 x 0.7 cm |
| Peso | 4 gramos |



# MONTAJE Y ESQUEMAS DEL CONJUNTO
1. ESQUEMAS


2. CÓDIGO ARDUINO
```python
/* 
// INICIALMENTE COMO VOY A COMUNICARME POR I2C TENGO QUE AVERIGUAR EL DIRECCIÓN DEL SENSOR
// en mi caso me da 0x76 y tengo que ir a la libreria en >.pio>libdeps>Adafruit BMP280 Library>Adafruit_BMP280
// y sustituir 0x77 por 0x76
*/

#include <Arduino.h>
#include <Wire.h>

void setup()
{
  Wire.begin();

  Serial.begin(9600);
  while (!Serial);             // Espera al monitor serie
  Serial.println("\nEscaner I2C");
}

void loop()
{
  byte error, address;
  int nDevices;

  Serial.println("Escaneando...");

  nDevices = 0;
  for(address = 1; address < 127; address++ )
  {
    // El escaner i2c utiliza el valor devuelto por la instrucción 
    // Write.endTransmisstion para reconocer la dirección a la que 
    // está conectado cada dispositivo.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("Dispositivo I2C encontrado en la direccion 0x");
      if (address<16)
        Serial.print("0");
      Serial.print(address,HEX);
      Serial.println("  !");

      nDevices++;
    }
    else if (error==4)
    {
      Serial.print("Error desconocido en la direccion 0x");
      if (address<16)
        Serial.print("0");
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0)
    Serial.println("Ningun dispositivo I2C encontrado\n");
  else
    Serial.println("Hecho\n");

  delay(5000);           // espera 5 segundos para el siguiente escaneo
}
   */ 



// ---- VARIABLES ----------
int UVsensorIn = 32;  //Output from the sensor uva
float uvIntensity;    // variables para utilizar fuera de su función
// variables pluviometro
const byte sensor=5;
const int tiempoRebote=500;
volatile int numVuelcos = 0;// numero de vuelcos, comienza en 0
float litrosIntervalo=0;
unsigned long flagVuelcos=500;
unsigned long flagEnvio =0;
int intervaloEnvio=20000;



//FUNCIONES aquí se declaran
void funContadorVuelcos();
void pluviometro();
void lecturaML8511();
void lecturaBMP280();
void lecturaSHT20();
void envioDatos();

int averageAnalogRead(int pinToRead) ;
int averageAnalogRead(int UVsensorIn); 
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max);

void setup() {
  Serial.begin(9600);
 //=======pluviometro====
 pinMode(sensor, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(sensor), funContadorVuelcos, FALLING);
   
 //=======ml8511=========
 pinMode(UVsensorIn, INPUT);
 //=======bmp280=========
 
  bmp.setSampling(Adafruit_BMP280::MODE_FORCED,     
                  Adafruit_BMP280::SAMPLING_X2,     
                  Adafruit_BMP280::SAMPLING_X16,    
                  Adafruit_BMP280::FILTER_X16,      
                  Adafruit_BMP280::STANDBY_MS_500); 
//=======sht20=========
Serial.println("SHT20 Example!");                   
    sht20.initSHT20();                                  // Init SHT20 Sensor
    delay(10000);
    sht20.checkSHT20();
}

void loop() {


 if (millis()-flagEnvio>intervaloEnvio)  // 1h=3600000 sg si el tiempo supera la hora tomo las medidas de todos los vuelcos
  { 
  flagEnvio=millis(); // colocarlo mejor aquí. Si lo colocas al final te va dando retrasos
  lecturaML8511(); // rayos uva
  lecturaBMP280(); // tra,altitud,presión
  lecturaSHT20();  // tra,humedad (elegido por tener mayor precisión)
  pluviometro();
  envioDatos();
  }

}

// aquí van las funciones
void lecturaML8511()
{
  int uvLevel = averageAnalogRead(UVsensorIn);
 
  float outputVoltage = 3.3 * uvLevel/4095;
  float uvIntensity = mapfloat(outputVoltage, 0.99, 2.9, 0.0, 15.0);
 
  Serial.print(" UV Intensity: ");
  Serial.print(uvIntensity);
  Serial.print(" mW/cm^2"); 
  Serial.println(); 
 // delay(200);
}

void lecturaBMP280(){
  if (bmp.takeForcedMeasurement()) {      // must call this to wake sensor up and get new measurement data it blocks until measurement is complete
    // can now print out the new measurements
    Serial.print(F("Temperature = "));
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");

    Serial.print(F("Pressure = "));
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");

    Serial.print(F("Approx altitude = "));
    Serial.print(bmp.readAltitude(1013.25)); 
    Serial.println(" m");

    Serial.println();
   // delay(2000);
  } else {
    Serial.println("Forced measurement failed!");
  }
}
void lecturaSHT20()
{
    float humd = sht20.readHumidity();                  // Read Humidity
    float temp = sht20.readTemperature();               // Read Temperature
    Serial.print(" Temperature:");
    Serial.print(temp, 1);
    Serial.print("C");
    Serial.print(" Humidity:");
    Serial.print(humd, 1);
    Serial.print("%");
    Serial.println();
   // delay(1000);
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
int averageAnalogRead(int pinToRead)
{
  byte numberOfReadings = 8;
  unsigned int runningValue = 0; 
 
  for(int x = 0 ; x < numberOfReadings ; x++)
    runningValue += analogRead(pinToRead);
    runningValue /= numberOfReadings;
 
  return(runningValue);  
 
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
    //flagEnvio = millis();
    }
    //++++++++++++++++ lectura por días +++++++++++++++++++++++++++

   int litrosDia=litrosIntervalo*24; 

}
 ```




3. CÓDIGO BASE DE DATOS
```python
/* 
// INICIALMENTE COMO VOY A COMUNICARME POR I2C TENGO QUE AVERIGUAR EL DIRECCIÓN DEL SENSOR
// en mi caso me da 0x76 y tengo que ir a la libreria en >.pio>libdeps>Adafruit BMP280 Library>Adafruit_BMP280
// y sustituir 0x77 por 0x76
*/

#include <Arduino.h>
#include <Wire.h>

void setup()
{
  Wire.begin();

  Serial.begin(9600);
  while (!Serial);             // Espera al monitor serie
  Serial.println("\nEscaner I2C");
}

void loop()
{
  byte error, address;
  int nDevices;

  Serial.println("Escaneando...");

  nDevices = 0;
  for(address = 1; address < 127; address++ )
  {
    // El escaner i2c utiliza el valor devuelto por la instrucción 
    // Write.endTransmisstion para reconocer la dirección a la que 
    // está conectado cada dispositivo.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("Dispositivo I2C encontrado en la direccion 0x");
      if (address<16)
        Serial.print("0");
      Serial.print(address,HEX);
      Serial.println("  !");

      nDevices++;
    }
    else if (error==4)
    {
      Serial.print("Error desconocido en la direccion 0x");
      if (address<16)
        Serial.print("0");
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0)
    Serial.println("Ningun dispositivo I2C encontrado\n");
  else
    Serial.println("Hecho\n");

  delay(5000);           // espera 5 segundos para el siguiente escaneo
}
   */ 

#include <Arduino.h>
#include <Wifi.h> 
#include <HTTPClient.h>      // no es necesario introducirla solo llamarla
#include <WiFiClient.h>
#include <Adafruit_BMP280.h>

#include <Wire.h>            // necesario para sht20
#include <DFRobot_SHT20.h>   // necesario para sht20
//objetos
DFRobot_SHT20    sht20;
Adafruit_BMP280 bmp; // I2C
WiFiClient client; 
//COLEGIO
const char* ssid = "CENTRO";
//const char* password = "";
// -----FIJAR LA IP----------
IPAddress ip(10,200,112,25);     
IPAddress gateway(10,200,112,1);   
IPAddress subnet(255,255,248,0);  

// ---- VARIABLES ----------
int UVsensorIn = 32;  //Output from the sensor uva
float uvIntensity;    // variables para utilizar fuera de su función
// variables pluviometro
const byte sensor=5;
const int tiempoRebote=500;
volatile int numVuelcos = 0;// numero de vuelcos, comienza en 0
float litrosIntervalo=0;
unsigned long flagVuelcos=500;
unsigned long flagEnvio =0;
int intervaloEnvio=20000;



//FUNCIONES aquí se declaran
void funContadorVuelcos();
void pluviometro();
void lecturaML8511();
void lecturaBMP280();
void lecturaSHT20();
void envioDatos();

int averageAnalogRead(int pinToRead) ;
int averageAnalogRead(int UVsensorIn); 
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max);

void setup() {
  Serial.begin(9600);
 //=======pluviometro====
 pinMode(sensor, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(sensor), funContadorVuelcos, FALLING);
   
 //=======ml8511=========
 pinMode(UVsensorIn, INPUT);
 //=======bmp280=========
 Serial.println(F("BMP280 Forced Mode Test."));

  if (!bmp.begin()) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    while (1) delay(10);
  }
 
  bmp.setSampling(Adafruit_BMP280::MODE_FORCED,     
                  Adafruit_BMP280::SAMPLING_X2,     
                  Adafruit_BMP280::SAMPLING_X16,    
                  Adafruit_BMP280::FILTER_X16,      
                  Adafruit_BMP280::STANDBY_MS_500); 
//=======sht20=========
Serial.println("SHT20 Example!");                   
    sht20.initSHT20();                                  // Init SHT20 Sensor
    delay(10000);
    sht20.checkSHT20();                                 // Check SHT20 Sensor
 Serial.println("Connecting to WiFi");
//=======WIFI conectada ip fija=========
WiFi.mode(WIFI_STA);
  WiFi.config(ip, gateway, subnet);
  WiFi.begin(ssid, NULL);
  Serial.print("Conectando a:\t");
  Serial.println(ssid);
  // Esperar a que nos conectemos
  while (WiFi.status() != WL_CONNECTED) 
  {
  delay(200); 
  Serial.print('.');
  }
 // Mostrar mensaje de exito y dirección IP asignada
  Serial.println("Conexión establecida");  
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());
}

void loop() {


 if (millis()-flagEnvio>intervaloEnvio)  // 1h=3600000 sg si el tiempo supera la hora tomo las medidas de todos los vuelcos
  { 
  flagEnvio=millis(); // colocarlo mejor aquí. Si lo colocas al final te va dando retrasos
  lecturaML8511(); // rayos uva
  lecturaBMP280(); // tra,altitud,presión
  lecturaSHT20();  // tra,humedad (elegido por tener mayor precisión)
  pluviometro();
  envioDatos();
  }

}

// aquí van las funciones
void lecturaML8511()
{
  int uvLevel = averageAnalogRead(UVsensorIn);
 
  float outputVoltage = 3.3 * uvLevel/4095;
  float uvIntensity = mapfloat(outputVoltage, 0.99, 2.9, 0.0, 15.0);
 
  Serial.print(" UV Intensity: ");
  Serial.print(uvIntensity);
  Serial.print(" mW/cm^2"); 
  Serial.println(); 
 // delay(200);
}

void lecturaBMP280(){
  if (bmp.takeForcedMeasurement()) {      // must call this to wake sensor up and get new measurement data it blocks until measurement is complete
    // can now print out the new measurements
    Serial.print(F("Temperature = "));
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");

    Serial.print(F("Pressure = "));
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");

    Serial.print(F("Approx altitude = "));
    Serial.print(bmp.readAltitude(1013.25)); 
    Serial.println(" m");

    Serial.println();
   // delay(2000);
  } else {
    Serial.println("Forced measurement failed!");
  }
}
void lecturaSHT20()
{
    float humd = sht20.readHumidity();                  // Read Humidity
    float temp = sht20.readTemperature();               // Read Temperature
    Serial.print(" Temperature:");
    Serial.print(temp, 1);
    Serial.print("C");
    Serial.print(" Humidity:");
    Serial.print(humd, 1);
    Serial.print("%");
    Serial.println();
   // delay(1000);
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
int averageAnalogRead(int pinToRead)
{
  byte numberOfReadings = 8;
  unsigned int runningValue = 0; 
 
  for(int x = 0 ; x < numberOfReadings ; x++)
    runningValue += analogRead(pinToRead);
    runningValue /= numberOfReadings;
 
  return(runningValue);  
 
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
    //flagEnvio = millis();
    }
    //++++++++++++++++ lectura por días +++++++++++++++++++++++++++

   int litrosDia=litrosIntervalo*24; 

}

void envioDatos(){

if (WiFi.status() == WL_CONNECTED){ 
     HTTPClient http;  // creo el objeto http
     http.begin(client,"http://estacionjac.000webhostapp.com/EspPost.php");
     http.addHeader("Content-Type", "application/x-www-form-urlencoded"); // defino texto plano..
     
     
     //String datos_a_enviar = "temperatura=" +String(10);  

   // String datos_a_enviar = "temperatura=" + String(30) + "&humedad=" + String(30)+ "&presion=" + String(30);  
    String datos_a_enviar = "temperatura=" + String(sht20.readTemperature()) + "&humedad=" + String(sht20.readHumidity())+"&presion=" + String(bmp.readPressure())+"&uv=" + String(uvIntensity)+"&lluvia=" + String(litrosIntervalo);  
     /*  String datos_a_enviar = "temperatura=" + String(sht20.readTemperature());      
           datos_a_enviar=+"&humedad=" + String(sht20.readHumidity());
           datos_a_enviar=+"&presion=" + String(bmp.readPressure());
           datos_a_enviar= +"&uv=" + String(uvIntensity);  */ // ERRORES

     int codigo_respuesta = http.POST(datos_a_enviar);

     if (codigo_respuesta>0){
      Serial.println("Código HTTP: "+ String(codigo_respuesta));
        if (codigo_respuesta == 200){
          String cuerpo_respuesta = http.getString();
          Serial.println("El servidor respondió: ");
          Serial.println(cuerpo_respuesta);
        }
     } else {
        Serial.print("Error enviado POST, código: ");
        Serial.println(codigo_respuesta);
     }

       http.end();  // libero recursos
       
  } else {
     Serial.println("Error en la conexion WIFI");
  }
 // delay(60000); //espera 60s
}
 
```




# INTERPRETACIÓN DE DATOS
**NIVEL DE CLIMATIZACIÓN:**
Una humedad igual o inferior al 40%
Una humedad igual o superior al 70%
Una humedad superior al 40% pero inferior al 70%; al mismo tiempo la temperatura actual es superior a 20°C (68°F) pero inferior a 27°C (80.6°F).

A**VISO DE HELADAS:**
Si el aviso de heladas se encuentra activo y la temperatura exterior se
encuentra entre -1,0 y +2,9 °C (+30,2 y 37,3 °F) suena una alarma durante
unos 5 segundos y parpadea el símbolo



**LLUVIA:**

La lluvia se mide en litros por metro cuadrado o en milímetros, que llega a ser lo mismo, y depende también del tiempo en el que cae, que en este caso estaremos midiendo cuántos litros por metro cuadrado cae de lluvia cada hora. Dependiendo de la intensidad de la lluvia, ésta puede ser débil, moderada, fuerte, etc.

![tabla](https://www.meteolobios.es/jpg/39f519045dbe8584fc2c6586432d0d2fo.jpg)



**ÍNDICE ULTRAVIOLETA:**

El ML8511 trabaja usando una especie de sensor sensible a la luz que funciona de la siguiente manera:
> **+ Luz = + Voltaje = + Valor analógico**

El código proporcionado por [How2Electronics](https://how2electronics.com/uv-index-meter-esp32-uv-sensor-ml8511/) resulta proporcionando un valor de intensidad ultravioleta en **mW/cm²**. El problema es que dicho valor no tiene *(a simple vista)* ningún tipo de relación con otras unidades de medición.

Tras un poco de investigación, dimos con un [video](https://www.youtube.com/watch?v=zbHh3onXqBc&t=1231s&ab_channel=RoboticsSpaceNV) que explicaba un proyecto con el ML8511 y un Arduino, y mostraba una tabla que relacionaba el valor analógico proporcionado por el sensor y un valor de **índice ultravioleta** *(que es la manera en la que todos los servicios de meteorología muestran este dato)*.

Dicha tabla es la siguiente:
| Valor analógico | Índice UV |
|--:|--|
| <50   | 0    |
| <227  | 1    |
| <318  | 2    |
| <408  | 3    |
| <503  | 4    |
| <606  | 5    |
| <696  | 6    |
| <795  | 7    |
| <881  | 8    |
| <976  | 9    |
| <1079 | 10   |
| <1170 | >=11 |

Simplemente reconocimos los limites que tiene nuestro valor analógico (4095), y con una función de *mapeo*, reducimos el limite de manera proporcional, por lo que ya teníamos una relación entre el índice ultravioleta y los valores que nos aporta nuestro sensor.




# PROBLEMAS ENCONTRADOS
**DHT11:** Los errores que daba el sensordht11 y la placa eran que al conectar el pin data desde el principio, no ejecutaba el codigo, así que habia ue descoectarlo hasta quie se subía el código y ya se podía enchufar de nuevo.

**Pluviómetro:** El principal problema y el más importante a mi parecer del pluviómetro es todo el tema de la medición, ya que yo puedo decir que han caído cientos o miles de litros de agua por metro cuadrado en todo el año. ¡Pero no es lo mismo que lloviera todos los días o que lo hiciera solo en uno! Por eso, desde mi punto de vista dar el tiempo en el que ha caído ese agua es muy importante y esa sería la solución. En mi caso, yo decidí medir la lluvia que cae por hora, pero aún así no sería exacto del todo, ya que durabte esa hora puede que solo haya llovido 20 minutos y los otros 40 minutos no, por lo que no se podría llegar a hace una medición del todo exacta. Y es ahí donde estáa el gran dilema del pluviómetro que siempre trae muchos quebraderos de cabeza.

**BMP30:** En primer lugar, el terminal debería mostrar un mensaje de este estilo: "Temperatura : VALOR *C, Presion: VALOR mb"




Si no lo muestra y, ocasionalmente, muestra carácteres "extraños" es posible que tengas los "baudios" a una mala calibración. 
El término "baud" se refiere a la velocidad de transmisión de datos en un canal de comunicación, como en el caso de la comunicación serie utilizada en Arduino. Se expresa en baudios (símbolos por segundo) y determina la velocidad a la que los bits de datos se envían y reciben en un canal de comunicación. Por lo general está por defecto en 9600 (o 115200), pero puede que lo tengas establecido en otro valor el cual no coincide. Para cambiarlo unicamente te diriges al monitor serial, tanto en arduino como en platformio, y allí aparecerán los baudios. 

Error al iniciar el sensor: Probablemente se deba a que está mal conectado. Para solucionarlo controla si tienes los pines del 22 y 21 conectados a donde deben estar (si parece que sí están en el lugar adecuado, intenta igualmente intercambiarlos, a lo mejor funciona ya que a mí me funcionó de esta manera).

**Ultravioleta:** El primer problema fue la colocación de los distintos cables necesitados. Esto parecería algo sencillo a primera vista, pero por alguna razón este sensor requiere una especie de **puente** entre la fuente de 3.3V de la placa, un pin de la placa *(que cuya salida será usada en el código como referencia)* y el pin **"EN"** (*Enable*) del sensor.
En esta imagen podemos ver un diagrama de conexión bastante claro:
![ML8511 UV Sensor Hookup Guide - SparkFun Learn](https://cdn.sparkfun.com/assets/learn_tutorials/2/0/6/ML8511_UV_Hookup.png)
*Créditos: [sparkfun.com](https://learn.sparkfun.com/tutorials/ml8511-uv-sensor-hookup-guide/all)*

* Otro de los problemas que nos encontramos, fue a la hora de introducir la parte de mandar datos a la base de datos en el código de medición.

Para poder usar solicitudes HTTP obviamente necesitamos una conexión a internet, por lo que usamos el módulo **WiFi** que incluye la placa ESP32 integrado, y teníamos conectado el pin de salida analógica del sensor al pin 15, que pertenece al canal analógico 2, **ADC2**, del ESP32. Lo que no sabíamos es que cuando usamos cualquier tipo de funcionalidad WiFi, dicho canal analógico, ADC2, **quedaría inservible**. Dicho error nos daría problemas durante varios días, ya que estábamos desarrollando el código con el programa [Arduino IDE](https://www.arduino.cc/en/software), el cual no nos indicaba el error de interferencia entre el módulo WiFi y el canal analógico 2.

Cuando hice pruebas en mi ordenador personal, usé el entorno de desarrollo [Visual Studio Code](https://code.visualstudio.com/) con la extensión [PlatformIO](https://platformio.org/), y en ese momento fue cuando en el *serial monitor* pude ver un mensaje que decía que el canal ADC2 ya estaba siendo usado por el módulo WiFi.

La solución a dicho problema fue conectar la salida del sensor a un pin del canal **ADC1**, que va del pin 32 al pin 39.

* El último problema fue que si navegaba por distintas páginas de la web, de alguna manera terminaba en una página HTML, la cual ni su archivo existía ya que todo eran archivos PHP.

Al comprobar los archivos PHP que formaban las distintas páginas de la web, encontramos esto:
```php
<!DOCTYPE html>
<?php
```
que lo que hacia era mezclar el código HTML con el PHP.

La mejor solución que encontramos a este problema fue comenzar los ficheros PHP asi:
```php
<?php
```
para luego introducir el código HTML mediante un *echo*:
```php
<?php
echo '
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Estación Meteorológica</title>
    <link rel="stylesheet" href="bootstrap.min.css">
    ...
</html>';
?>
```
