//Declaramos la libreria DHT
#include <DHT.h>
//Se utilizara el pin 7 para el almacenamiento de datos.
#define DHTPIN 7
//El sensor a utiizarse sera el DHT22
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
//Iniiamos la la instancia de DHT
  dht.begin();
  delay(10);
}

void loop() {
  //Capturamos la temperatura 
  float t=dht.readTemperature();
  //Capturamos la humedad 
  float h=dht.readHumidity();
  delay(1500);

  Serial.println("Temperatura : ");
  Serial.println(t);
  Serial.println("Humedad : ");
  Serial.println(h);
  Serial.println();
}
