import os
from PIL import Image
from PIL import GifImagePlugin

gif = Image.open("D:\Projects\Glowy eyes\python stuff\eyes.gif")
gifData = gif.load()

gridQty = 2
width, height = gif.size
frames = gif.n_frames

width /= 2
width = int(width)

if not FileExistsError:
    os.mkdir("pic1")

with open("D:\Projects\Glowy eyes\python stuff\pic1\pic1.ino", "w") as file:

    code = """

//LED library and pins
#include <FastLED.h>
#define NUM_LEDS 128
#define LED_DATA_PIN 3
byte SQ_SIZE; //Square grid size

CRGB leds[NUM_LEDS];

byte rgb[NUM_LEDS][3]""" + f"[{frames - 1}];" + """
byte intensity = 20;
int frameTime""" + f"[{frames - 1}];" + """

//These only go from 0 to 7, to match the device's grid
byte x = 0;
byte y = 0;

void setup() {

SQ_SIZE = 16; //TODO adapt to rectangular grid size THIS IS WORKING HORRIBLY
int LEDloc = NUM_LEDS - 1;

FastLED.addLeds <WS2812B, LED_DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

//Serial.begin(9600);

    """
    
    i = 0
    j = 64
    
    for f in range(1, frames):
        gif.seek(f)
        gif.save("D:\Projects\Glowy eyes\python stuff\_temp.bmp")
        img = Image.open("D:\Projects\Glowy eyes\python stuff\_temp.bmp")
        imgData = img.load()

        for y in range(height):

            for x in range(width):
                r, g, b = imgData[x,y]

                code += f"""
                rgb[{i}][0][{f - 1}] = {r} * intensity / 100;
                rgb[{i}][1][{f - 1}] = {g} * intensity / 100;
                rgb[{i}][2][{f - 1}] = {b} * intensity / 100; 
                """
                i += 1

                if i >= 64: #TODO Adapt to grid size
                    i = 0
            
            for x in range(width, 16):
                r, g, b = imgData[x,y]

                code += f"""
                rgb[{j}][0][{f - 1}] = {r} * intensity / 100;
                rgb[{j}][1][{f - 1}] = {g} * intensity / 100;
                rgb[{j}][2][{f - 1}] = {b} * intensity / 100; 
                """
                j += 1

                if j >= 128: #TODO Adapt to grid size
                    j = 64

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

    for (int n = SQ_SIZE / 4; n > 0; n--)
    {
        for (int i = SQ_SIZE; i > 0; i--)
        {
        LEDloc--;
        
        leds[LEDloc] = CRGB(rgb[imgIndex][0][currentFrame], rgb[imgIndex][1][currentFrame], rgb[imgIndex][2][currentFrame]);
        imgIndex++;

        Serial.println(LEDloc);
        //delay(100);
        }
        
        LEDloc -= SQ_SIZE;


        for (int i = SQ_SIZE; i > 0; i--)
        {
        leds[LEDloc] = CRGB(rgb[imgIndex][0][currentFrame], rgb[imgIndex][1][currentFrame], rgb[imgIndex][2][currentFrame]);
        imgIndex++;
        LEDloc++;

        Serial.println(LEDloc);
        //delay(100);
        }
    
        LEDloc -= SQ_SIZE;
        
        Serial.println(LEDloc);
        }

    FastLED.show();
    Serial.println("New frame");
    delay(frameTime[currentFrame]);
    }
}
        """

    file.write(code)
