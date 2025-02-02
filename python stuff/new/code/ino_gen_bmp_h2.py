import os

from PIL import Image
img = Image.open(r"J:\Glowy eyes\python stuff\new\eyes.bmp")
imgData = img.load()

width, height = img.size
numLeds = 128

sqSize = 8 #Number of pixels on the grid's side
nGrids = 2

pyGridWidth = width
pyGridHeight = height

if not FileExistsError:
    os.mkdir("pic2")

with open(r"J:\Glowy eyes\python stuff\new\pic2\pic2.ino", "w") as file:

    code = f"""
    //LED library and pins
    #include <FastLED.h>
    #define NUM_LEDS {numLeds}
    #define LED_DATA_PIN 3

    int gridWidth = {pyGridWidth};
    int gridHeight = {pyGridHeight};

    CRGB leds[NUM_LEDS];

    int rgb[NUM_LEDS][3];
    int intensity = 100;

    //These only go from 0 to 7, to match the device's grid (eh? do they?)
    int x = 0;
    int y = 0;
    """

    code += """

    void setup() {

    int LEDloc = NUM_LEDS - 1;

    FastLED.addLeds <WS2812B, LED_DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

    Serial.begin(9600);

    """
    
    i = 0

    for g in range (nGrids):

        currentGrid = g
        print("grid iterated", currentGrid)

        for y in range(height):

            for x in range(sqSize):

                print ("x: ", x + (sqSize * currentGrid), "y: ", y)

                r, g, b, a = imgData[x + (sqSize * currentGrid), y]


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

    for (int n = gridWidth / 2; n > 0; n--)
    {
        for (int i = gridHeight; i > 0; i--)
        {
        LEDloc--;
        
        leds[LEDloc] = CRGB(rgb[imgIndex][0], rgb[imgIndex][1], rgb[imgIndex][2]);
        imgIndex++;
        FastLED.show();

        Serial.println(LEDloc);

        delay(50);
        }

        LEDloc -= gridHeight;

        for (int i = gridHeight; i > 0; i--)
        {
        leds[LEDloc] = CRGB(rgb[imgIndex][0], rgb[imgIndex][1], rgb[imgIndex][2]);
        imgIndex++;
        FastLED.show();
        LEDloc++;

        Serial.println(LEDloc);

        delay(50);
        }

        LEDloc -= gridHeight;
        Serial.println(LEDloc);
    }
    }
        """

    file.write(code)
