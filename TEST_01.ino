#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>
#include <DHT.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 8
#define CS_PIN 10
#define DHTPIN D2
#define DHTTYPE DHT22
#define MQ135PIN A0

DHT dht(DHTPIN, DHTTYPE);
MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup(){
  myDisplay.begin();
  myDisplay.setIntensity(4);
  myDisplay.displayClear();

  dht.begin();
  
  // Initial display for testing
  
}
int i = 0;

void loop(){
  if (myDisplay.displayAnimate()){
      char message[100]; // Allocate buffer. Make sure it's large enough to fit your 
message
      snprintf(message, sizeof(message), "TEST%d", i+1);
      myDisplay.displayScroll(message, PA_CENTER, PA_WIPE_CURSOR, 40);
      i++;
    // // Reading from DHT22
    // float humidity = dht.readHumidity();
    // float temperature = dht.readTemperature(); 

    // // Reading from MQ135
    // int airQualityValue = analogRead(MQ135PIN);

    // Prepare the display string
    
    myDisplay.displayClear();
    // myDisplay.displayScroll(displayString,PA_CENTER,PA_SCROLL_LEFT,100);
    myDisplay.displayReset();
  }
}
