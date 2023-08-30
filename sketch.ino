#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET 4

Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)){
    Serial.println(F("Failed to start SSD1306 oled"));
    while(1);
  }
  delay(2000);
  display.setCursor(0,0);
}

void loop() {
  display.clearDisplay();
  display.drawCircle(50,30,30,WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.fillCircle(50,30,30,WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.drawTriangle(50,10,0,60,60,60,WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.fillTriangle(50,10,0,60,60,60,WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.drawRect(30,10,80,50,WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.fillRect(30,10,80,50,WHITE);
  display.display();
  delay(1000);
}
