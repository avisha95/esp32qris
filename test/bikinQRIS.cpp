#include <Arduino.h>
#include <QRISArduino.h>
#include <secrets.h>

Mayar api(apikey);

void setup() {
  Serial.begin(115200);
  api.debug(true);
  api.begin(ssid, wifiPassword);
  
  QRISResponse qris = api.createQris(1);

}

void loop(){}