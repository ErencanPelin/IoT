#include <Arduino.h>
#include <DHTStable.h>

DHTStable DHT;

#define DHT11_Pin 2

void setup() {
  Serial.begin(115200);
}

void loop() {
  DHT.read11(DHT11_Pin);
  Serial.print("Temperature - ");
  Serial.println(DHT.getTemperature());
  Serial.print("Humidity - ");
  Serial.println(DHT.getHumidity());
  delay(1000);
}