#include <SD.h>

#include <dht.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  Serial.println(String(DHT.temperature) + "," + String(DHT.humidity));
  delay(1000);
} 
