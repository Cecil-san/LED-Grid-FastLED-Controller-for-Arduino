import os

from PIL import Image
img = Image.open("J:\Glowy eyes\python stuff\eye.bmp")
imgData = img.load()

width, height = img.size            

if not FileExistsError:
    os.mkdir("pic1")

with open("J:\Glowy eyes\python stuff\Old stuff that works\pic1\pic1.ino", "w") as file:

    code = """
    
//LED library and pins
#include <FastLED.h>
#define NUM_LEDS 64
#define LED_DATA_PIN 3
int SQ_SIZE; //Square grid size

CRGB leds[NUM_LEDS];

int rgb[NUM_LEDS][3];
int intensity = 100;

//These only go from 0 to 7, to match the device's grid
int x = 0;
int y = 0;

void setup() {

SQ_SIZE = sqrt(NUM_LEDS);
int LEDloc = NUM_LEDS - 1;

FastLED.addLeds <WS2812B, LED_DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

Serial.begin(9600);

    """
    
    i = 0
    
    for y in range(height):

        for x in range(width):
            r, g, b, a = imgData[x,y]

            code += f"""
            rgb[{i}][0] = {r};
            rgb[{i}][1] = {g};
            rgb[{i}][2] = {b};
            """
            i += 1

    code += """

} 
void loop() {

int LEDloc = NUM_LEDS;
int imgIndex = 0;

for (int n = SQ_SIZE / 2; n > 0; n--)
{
    for (int i = SQ_SIZE; i > 0; i--)
    {
    LEDloc--;
    
    leds[LEDloc] = CRGB(rgb[imgIndex][0], rgb[imgIndex][1], rgb[imgIndex][2]);
    imgIndex++;
    FastLED.show();

    Serial.println(LEDloc);

    delay(50);
    }

    LEDloc -= SQ_SIZE;

    for (int i = SQ_SIZE; i > 0; i--)
    {
    leds[LEDloc] = CRGB(rgb[imgIndex][0], rgb[imgIndex][1], rgb[imgIndex][2]);
    imgIndex++;
    FastLED.show();
    LEDloc++;

    Serial.println(LEDloc);

    delay(50);
    }

    LEDloc -= SQ_SIZE;
    Serial.println(LEDloc);
}
}
        """

    file.write(code)
