//LED library and pins
#include <FastLED.h>
#include <SPI.h>
#include <SD.h>
#define NUM_LEDS 128
#define LED_DATA_PIN 3
#define PIN_CS 53

File testFile;

int gridWidth, gridHeight, sqSize;
int nFrames;

int headerEnd;
//int* frameTime; //This will point towards a future array


CRGB leds[NUM_LEDS];

byte intensity = 15;

//These only go from 0 to 7, to match the device's grid
byte x = 0;
byte y = 0;

int FetchData() {
  int data = 0;

  while (testFile.available()) {
    char buffer = testFile.read();
    if (buffer == ',' || buffer == ':') {
      Serial.println (data);
      return data;
    }
    data = data * 10 + (buffer - '0');
  }
  Serial.println("EOF");
}

void setup() {

  pinMode(53, OUTPUT);
  pinMode(4, OUTPUT);

  //Serial.begin(9600);
  while (!Serial) {
    ;  //Initialize Serial and wait until it's ready so not lose any logs
  }

  if (!SD.begin(PIN_CS)) {
    Serial.println("Card failed, or not present.");
    return;  //Inilialize SD card - If it gives false output, then it was not initilized correctly and terminates
  }
  Serial.println("SD card initialized.");

  testFile = SD.open("graph-sd.txt");

  FastLED.addLeds<WS2812B, LED_DATA_PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  if (testFile) {
    Serial.println("Reading test.txt:");

    Serial.println("Fetching width");
    gridWidth = FetchData();

    Serial.println("Fetching height");
    gridHeight = FetchData();

    Serial.println("Fetching sqSize");
    sqSize = FetchData();

    Serial.println("Fetching nFrames");
    nFrames = FetchData();

    //frameTime = new int[nFrames];

    //for (int i = 0; i < nFrames; i++)
    // {
    //   frameTime[i] = FetchData();
    // }
    headerEnd = testFile.position();
    Serial.println("Header ends on ");
    Serial.println(headerEnd);

    //try readStringUntil('\r')
    //and file.seek(pos)
    //or file.position()

  } else {
    Serial.println("Error opening file for reading.");
  }

}

void loop() {

  int currentFrame = 0;
  
  for (currentFrame; currentFrame < nFrames; currentFrame++)
  {
    int LEDloc = NUM_LEDS;
    int imgIndex = 0;

    for (int n = gridWidth / 2; n > 0; n--)
    {
        for (int i = gridHeight; i > 0; i--)
        {
        LEDloc--;
        
        Serial.println("Fetching RGB...");
        leds[LEDloc] = CRGB(FetchData(), FetchData(), FetchData());
        imgIndex++;
        
        Serial.println(LEDloc);
        //delay(100);
        }
        
        LEDloc -= gridHeight;


        for (int i = gridHeight; i > 0; i--)
        {

        Serial.println("Fetching RGB...");
        leds[LEDloc] = CRGB(FetchData(), FetchData(), FetchData());
        imgIndex++;
        LEDloc++;

        Serial.println(LEDloc);
        //delay(100);
        }
    
        LEDloc -= gridHeight;
        
        Serial.println(LEDloc);
        }

    FastLED.show();
    
    Serial.println("New frame");

    //delay(frameTime[currentFrame]);
    delay(50);
  }
  testFile.seek(headerEnd);
}
