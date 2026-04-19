#include <Arduino.h>
#include <QRISArduino.h>
#include <secrets.h>

Mayar api(apikey);

void setup() {
  Serial.begin(115200);
  api.debug(true);
  api.begin(ssid, wifiPassword);
  QRISResponse bal = api.balance();
}

void loop(){}