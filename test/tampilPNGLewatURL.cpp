#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"
#include "QRISArduino.h"
#include <secrets.h>

#define TFT_DC 15
#define TFT_CS 5

Adafruit_ILI9341 tft(TFT_CS, TFT_DC);
TFTImageDisplay imageDisplay(tft);
Mayar mayar(apikey);

String imageUrl = "https://raw.githubusercontent.com/ajangrahmat/kumpulan-gambar/refs/heads/main/mina%20(1).png";

void setup() {
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(0);
  tft.fillScreen(ILI9341_BLACK);

  mayar.begin(ssid, wifiPassword);

  imageDisplay.setOffset(20, 20);
  imageDisplay.show(imageUrl, 200, 200, 20, nullptr);
  imageDisplay.resetOffset();
}

void loop() {}