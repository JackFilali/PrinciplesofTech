#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 6

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
}
void loop() {
  for(int i=0;i<NUM_LEDS;i++){
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(30)
  }
}
