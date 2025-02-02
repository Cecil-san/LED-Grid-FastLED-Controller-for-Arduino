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

//This will be a LED address value that we can use to expand the default single-dot topology produced by the script. Default value is 3 so that we can make a square
int valEx[4];

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

void AllocatePixel() //Use this to allocate a single pixel in the current cursor's position
{
  LEDloc = (SQ_SIZE * valY) - (SQ_SIZE - valX);
  leds[LEDloc] = CRGB(10, 10, 10);
}


void loop() {

  //Write joystick values and read them
  valXRaw = analogRead(pinX);
  valYRaw = analogRead(pinY);

  //For a 7x7 grid, 1024/7 ~= 146
  valX = valXRaw / 146;
  valY = valYRaw / 146;

  valY++;

    if (valY % 2 != 0)  //If Y is odd, the X order goes left-wise
  {
    valX = calculateAnalogous(valX);
  }

  AllocatePixel();
  valEx[1] = LEDloc;
  
  //TODO:JOYSTICK IS COMPLETELY REVERSEDDDD
  FastLED.show();

  leds[valEx[1]] = CRGB(0, 0, 0); //Erase to cleanup traces

  Serial.print("X: ");
  Serial.print(valX);
  Serial.print(" Y: ");
  Serial.println(valY);
  Serial.println(LEDloc);

}
