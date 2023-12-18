#include <arduino.h>
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(115200);
    dht.begin();
  }

void loop() {
    
  delay(5000);
  float h = dht.readHumidity();
  if (isnan(h)) {
    Serial.println("Error obteniendo los datos del sensor DHT11");
    return;
  }
 
  Serial.print("Humedad: ");
  Serial.print(h);

 
}
