#include <FastLED.h>
#define NUM_LEDS 64
#define DATA_PIN 3

int i = 0;

CRGB leds[NUM_LEDS];

void setup() {

  //Set up array with full map of ONE device, provided it's square
  int linLength = sqrt(NUM_LEDS);
  int LEDloc [linLength] [linLength];
  
  FastLED.addLeds <WS2812B, DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

  Serial.begin(9600);
}

void loop() {

  
  leds[i] = CRGB(10,10,10);
  FastLED.show();
  delay(50);
  i++;

  Serial.println(i);
  
}
