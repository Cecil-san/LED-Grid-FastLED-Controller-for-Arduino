import os
from PIL import Image
from PIL import GifImagePlugin

gif = Image.open(r"J:\Glowy eyes\python stuff\new\eyes.gif")
gifData = gif.load()

width, height = gif.size
numLeds = 128

pyGridWidth = width
pyGridHeight = height

sqSize = 8 #Number of pixels on the grid's side
nGrids = 2

frames = gif.n_frames

if not FileExistsError:
    os.mkdir("pic2")

with open(r"J:\Glowy eyes\python stuff\new\pic2\pic2.ino", "w") as file:

    code = f"""//LED library and pins
#include <FastLED.h>
#define NUM_LEDS {numLeds}
#define LED_DATA_PIN 3

int gridWidth = {pyGridWidth};
int gridHeight = {pyGridHeight};

CRGB leds[NUM_LEDS];

byte rgb[NUM_LEDS][3]""" + f"[{frames - 1}];" + """
byte intensity = 15;
int frameTime""" + f"[{frames - 1}];" + """

//These only go from 0 to 7, to match the device's grid
byte x = 0;
byte y = 0;

void setup() {

int LEDloc = NUM_LEDS - 1;

FastLED.addLeds <WS2812B, LED_DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

//Serial.begin(9600);
"""
    
    i = 0



    for f in range(1, frames):
        gif.seek(f)
        gif.save(r"J:\Glowy eyes\python stuff\new\pic2\_temp.bmp")
        img = Image.open(r"J:\Glowy eyes\python stuff\new\pic2\_temp.bmp")
        imgData = img.load()

        for g in range (nGrids):

            currentGrid = g
            print("grid iterated", currentGrid)

            for y in range(height):

                for x in range(sqSize):

                    print ("x: ", x + (sqSize * currentGrid), "y: ", y)

                    r, g, b = imgData[x + (sqSize * currentGrid), y]

                    code += f"""
    rgb[{i}][0][{f - 1}] = {r} * intensity / 100;
    rgb[{i}][1][{f - 1}] = {g} * intensity / 100;
    rgb[{i}][2][{f - 1}] = {b} * intensity / 100; 
    """
                    i += 1

                    if i >= numLeds:
                        i = 0

            code += f"""

            frameTime[{f - 1}] = {gif.info['duration']};

    """            
                

    code += """

} 
void loop() {
    int nFrames = """ + f"{frames - 1};" + """
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
        
        leds[LEDloc] = CRGB(rgb[imgIndex][0][currentFrame], rgb[imgIndex][1][currentFrame], rgb[imgIndex][2][currentFrame]);
        imgIndex++;

        Serial.println(LEDloc);
        //delay(100);
        }
        
        LEDloc -= gridHeight;


        for (int i = gridHeight; i > 0; i--)
        {
        leds[LEDloc] = CRGB(rgb[imgIndex][0][currentFrame], rgb[imgIndex][1][currentFrame], rgb[imgIndex][2][currentFrame]);
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
    delay(frameTime[currentFrame]);
    }
}
        """

    file.write(code)
