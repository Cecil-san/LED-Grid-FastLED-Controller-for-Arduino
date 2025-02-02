//LED library and pins
#include <FastLED.h>
#define NUM_LEDS 64
#define LED_DATA_PIN 3
int SQ_SIZE; //Square grid size

CRGB leds[NUM_LEDS];

//Joystick pins and variables to load values on later
#define pinX A0
#define pinY A1
#define SW 4

//Raw analog joystick values
int valXRaw = 0;
int valYRaw = 0;

//These only go from 0 to 7, to match the device's grid
int valX = 0;
int valY = 0;

//Odd rows go in the opposite direction, so we calculate
//the real value of the x based on its position
int ValXReal = 0;

//Coords of the cursor
int LEDloc = 0;

void setup() {

  //Joystick setup
  pinMode(SW, INPUT);
  digitalWrite(SW, HIGH);
  Serial.begin(9600);

  SQ_SIZE = 8; //sqrt(NUM_LEDS);

  //Set up array with full map of ONE LED device, provided it's square
  int linLength = sqrt(NUM_LEDS);
  int LEDloc [linLength] [linLength];

  FastLED.addLeds <WS2812B, LED_DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

}

int calculateAnalogous(int n)
{
  int res = (SQ_SIZE - 1) - n;
  Serial.println("res: ");
  Serial.print(res);

  return res;
}

void loop() {

  //Write joystick values and read them
  valXRaw = analogRead(pinX);
  valYRaw = analogRead(pinY);

  //For a 7x7 grid, 1024/7 ~= 146
  valX = valXRaw / 146;
  valY = valYRaw / 146;

  valY++;

  //Generate 2x2 square

  //Calculate order of the cell we're in
  //LEDloc = (SQ_SIZE * valY) - (SQ_SIZE - valX); //TODO convertir en función
  //leds[LEDloc] = CRGB(10,10,10); //Draw cell to variable
  //FastLED.show(); //Show drawn cells

  if (valY % 2 != 0)  //Y is odd
  {
    valX = calculateAnalogous(valX);
  }
  LEDloc = (SQ_SIZE * valY) - (SQ_SIZE - valX);
  leds[LEDloc] = CRGB(10, 10, 10);
//
//  if (valY % 2 != 0)  //Y is odd
//  {
//    valX = calculateAnalogous(valX);
//  }
//  LEDloc = (SQ_SIZE * valY) - (SQ_SIZE - valX);
//  leds[LEDloc] = CRGB(10, 10, 10);

  //    valY++;
  //    if (valY % 2 != 0)  //Y is odd
  //    {
  //      valX = calculateAnalogous(valX);
  //    }
  //    LEDloc = (SQ_SIZE * valY) - (SQ_SIZE - valX);
  //    leds[LEDloc] = CRGB(10,10,10);
  //
  //
  //    valX++;
  //    if (valY % 2 != 0)  //Y is odd
  //    {
  //      valX = calculateAnalogous(valX);
  //    }
  //    LEDloc = (SQ_SIZE * valY) - (SQ_SIZE - valX);
  //    leds[LEDloc] = CRGB(10,10,10);
  FastLED.show();

  leds[LEDloc] = CRGB(0, 0, 0); //Erase to cleanup traces

  Serial.print("X: ");
  Serial.print(valX);
  Serial.print(" Y: ");
  Serial.println(valY);
  Serial.println(LEDloc);
  
}
