

//LED library and pins
#include <FastLED.h>
#define NUM_LEDS 64
#define LED_DATA_PIN 3
byte SQ_SIZE; //Square grid size

CRGB leds[NUM_LEDS];

byte rgb[NUM_LEDS][3][8];
byte intensity = 20;
int frameTime[8];

//These only go from 0 to 7, to match the device's grid
byte x = 0;
byte y = 0;

void setup() {

SQ_SIZE = sqrt(NUM_LEDS);
int LEDloc = NUM_LEDS - 1;

FastLED.addLeds <WS2812B, LED_DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

//Serial.begin(9600);

    
                rgb[0][0][0] = 0 * intensity / 100;
                rgb[0][1][0] = 0 * intensity / 100;
                rgb[0][2][0] = 0 * intensity / 100; 
                
                rgb[1][0][0] = 0 * intensity / 100;
                rgb[1][1][0] = 0 * intensity / 100;
                rgb[1][2][0] = 0 * intensity / 100; 
                
                rgb[2][0][0] = 0 * intensity / 100;
                rgb[2][1][0] = 0 * intensity / 100;
                rgb[2][2][0] = 0 * intensity / 100; 
                
                rgb[3][0][0] = 0 * intensity / 100;
                rgb[3][1][0] = 0 * intensity / 100;
                rgb[3][2][0] = 0 * intensity / 100; 
                
                rgb[4][0][0] = 0 * intensity / 100;
                rgb[4][1][0] = 0 * intensity / 100;
                rgb[4][2][0] = 0 * intensity / 100; 
                
                rgb[5][0][0] = 0 * intensity / 100;
                rgb[5][1][0] = 0 * intensity / 100;
                rgb[5][2][0] = 0 * intensity / 100; 
                
                rgb[6][0][0] = 0 * intensity / 100;
                rgb[6][1][0] = 0 * intensity / 100;
                rgb[6][2][0] = 0 * intensity / 100; 
                
                rgb[7][0][0] = 0 * intensity / 100;
                rgb[7][1][0] = 0 * intensity / 100;
                rgb[7][2][0] = 0 * intensity / 100; 
                
                rgb[8][0][0] = 0 * intensity / 100;
                rgb[8][1][0] = 0 * intensity / 100;
                rgb[8][2][0] = 0 * intensity / 100; 
                
                rgb[9][0][0] = 0 * intensity / 100;
                rgb[9][1][0] = 0 * intensity / 100;
                rgb[9][2][0] = 0 * intensity / 100; 
                
                rgb[10][0][0] = 0 * intensity / 100;
                rgb[10][1][0] = 0 * intensity / 100;
                rgb[10][2][0] = 0 * intensity / 100; 
                
                rgb[11][0][0] = 0 * intensity / 100;
                rgb[11][1][0] = 0 * intensity / 100;
                rgb[11][2][0] = 0 * intensity / 100; 
                
                rgb[12][0][0] = 0 * intensity / 100;
                rgb[12][1][0] = 0 * intensity / 100;
                rgb[12][2][0] = 0 * intensity / 100; 
                
                rgb[13][0][0] = 0 * intensity / 100;
                rgb[13][1][0] = 0 * intensity / 100;
                rgb[13][2][0] = 0 * intensity / 100; 
                
                rgb[14][0][0] = 0 * intensity / 100;
                rgb[14][1][0] = 0 * intensity / 100;
                rgb[14][2][0] = 0 * intensity / 100; 
                
                rgb[15][0][0] = 0 * intensity / 100;
                rgb[15][1][0] = 0 * intensity / 100;
                rgb[15][2][0] = 0 * intensity / 100; 
                
                rgb[16][0][0] = 0 * intensity / 100;
                rgb[16][1][0] = 0 * intensity / 100;
                rgb[16][2][0] = 0 * intensity / 100; 
                
                rgb[17][0][0] = 215 * intensity / 100;
                rgb[17][1][0] = 80 * intensity / 100;
                rgb[17][2][0] = 156 * intensity / 100; 
                
                rgb[18][0][0] = 0 * intensity / 100;
                rgb[18][1][0] = 0 * intensity / 100;
                rgb[18][2][0] = 0 * intensity / 100; 
                
                rgb[19][0][0] = 215 * intensity / 100;
                rgb[19][1][0] = 80 * intensity / 100;
                rgb[19][2][0] = 156 * intensity / 100; 
                
                rgb[20][0][0] = 215 * intensity / 100;
                rgb[20][1][0] = 80 * intensity / 100;
                rgb[20][2][0] = 156 * intensity / 100; 
                
                rgb[21][0][0] = 215 * intensity / 100;
                rgb[21][1][0] = 80 * intensity / 100;
                rgb[21][2][0] = 156 * intensity / 100; 
                
                rgb[22][0][0] = 0 * intensity / 100;
                rgb[22][1][0] = 0 * intensity / 100;
                rgb[22][2][0] = 0 * intensity / 100; 
                
                rgb[23][0][0] = 0 * intensity / 100;
                rgb[23][1][0] = 0 * intensity / 100;
                rgb[23][2][0] = 0 * intensity / 100; 
                
                rgb[24][0][0] = 0 * intensity / 100;
                rgb[24][1][0] = 0 * intensity / 100;
                rgb[24][2][0] = 0 * intensity / 100; 
                
                rgb[25][0][0] = 0 * intensity / 100;
                rgb[25][1][0] = 0 * intensity / 100;
                rgb[25][2][0] = 0 * intensity / 100; 
                
                rgb[26][0][0] = 215 * intensity / 100;
                rgb[26][1][0] = 80 * intensity / 100;
                rgb[26][2][0] = 156 * intensity / 100; 
                
                rgb[27][0][0] = 215 * intensity / 100;
                rgb[27][1][0] = 80 * intensity / 100;
                rgb[27][2][0] = 156 * intensity / 100; 
                
                rgb[28][0][0] = 215 * intensity / 100;
                rgb[28][1][0] = 80 * intensity / 100;
                rgb[28][2][0] = 156 * intensity / 100; 
                
                rgb[29][0][0] = 0 * intensity / 100;
                rgb[29][1][0] = 0 * intensity / 100;
                rgb[29][2][0] = 0 * intensity / 100; 
                
                rgb[30][0][0] = 215 * intensity / 100;
                rgb[30][1][0] = 80 * intensity / 100;
                rgb[30][2][0] = 156 * intensity / 100; 
                
                rgb[31][0][0] = 0 * intensity / 100;
                rgb[31][1][0] = 0 * intensity / 100;
                rgb[31][2][0] = 0 * intensity / 100; 
                
                rgb[32][0][0] = 0 * intensity / 100;
                rgb[32][1][0] = 0 * intensity / 100;
                rgb[32][2][0] = 0 * intensity / 100; 
                
                rgb[33][0][0] = 0 * intensity / 100;
                rgb[33][1][0] = 0 * intensity / 100;
                rgb[33][2][0] = 0 * intensity / 100; 
                
                rgb[34][0][0] = 215 * intensity / 100;
                rgb[34][1][0] = 80 * intensity / 100;
                rgb[34][2][0] = 156 * intensity / 100; 
                
                rgb[35][0][0] = 215 * intensity / 100;
                rgb[35][1][0] = 80 * intensity / 100;
                rgb[35][2][0] = 156 * intensity / 100; 
                
                rgb[36][0][0] = 215 * intensity / 100;
                rgb[36][1][0] = 80 * intensity / 100;
                rgb[36][2][0] = 156 * intensity / 100; 
                
                rgb[37][0][0] = 215 * intensity / 100;
                rgb[37][1][0] = 80 * intensity / 100;
                rgb[37][2][0] = 156 * intensity / 100; 
                
                rgb[38][0][0] = 0 * intensity / 100;
                rgb[38][1][0] = 0 * intensity / 100;
                rgb[38][2][0] = 0 * intensity / 100; 
                
                rgb[39][0][0] = 0 * intensity / 100;
                rgb[39][1][0] = 0 * intensity / 100;
                rgb[39][2][0] = 0 * intensity / 100; 
                
                rgb[40][0][0] = 0 * intensity / 100;
                rgb[40][1][0] = 0 * intensity / 100;
                rgb[40][2][0] = 0 * intensity / 100; 
                
                rgb[41][0][0] = 0 * intensity / 100;
                rgb[41][1][0] = 0 * intensity / 100;
                rgb[41][2][0] = 0 * intensity / 100; 
                
                rgb[42][0][0] = 215 * intensity / 100;
                rgb[42][1][0] = 80 * intensity / 100;
                rgb[42][2][0] = 156 * intensity / 100; 
                
                rgb[43][0][0] = 215 * intensity / 100;
                rgb[43][1][0] = 80 * intensity / 100;
                rgb[43][2][0] = 156 * intensity / 100; 
                
                rgb[44][0][0] = 215 * intensity / 100;
                rgb[44][1][0] = 80 * intensity / 100;
                rgb[44][2][0] = 156 * intensity / 100; 
                
                rgb[45][0][0] = 215 * intensity / 100;
                rgb[45][1][0] = 80 * intensity / 100;
                rgb[45][2][0] = 156 * intensity / 100; 
                
                rgb[46][0][0] = 0 * intensity / 100;
                rgb[46][1][0] = 0 * intensity / 100;
                rgb[46][2][0] = 0 * intensity / 100; 
                
                rgb[47][0][0] = 0 * intensity / 100;
                rgb[47][1][0] = 0 * intensity / 100;
                rgb[47][2][0] = 0 * intensity / 100; 
                
                rgb[48][0][0] = 0 * intensity / 100;
                rgb[48][1][0] = 0 * intensity / 100;
                rgb[48][2][0] = 0 * intensity / 100; 
                
                rgb[49][0][0] = 0 * intensity / 100;
                rgb[49][1][0] = 0 * intensity / 100;
                rgb[49][2][0] = 0 * intensity / 100; 
                
                rgb[50][0][0] = 0 * intensity / 100;
                rgb[50][1][0] = 0 * intensity / 100;
                rgb[50][2][0] = 0 * intensity / 100; 
                
                rgb[51][0][0] = 215 * intensity / 100;
                rgb[51][1][0] = 80 * intensity / 100;
                rgb[51][2][0] = 156 * intensity / 100; 
                
                rgb[52][0][0] = 215 * intensity / 100;
                rgb[52][1][0] = 80 * intensity / 100;
                rgb[52][2][0] = 156 * intensity / 100; 
                
                rgb[53][0][0] = 215 * intensity / 100;
                rgb[53][1][0] = 80 * intensity / 100;
                rgb[53][2][0] = 156 * intensity / 100; 
                
                rgb[54][0][0] = 0 * intensity / 100;
                rgb[54][1][0] = 0 * intensity / 100;
                rgb[54][2][0] = 0 * intensity / 100; 
                
                rgb[55][0][0] = 0 * intensity / 100;
                rgb[55][1][0] = 0 * intensity / 100;
                rgb[55][2][0] = 0 * intensity / 100; 
                
                rgb[56][0][0] = 0 * intensity / 100;
                rgb[56][1][0] = 0 * intensity / 100;
                rgb[56][2][0] = 0 * intensity / 100; 
                
                rgb[57][0][0] = 0 * intensity / 100;
                rgb[57][1][0] = 0 * intensity / 100;
                rgb[57][2][0] = 0 * intensity / 100; 
                
                rgb[58][0][0] = 215 * intensity / 100;
                rgb[58][1][0] = 80 * intensity / 100;
                rgb[58][2][0] = 156 * intensity / 100; 
                
                rgb[59][0][0] = 215 * intensity / 100;
                rgb[59][1][0] = 80 * intensity / 100;
                rgb[59][2][0] = 156 * intensity / 100; 
                
                rgb[60][0][0] = 215 * intensity / 100;
                rgb[60][1][0] = 80 * intensity / 100;
                rgb[60][2][0] = 156 * intensity / 100; 
                
                rgb[61][0][0] = 0 * intensity / 100;
                rgb[61][1][0] = 0 * intensity / 100;
                rgb[61][2][0] = 0 * intensity / 100; 
                
                rgb[62][0][0] = 0 * intensity / 100;
                rgb[62][1][0] = 0 * intensity / 100;
                rgb[62][2][0] = 0 * intensity / 100; 
                
                rgb[63][0][0] = 0 * intensity / 100;
                rgb[63][1][0] = 0 * intensity / 100;
                rgb[63][2][0] = 0 * intensity / 100; 
                
                rgb[0][0][0] = 0 * intensity / 100;
                rgb[0][1][0] = 0 * intensity / 100;
                rgb[0][2][0] = 0 * intensity / 100; 
                
                rgb[1][0][0] = 0 * intensity / 100;
                rgb[1][1][0] = 0 * intensity / 100;
                rgb[1][2][0] = 0 * intensity / 100; 
                
                rgb[2][0][0] = 0 * intensity / 100;
                rgb[2][1][0] = 0 * intensity / 100;
                rgb[2][2][0] = 0 * intensity / 100; 
                
                rgb[3][0][0] = 215 * intensity / 100;
                rgb[3][1][0] = 80 * intensity / 100;
                rgb[3][2][0] = 156 * intensity / 100; 
                
                rgb[4][0][0] = 215 * intensity / 100;
                rgb[4][1][0] = 80 * intensity / 100;
                rgb[4][2][0] = 156 * intensity / 100; 
                
                rgb[5][0][0] = 215 * intensity / 100;
                rgb[5][1][0] = 80 * intensity / 100;
                rgb[5][2][0] = 156 * intensity / 100; 
                
                rgb[6][0][0] = 0 * intensity / 100;
                rgb[6][1][0] = 0 * intensity / 100;
                rgb[6][2][0] = 0 * intensity / 100; 
                
                rgb[7][0][0] = 0 * intensity / 100;
                rgb[7][1][0] = 0 * intensity / 100;
                rgb[7][2][0] = 0 * intensity / 100; 
                
                rgb[8][0][0] = 0 * intensity / 100;
                rgb[8][1][0] = 0 * intensity / 100;
                rgb[8][2][0] = 0 * intensity / 100; 
                
                rgb[9][0][0] = 0 * intensity / 100;
                rgb[9][1][0] = 0 * intensity / 100;
                rgb[9][2][0] = 0 * intensity / 100; 
                
                rgb[10][0][0] = 215 * intensity / 100;
                rgb[10][1][0] = 80 * intensity / 100;
                rgb[10][2][0] = 156 * intensity / 100; 
                
                rgb[11][0][0] = 215 * intensity / 100;
                rgb[11][1][0] = 80 * intensity / 100;
                rgb[11][2][0] = 156 * intensity / 100; 
                
                rgb[12][0][0] = 215 * intensity / 100;
                rgb[12][1][0] = 80 * intensity / 100;
                rgb[12][2][0] = 156 * intensity / 100; 
                
                rgb[13][0][0] = 0 * intensity / 100;
                rgb[13][1][0] = 0 * intensity / 100;
                rgb[13][2][0] = 0 * intensity / 100; 
                
                rgb[14][0][0] = 0 * intensity / 100;
                rgb[14][1][0] = 0 * intensity / 100;
                rgb[14][2][0] = 0 * intensity / 100; 
                
                rgb[15][0][0] = 0 * intensity / 100;
                rgb[15][1][0] = 0 * intensity / 100;
                rgb[15][2][0] = 0 * intensity / 100; 
                
                rgb[16][0][0] = 0 * intensity / 100;
                rgb[16][1][0] = 0 * intensity / 100;
                rgb[16][2][0] = 0 * intensity / 100; 
                
                rgb[17][0][0] = 0 * intensity / 100;
                rgb[17][1][0] = 0 * intensity / 100;
                rgb[17][2][0] = 0 * intensity / 100; 
                
                rgb[18][0][0] = 0 * intensity / 100;
                rgb[18][1][0] = 0 * intensity / 100;
                rgb[18][2][0] = 0 * intensity / 100; 
                
                rgb[19][0][0] = 215 * intensity / 100;
                rgb[19][1][0] = 80 * intensity / 100;
                rgb[19][2][0] = 156 * intensity / 100; 
                
                rgb[20][0][0] = 215 * intensity / 100;
                rgb[20][1][0] = 80 * intensity / 100;
                rgb[20][2][0] = 156 * intensity / 100; 
                
                rgb[21][0][0] = 215 * intensity / 100;
                rgb[21][1][0] = 80 * intensity / 100;
                rgb[21][2][0] = 156 * intensity / 100; 
                
                rgb[22][0][0] = 0 * intensity / 100;
                rgb[22][1][0] = 0 * intensity / 100;
                rgb[22][2][0] = 0 * intensity / 100; 
                
                rgb[23][0][0] = 0 * intensity / 100;
                rgb[23][1][0] = 0 * intensity / 100;
                rgb[23][2][0] = 0 * intensity / 100; 
                
                rgb[24][0][0] = 0 * intensity / 100;
                rgb[24][1][0] = 0 * intensity / 100;
                rgb[24][2][0] = 0 * intensity / 100; 
                
                rgb[25][0][0] = 0 * intensity / 100;
                rgb[25][1][0] = 0 * intensity / 100;
                rgb[25][2][0] = 0 * intensity / 100; 
                
                rgb[26][0][0] = 215 * intensity / 100;
                rgb[26][1][0] = 80 * intensity / 100;
                rgb[26][2][0] = 156 * intensity / 100; 
                
                rgb[27][0][0] = 215 * intensity / 100;
                rgb[27][1][0] = 80 * intensity / 100;
                rgb[27][2][0] = 156 * intensity / 100; 
                
                rgb[28][0][0] = 215 * intensity / 100;
                rgb[28][1][0] = 80 * intensity / 100;
                rgb[28][2][0] = 156 * intensity / 100; 
                
                rgb[29][0][0] = 0 * intensity / 100;
                rgb[29][1][0] = 0 * intensity / 100;
                rgb[29][2][0] = 0 * intensity / 100; 
                
                rgb[30][0][0] = 0 * intensity / 100;
                rgb[30][1][0] = 0 * intensity / 100;
                rgb[30][2][0] = 0 * intensity / 100; 
                
                rgb[31][0][0] = 0 * intensity / 100;
                rgb[31][1][0] = 0 * intensity / 100;
                rgb[31][2][0] = 0 * intensity / 100; 
                
                rgb[32][0][0] = 0 * intensity / 100;
                rgb[32][1][0] = 0 * intensity / 100;
                rgb[32][2][0] = 0 * intensity / 100; 
                
                rgb[33][0][0] = 0 * intensity / 100;
                rgb[33][1][0] = 0 * intensity / 100;
                rgb[33][2][0] = 0 * intensity / 100; 
                
                rgb[34][0][0] = 0 * intensity / 100;
                rgb[34][1][0] = 0 * intensity / 100;
                rgb[34][2][0] = 0 * intensity / 100; 
                
                rgb[35][0][0] = 215 * intensity / 100;
                rgb[35][1][0] = 80 * intensity / 100;
                rgb[35][2][0] = 156 * intensity / 100; 
                
                rgb[36][0][0] = 215 * intensity / 100;
                rgb[36][1][0] = 80 * intensity / 100;
                rgb[36][2][0] = 156 * intensity / 100; 
                
                rgb[37][0][0] = 215 * intensity / 100;
                rgb[37][1][0] = 80 * intensity / 100;
                rgb[37][2][0] = 156 * intensity / 100; 
                
                rgb[38][0][0] = 0 * intensity / 100;
                rgb[38][1][0] = 0 * intensity / 100;
                rgb[38][2][0] = 0 * intensity / 100; 
                
                rgb[39][0][0] = 0 * intensity / 100;
                rgb[39][1][0] = 0 * intensity / 100;
                rgb[39][2][0] = 0 * intensity / 100; 
                
                rgb[40][0][0] = 0 * intensity / 100;
                rgb[40][1][0] = 0 * intensity / 100;
                rgb[40][2][0] = 0 * intensity / 100; 
                
                rgb[41][0][0] = 0 * intensity / 100;
                rgb[41][1][0] = 0 * intensity / 100;
                rgb[41][2][0] = 0 * intensity / 100; 
                
                rgb[42][0][0] = 215 * intensity / 100;
                rgb[42][1][0] = 80 * intensity / 100;
                rgb[42][2][0] = 156 * intensity / 100; 
                
                rgb[43][0][0] = 215 * intensity / 100;
                rgb[43][1][0] = 80 * intensity / 100;
                rgb[43][2][0] = 156 * intensity / 100; 
                
                rgb[44][0][0] = 215 * intensity / 100;
                rgb[44][1][0] = 80 * intensity / 100;
                rgb[44][2][0] = 156 * intensity / 100; 
                
                rgb[45][0][0] = 0 * intensity / 100;
                rgb[45][1][0] = 0 * intensity / 100;
                rgb[45][2][0] = 0 * intensity / 100; 
                
                rgb[46][0][0] = 0 * intensity / 100;
                rgb[46][1][0] = 0 * intensity / 100;
                rgb[46][2][0] = 0 * intensity / 100; 
                
                rgb[47][0][0] = 0 * intensity / 100;
                rgb[47][1][0] = 0 * intensity / 100;
                rgb[47][2][0] = 0 * intensity / 100; 
                
                rgb[48][0][0] = 0 * intensity / 100;
                rgb[48][1][0] = 0 * intensity / 100;
                rgb[48][2][0] = 0 * intensity / 100; 
                
                rgb[49][0][0] = 0 * intensity / 100;
                rgb[49][1][0] = 0 * intensity / 100;
                rgb[49][2][0] = 0 * intensity / 100; 
                
                rgb[50][0][0] = 0 * intensity / 100;
                rgb[50][1][0] = 0 * intensity / 100;
                rgb[50][2][0] = 0 * intensity / 100; 
                
                rgb[51][0][0] = 0 * intensity / 100;
                rgb[51][1][0] = 0 * intensity / 100;
                rgb[51][2][0] = 0 * intensity / 100; 
                
                rgb[52][0][0] = 0 * intensity / 100;
                rgb[52][1][0] = 0 * intensity / 100;
                rgb[52][2][0] = 0 * intensity / 100; 
                
                rgb[53][0][0] = 0 * intensity / 100;
                rgb[53][1][0] = 0 * intensity / 100;
                rgb[53][2][0] = 0 * intensity / 100; 
                
                rgb[54][0][0] = 0 * intensity / 100;
                rgb[54][1][0] = 0 * intensity / 100;
                rgb[54][2][0] = 0 * intensity / 100; 
                
                rgb[55][0][0] = 0 * intensity / 100;
                rgb[55][1][0] = 0 * intensity / 100;
                rgb[55][2][0] = 0 * intensity / 100; 
                
                rgb[56][0][0] = 0 * intensity / 100;
                rgb[56][1][0] = 0 * intensity / 100;
                rgb[56][2][0] = 0 * intensity / 100; 
                
                rgb[57][0][0] = 0 * intensity / 100;
                rgb[57][1][0] = 0 * intensity / 100;
                rgb[57][2][0] = 0 * intensity / 100; 
                
                rgb[58][0][0] = 0 * intensity / 100;
                rgb[58][1][0] = 0 * intensity / 100;
                rgb[58][2][0] = 0 * intensity / 100; 
                
                rgb[59][0][0] = 0 * intensity / 100;
                rgb[59][1][0] = 0 * intensity / 100;
                rgb[59][2][0] = 0 * intensity / 100; 
                
                rgb[60][0][0] = 0 * intensity / 100;
                rgb[60][1][0] = 0 * intensity / 100;
                rgb[60][2][0] = 0 * intensity / 100; 
                
                rgb[61][0][0] = 0 * intensity / 100;
                rgb[61][1][0] = 0 * intensity / 100;
                rgb[61][2][0] = 0 * intensity / 100; 
                
                rgb[62][0][0] = 0 * intensity / 100;
                rgb[62][1][0] = 0 * intensity / 100;
                rgb[62][2][0] = 0 * intensity / 100; 
                
                rgb[63][0][0] = 0 * intensity / 100;
                rgb[63][1][0] = 0 * intensity / 100;
                rgb[63][2][0] = 0 * intensity / 100; 
                

        frameTime[0] = 7500;

    
                rgb[0][0][1] = 0 * intensity / 100;
                rgb[0][1][1] = 0 * intensity / 100;
                rgb[0][2][1] = 0 * intensity / 100; 
                
                rgb[1][0][1] = 0 * intensity / 100;
                rgb[1][1][1] = 0 * intensity / 100;
                rgb[1][2][1] = 0 * intensity / 100; 
                
                rgb[2][0][1] = 0 * intensity / 100;
                rgb[2][1][1] = 0 * intensity / 100;
                rgb[2][2][1] = 0 * intensity / 100; 
                
                rgb[3][0][1] = 0 * intensity / 100;
                rgb[3][1][1] = 0 * intensity / 100;
                rgb[3][2][1] = 0 * intensity / 100; 
                
                rgb[4][0][1] = 0 * intensity / 100;
                rgb[4][1][1] = 0 * intensity / 100;
                rgb[4][2][1] = 0 * intensity / 100; 
                
                rgb[5][0][1] = 0 * intensity / 100;
                rgb[5][1][1] = 0 * intensity / 100;
                rgb[5][2][1] = 0 * intensity / 100; 
                
                rgb[6][0][1] = 0 * intensity / 100;
                rgb[6][1][1] = 0 * intensity / 100;
                rgb[6][2][1] = 0 * intensity / 100; 
                
                rgb[7][0][1] = 0 * intensity / 100;
                rgb[7][1][1] = 0 * intensity / 100;
                rgb[7][2][1] = 0 * intensity / 100; 
                
                rgb[8][0][1] = 0 * intensity / 100;
                rgb[8][1][1] = 0 * intensity / 100;
                rgb[8][2][1] = 0 * intensity / 100; 
                
                rgb[9][0][1] = 0 * intensity / 100;
                rgb[9][1][1] = 0 * intensity / 100;
                rgb[9][2][1] = 0 * intensity / 100; 
                
                rgb[10][0][1] = 0 * intensity / 100;
                rgb[10][1][1] = 0 * intensity / 100;
                rgb[10][2][1] = 0 * intensity / 100; 
                
                rgb[11][0][1] = 0 * intensity / 100;
                rgb[11][1][1] = 0 * intensity / 100;
                rgb[11][2][1] = 0 * intensity / 100; 
                
                rgb[12][0][1] = 0 * intensity / 100;
                rgb[12][1][1] = 0 * intensity / 100;
                rgb[12][2][1] = 0 * intensity / 100; 
                
                rgb[13][0][1] = 0 * intensity / 100;
                rgb[13][1][1] = 0 * intensity / 100;
                rgb[13][2][1] = 0 * intensity / 100; 
                
                rgb[14][0][1] = 0 * intensity / 100;
                rgb[14][1][1] = 0 * intensity / 100;
                rgb[14][2][1] = 0 * intensity / 100; 
                
                rgb[15][0][1] = 0 * intensity / 100;
                rgb[15][1][1] = 0 * intensity / 100;
                rgb[15][2][1] = 0 * intensity / 100; 
                
                rgb[16][0][1] = 0 * intensity / 100;
                rgb[16][1][1] = 0 * intensity / 100;
                rgb[16][2][1] = 0 * intensity / 100; 
                
                rgb[17][0][1] = 215 * intensity / 100;
                rgb[17][1][1] = 80 * intensity / 100;
                rgb[17][2][1] = 156 * intensity / 100; 
                
                rgb[18][0][1] = 0 * intensity / 100;
                rgb[18][1][1] = 0 * intensity / 100;
                rgb[18][2][1] = 0 * intensity / 100; 
                
                rgb[19][0][1] = 0 * intensity / 100;
                rgb[19][1][1] = 0 * intensity / 100;
                rgb[19][2][1] = 0 * intensity / 100; 
                
                rgb[20][0][1] = 0 * intensity / 100;
                rgb[20][1][1] = 0 * intensity / 100;
                rgb[20][2][1] = 0 * intensity / 100; 
                
                rgb[21][0][1] = 0 * intensity / 100;
                rgb[21][1][1] = 0 * intensity / 100;
                rgb[21][2][1] = 0 * intensity / 100; 
                
                rgb[22][0][1] = 0 * intensity / 100;
                rgb[22][1][1] = 0 * intensity / 100;
                rgb[22][2][1] = 0 * intensity / 100; 
                
                rgb[23][0][1] = 0 * intensity / 100;
                rgb[23][1][1] = 0 * intensity / 100;
                rgb[23][2][1] = 0 * intensity / 100; 
                
                rgb[24][0][1] = 0 * intensity / 100;
                rgb[24][1][1] = 0 * intensity / 100;
                rgb[24][2][1] = 0 * intensity / 100; 
                
                rgb[25][0][1] = 0 * intensity / 100;
                rgb[25][1][1] = 0 * intensity / 100;
                rgb[25][2][1] = 0 * intensity / 100; 
                
                rgb[26][0][1] = 0 * intensity / 100;
                rgb[26][1][1] = 0 * intensity / 100;
                rgb[26][2][1] = 0 * intensity / 100; 
                
                rgb[27][0][1] = 0 * intensity / 100;
                rgb[27][1][1] = 0 * intensity / 100;
                rgb[27][2][1] = 0 * intensity / 100; 
                
                rgb[28][0][1] = 0 * intensity / 100;
                rgb[28][1][1] = 0 * intensity / 100;
                rgb[28][2][1] = 0 * intensity / 100; 
                
                rgb[29][0][1] = 0 * intensity / 100;
                rgb[29][1][1] = 0 * intensity / 100;
                rgb[29][2][1] = 0 * intensity / 100; 
                
                rgb[30][0][1] = 215 * intensity / 100;
                rgb[30][1][1] = 80 * intensity / 100;
                rgb[30][2][1] = 156 * intensity / 100; 
                
                rgb[31][0][1] = 0 * intensity / 100;
                rgb[31][1][1] = 0 * intensity / 100;
                rgb[31][2][1] = 0 * intensity / 100; 
                
                rgb[32][0][1] = 0 * intensity / 100;
                rgb[32][1][1] = 0 * intensity / 100;
                rgb[32][2][1] = 0 * intensity / 100; 
                
                rgb[33][0][1] = 0 * intensity / 100;
                rgb[33][1][1] = 0 * intensity / 100;
                rgb[33][2][1] = 0 * intensity / 100; 
                
                rgb[34][0][1] = 215 * intensity / 100;
                rgb[34][1][1] = 80 * intensity / 100;
                rgb[34][2][1] = 156 * intensity / 100; 
                
                rgb[35][0][1] = 215 * intensity / 100;
                rgb[35][1][1] = 80 * intensity / 100;
                rgb[35][2][1] = 156 * intensity / 100; 
                
                rgb[36][0][1] = 215 * intensity / 100;
                rgb[36][1][1] = 80 * intensity / 100;
                rgb[36][2][1] = 156 * intensity / 100; 
                
                rgb[37][0][1] = 215 * intensity / 100;
                rgb[37][1][1] = 80 * intensity / 100;
                rgb[37][2][1] = 156 * intensity / 100; 
                
                rgb[38][0][1] = 0 * intensity / 100;
                rgb[38][1][1] = 0 * intensity / 100;
                rgb[38][2][1] = 0 * intensity / 100; 
                
                rgb[39][0][1] = 0 * intensity / 100;
                rgb[39][1][1] = 0 * intensity / 100;
                rgb[39][2][1] = 0 * intensity / 100; 
                
                rgb[40][0][1] = 0 * intensity / 100;
                rgb[40][1][1] = 0 * intensity / 100;
                rgb[40][2][1] = 0 * intensity / 100; 
                
                rgb[41][0][1] = 0 * intensity / 100;
                rgb[41][1][1] = 0 * intensity / 100;
                rgb[41][2][1] = 0 * intensity / 100; 
                
                rgb[42][0][1] = 215 * intensity / 100;
                rgb[42][1][1] = 80 * intensity / 100;
                rgb[42][2][1] = 156 * intensity / 100; 
                
                rgb[43][0][1] = 215 * intensity / 100;
                rgb[43][1][1] = 80 * intensity / 100;
                rgb[43][2][1] = 156 * intensity / 100; 
                
                rgb[44][0][1] = 215 * intensity / 100;
                rgb[44][1][1] = 80 * intensity / 100;
                rgb[44][2][1] = 156 * intensity / 100; 
                
                rgb[45][0][1] = 215 * intensity / 100;
                rgb[45][1][1] = 80 * intensity / 100;
                rgb[45][2][1] = 156 * intensity / 100; 
                
                rgb[46][0][1] = 0 * intensity / 100;
                rgb[46][1][1] = 0 * intensity / 100;
                rgb[46][2][1] = 0 * intensity / 100; 
                
                rgb[47][0][1] = 0 * intensity / 100;
                rgb[47][1][1] = 0 * intensity / 100;
                rgb[47][2][1] = 0 * intensity / 100; 
                
                rgb[48][0][1] = 0 * intensity / 100;
                rgb[48][1][1] = 0 * intensity / 100;
                rgb[48][2][1] = 0 * intensity / 100; 
                
                rgb[49][0][1] = 0 * intensity / 100;
                rgb[49][1][1] = 0 * intensity / 100;
                rgb[49][2][1] = 0 * intensity / 100; 
                
                rgb[50][0][1] = 0 * intensity / 100;
                rgb[50][1][1] = 0 * intensity / 100;
                rgb[50][2][1] = 0 * intensity / 100; 
                
                rgb[51][0][1] = 215 * intensity / 100;
                rgb[51][1][1] = 80 * intensity / 100;
                rgb[51][2][1] = 156 * intensity / 100; 
                
                rgb[52][0][1] = 215 * intensity / 100;
                rgb[52][1][1] = 80 * intensity / 100;
                rgb[52][2][1] = 156 * intensity / 100; 
                
                rgb[53][0][1] = 215 * intensity / 100;
                rgb[53][1][1] = 80 * intensity / 100;
                rgb[53][2][1] = 156 * intensity / 100; 
                
                rgb[54][0][1] = 0 * intensity / 100;
                rgb[54][1][1] = 0 * intensity / 100;
                rgb[54][2][1] = 0 * intensity / 100; 
                
                rgb[55][0][1] = 0 * intensity / 100;
                rgb[55][1][1] = 0 * intensity / 100;
                rgb[55][2][1] = 0 * intensity / 100; 
                
                rgb[56][0][1] = 0 * intensity / 100;
                rgb[56][1][1] = 0 * intensity / 100;
                rgb[56][2][1] = 0 * intensity / 100; 
                
                rgb[57][0][1] = 0 * intensity / 100;
                rgb[57][1][1] = 0 * intensity / 100;
                rgb[57][2][1] = 0 * intensity / 100; 
                
                rgb[58][0][1] = 215 * intensity / 100;
                rgb[58][1][1] = 80 * intensity / 100;
                rgb[58][2][1] = 156 * intensity / 100; 
                
                rgb[59][0][1] = 215 * intensity / 100;
                rgb[59][1][1] = 80 * intensity / 100;
                rgb[59][2][1] = 156 * intensity / 100; 
                
                rgb[60][0][1] = 215 * intensity / 100;
                rgb[60][1][1] = 80 * intensity / 100;
                rgb[60][2][1] = 156 * intensity / 100; 
                
                rgb[61][0][1] = 0 * intensity / 100;
                rgb[61][1][1] = 0 * intensity / 100;
                rgb[61][2][1] = 0 * intensity / 100; 
                
                rgb[62][0][1] = 0 * intensity / 100;
                rgb[62][1][1] = 0 * intensity / 100;
                rgb[62][2][1] = 0 * intensity / 100; 
                
                rgb[63][0][1] = 0 * intensity / 100;
                rgb[63][1][1] = 0 * intensity / 100;
                rgb[63][2][1] = 0 * intensity / 100; 
                
                rgb[0][0][1] = 0 * intensity / 100;
                rgb[0][1][1] = 0 * intensity / 100;
                rgb[0][2][1] = 0 * intensity / 100; 
                
                rgb[1][0][1] = 0 * intensity / 100;
                rgb[1][1][1] = 0 * intensity / 100;
                rgb[1][2][1] = 0 * intensity / 100; 
                
                rgb[2][0][1] = 0 * intensity / 100;
                rgb[2][1][1] = 0 * intensity / 100;
                rgb[2][2][1] = 0 * intensity / 100; 
                
                rgb[3][0][1] = 215 * intensity / 100;
                rgb[3][1][1] = 80 * intensity / 100;
                rgb[3][2][1] = 156 * intensity / 100; 
                
                rgb[4][0][1] = 215 * intensity / 100;
                rgb[4][1][1] = 80 * intensity / 100;
                rgb[4][2][1] = 156 * intensity / 100; 
                
                rgb[5][0][1] = 215 * intensity / 100;
                rgb[5][1][1] = 80 * intensity / 100;
                rgb[5][2][1] = 156 * intensity / 100; 
                
                rgb[6][0][1] = 0 * intensity / 100;
                rgb[6][1][1] = 0 * intensity / 100;
                rgb[6][2][1] = 0 * intensity / 100; 
                
                rgb[7][0][1] = 0 * intensity / 100;
                rgb[7][1][1] = 0 * intensity / 100;
                rgb[7][2][1] = 0 * intensity / 100; 
                
                rgb[8][0][1] = 0 * intensity / 100;
                rgb[8][1][1] = 0 * intensity / 100;
                rgb[8][2][1] = 0 * intensity / 100; 
                
                rgb[9][0][1] = 0 * intensity / 100;
                rgb[9][1][1] = 0 * intensity / 100;
                rgb[9][2][1] = 0 * intensity / 100; 
                
                rgb[10][0][1] = 215 * intensity / 100;
                rgb[10][1][1] = 80 * intensity / 100;
                rgb[10][2][1] = 156 * intensity / 100; 
                
                rgb[11][0][1] = 215 * intensity / 100;
                rgb[11][1][1] = 80 * intensity / 100;
                rgb[11][2][1] = 156 * intensity / 100; 
                
                rgb[12][0][1] = 215 * intensity / 100;
                rgb[12][1][1] = 80 * intensity / 100;
                rgb[12][2][1] = 156 * intensity / 100; 
                
                rgb[13][0][1] = 0 * intensity / 100;
                rgb[13][1][1] = 0 * intensity / 100;
                rgb[13][2][1] = 0 * intensity / 100; 
                
                rgb[14][0][1] = 0 * intensity / 100;
                rgb[14][1][1] = 0 * intensity / 100;
                rgb[14][2][1] = 0 * intensity / 100; 
                
                rgb[15][0][1] = 0 * intensity / 100;
                rgb[15][1][1] = 0 * intensity / 100;
                rgb[15][2][1] = 0 * intensity / 100; 
                
                rgb[16][0][1] = 0 * intensity / 100;
                rgb[16][1][1] = 0 * intensity / 100;
                rgb[16][2][1] = 0 * intensity / 100; 
                
                rgb[17][0][1] = 0 * intensity / 100;
                rgb[17][1][1] = 0 * intensity / 100;
                rgb[17][2][1] = 0 * intensity / 100; 
                
                rgb[18][0][1] = 0 * intensity / 100;
                rgb[18][1][1] = 0 * intensity / 100;
                rgb[18][2][1] = 0 * intensity / 100; 
                
                rgb[19][0][1] = 215 * intensity / 100;
                rgb[19][1][1] = 80 * intensity / 100;
                rgb[19][2][1] = 156 * intensity / 100; 
                
                rgb[20][0][1] = 215 * intensity / 100;
                rgb[20][1][1] = 80 * intensity / 100;
                rgb[20][2][1] = 156 * intensity / 100; 
                
                rgb[21][0][1] = 215 * intensity / 100;
                rgb[21][1][1] = 80 * intensity / 100;
                rgb[21][2][1] = 156 * intensity / 100; 
                
                rgb[22][0][1] = 0 * intensity / 100;
                rgb[22][1][1] = 0 * intensity / 100;
                rgb[22][2][1] = 0 * intensity / 100; 
                
                rgb[23][0][1] = 0 * intensity / 100;
                rgb[23][1][1] = 0 * intensity / 100;
                rgb[23][2][1] = 0 * intensity / 100; 
                
                rgb[24][0][1] = 0 * intensity / 100;
                rgb[24][1][1] = 0 * intensity / 100;
                rgb[24][2][1] = 0 * intensity / 100; 
                
                rgb[25][0][1] = 0 * intensity / 100;
                rgb[25][1][1] = 0 * intensity / 100;
                rgb[25][2][1] = 0 * intensity / 100; 
                
                rgb[26][0][1] = 215 * intensity / 100;
                rgb[26][1][1] = 80 * intensity / 100;
                rgb[26][2][1] = 156 * intensity / 100; 
                
                rgb[27][0][1] = 215 * intensity / 100;
                rgb[27][1][1] = 80 * intensity / 100;
                rgb[27][2][1] = 156 * intensity / 100; 
                
                rgb[28][0][1] = 215 * intensity / 100;
                rgb[28][1][1] = 80 * intensity / 100;
                rgb[28][2][1] = 156 * intensity / 100; 
                
                rgb[29][0][1] = 0 * intensity / 100;
                rgb[29][1][1] = 0 * intensity / 100;
                rgb[29][2][1] = 0 * intensity / 100; 
                
                rgb[30][0][1] = 0 * intensity / 100;
                rgb[30][1][1] = 0 * intensity / 100;
                rgb[30][2][1] = 0 * intensity / 100; 
                
                rgb[31][0][1] = 0 * intensity / 100;
                rgb[31][1][1] = 0 * intensity / 100;
                rgb[31][2][1] = 0 * intensity / 100; 
                
                rgb[32][0][1] = 0 * intensity / 100;
                rgb[32][1][1] = 0 * intensity / 100;
                rgb[32][2][1] = 0 * intensity / 100; 
                
                rgb[33][0][1] = 0 * intensity / 100;
                rgb[33][1][1] = 0 * intensity / 100;
                rgb[33][2][1] = 0 * intensity / 100; 
                
                rgb[34][0][1] = 0 * intensity / 100;
                rgb[34][1][1] = 0 * intensity / 100;
                rgb[34][2][1] = 0 * intensity / 100; 
                
                rgb[35][0][1] = 215 * intensity / 100;
                rgb[35][1][1] = 80 * intensity / 100;
                rgb[35][2][1] = 156 * intensity / 100; 
                
                rgb[36][0][1] = 215 * intensity / 100;
                rgb[36][1][1] = 80 * intensity / 100;
                rgb[36][2][1] = 156 * intensity / 100; 
                
                rgb[37][0][1] = 215 * intensity / 100;
                rgb[37][1][1] = 80 * intensity / 100;
                rgb[37][2][1] = 156 * intensity / 100; 
                
                rgb[38][0][1] = 0 * intensity / 100;
                rgb[38][1][1] = 0 * intensity / 100;
                rgb[38][2][1] = 0 * intensity / 100; 
                
                rgb[39][0][1] = 0 * intensity / 100;
                rgb[39][1][1] = 0 * intensity / 100;
                rgb[39][2][1] = 0 * intensity / 100; 
                
                rgb[40][0][1] = 0 * intensity / 100;
                rgb[40][1][1] = 0 * intensity / 100;
                rgb[40][2][1] = 0 * intensity / 100; 
                
                rgb[41][0][1] = 0 * intensity / 100;
                rgb[41][1][1] = 0 * intensity / 100;
                rgb[41][2][1] = 0 * intensity / 100; 
                
                rgb[42][0][1] = 215 * intensity / 100;
                rgb[42][1][1] = 80 * intensity / 100;
                rgb[42][2][1] = 156 * intensity / 100; 
                
                rgb[43][0][1] = 215 * intensity / 100;
                rgb[43][1][1] = 80 * intensity / 100;
                rgb[43][2][1] = 156 * intensity / 100; 
                
                rgb[44][0][1] = 215 * intensity / 100;
                rgb[44][1][1] = 80 * intensity / 100;
                rgb[44][2][1] = 156 * intensity / 100; 
                
                rgb[45][0][1] = 0 * intensity / 100;
                rgb[45][1][1] = 0 * intensity / 100;
                rgb[45][2][1] = 0 * intensity / 100; 
                
                rgb[46][0][1] = 0 * intensity / 100;
                rgb[46][1][1] = 0 * intensity / 100;
                rgb[46][2][1] = 0 * intensity / 100; 
                
                rgb[47][0][1] = 0 * intensity / 100;
                rgb[47][1][1] = 0 * intensity / 100;
                rgb[47][2][1] = 0 * intensity / 100; 
                
                rgb[48][0][1] = 0 * intensity / 100;
                rgb[48][1][1] = 0 * intensity / 100;
                rgb[48][2][1] = 0 * intensity / 100; 
                
                rgb[49][0][1] = 0 * intensity / 100;
                rgb[49][1][1] = 0 * intensity / 100;
                rgb[49][2][1] = 0 * intensity / 100; 
                
                rgb[50][0][1] = 0 * intensity / 100;
                rgb[50][1][1] = 0 * intensity / 100;
                rgb[50][2][1] = 0 * intensity / 100; 
                
                rgb[51][0][1] = 0 * intensity / 100;
                rgb[51][1][1] = 0 * intensity / 100;
                rgb[51][2][1] = 0 * intensity / 100; 
                
                rgb[52][0][1] = 0 * intensity / 100;
                rgb[52][1][1] = 0 * intensity / 100;
                rgb[52][2][1] = 0 * intensity / 100; 
                
                rgb[53][0][1] = 0 * intensity / 100;
                rgb[53][1][1] = 0 * intensity / 100;
                rgb[53][2][1] = 0 * intensity / 100; 
                
                rgb[54][0][1] = 0 * intensity / 100;
                rgb[54][1][1] = 0 * intensity / 100;
                rgb[54][2][1] = 0 * intensity / 100; 
                
                rgb[55][0][1] = 0 * intensity / 100;
                rgb[55][1][1] = 0 * intensity / 100;
                rgb[55][2][1] = 0 * intensity / 100; 
                
                rgb[56][0][1] = 0 * intensity / 100;
                rgb[56][1][1] = 0 * intensity / 100;
                rgb[56][2][1] = 0 * intensity / 100; 
                
                rgb[57][0][1] = 0 * intensity / 100;
                rgb[57][1][1] = 0 * intensity / 100;
                rgb[57][2][1] = 0 * intensity / 100; 
                
                rgb[58][0][1] = 0 * intensity / 100;
                rgb[58][1][1] = 0 * intensity / 100;
                rgb[58][2][1] = 0 * intensity / 100; 
                
                rgb[59][0][1] = 0 * intensity / 100;
                rgb[59][1][1] = 0 * intensity / 100;
                rgb[59][2][1] = 0 * intensity / 100; 
                
                rgb[60][0][1] = 0 * intensity / 100;
                rgb[60][1][1] = 0 * intensity / 100;
                rgb[60][2][1] = 0 * intensity / 100; 
                
                rgb[61][0][1] = 0 * intensity / 100;
                rgb[61][1][1] = 0 * intensity / 100;
                rgb[61][2][1] = 0 * intensity / 100; 
                
                rgb[62][0][1] = 0 * intensity / 100;
                rgb[62][1][1] = 0 * intensity / 100;
                rgb[62][2][1] = 0 * intensity / 100; 
                
                rgb[63][0][1] = 0 * intensity / 100;
                rgb[63][1][1] = 0 * intensity / 100;
                rgb[63][2][1] = 0 * intensity / 100; 
                

        frameTime[1] = 50;

    
                rgb[0][0][2] = 0 * intensity / 100;
                rgb[0][1][2] = 0 * intensity / 100;
                rgb[0][2][2] = 0 * intensity / 100; 
                
                rgb[1][0][2] = 0 * intensity / 100;
                rgb[1][1][2] = 0 * intensity / 100;
                rgb[1][2][2] = 0 * intensity / 100; 
                
                rgb[2][0][2] = 0 * intensity / 100;
                rgb[2][1][2] = 0 * intensity / 100;
                rgb[2][2][2] = 0 * intensity / 100; 
                
                rgb[3][0][2] = 0 * intensity / 100;
                rgb[3][1][2] = 0 * intensity / 100;
                rgb[3][2][2] = 0 * intensity / 100; 
                
                rgb[4][0][2] = 0 * intensity / 100;
                rgb[4][1][2] = 0 * intensity / 100;
                rgb[4][2][2] = 0 * intensity / 100; 
                
                rgb[5][0][2] = 0 * intensity / 100;
                rgb[5][1][2] = 0 * intensity / 100;
                rgb[5][2][2] = 0 * intensity / 100; 
                
                rgb[6][0][2] = 0 * intensity / 100;
                rgb[6][1][2] = 0 * intensity / 100;
                rgb[6][2][2] = 0 * intensity / 100; 
                
                rgb[7][0][2] = 0 * intensity / 100;
                rgb[7][1][2] = 0 * intensity / 100;
                rgb[7][2][2] = 0 * intensity / 100; 
                
                rgb[8][0][2] = 0 * intensity / 100;
                rgb[8][1][2] = 0 * intensity / 100;
                rgb[8][2][2] = 0 * intensity / 100; 
                
                rgb[9][0][2] = 0 * intensity / 100;
                rgb[9][1][2] = 0 * intensity / 100;
                rgb[9][2][2] = 0 * intensity / 100; 
                
                rgb[10][0][2] = 0 * intensity / 100;
                rgb[10][1][2] = 0 * intensity / 100;
                rgb[10][2][2] = 0 * intensity / 100; 
                
                rgb[11][0][2] = 0 * intensity / 100;
                rgb[11][1][2] = 0 * intensity / 100;
                rgb[11][2][2] = 0 * intensity / 100; 
                
                rgb[12][0][2] = 0 * intensity / 100;
                rgb[12][1][2] = 0 * intensity / 100;
                rgb[12][2][2] = 0 * intensity / 100; 
                
                rgb[13][0][2] = 0 * intensity / 100;
                rgb[13][1][2] = 0 * intensity / 100;
                rgb[13][2][2] = 0 * intensity / 100; 
                
                rgb[14][0][2] = 0 * intensity / 100;
                rgb[14][1][2] = 0 * intensity / 100;
                rgb[14][2][2] = 0 * intensity / 100; 
                
                rgb[15][0][2] = 0 * intensity / 100;
                rgb[15][1][2] = 0 * intensity / 100;
                rgb[15][2][2] = 0 * intensity / 100; 
                
                rgb[16][0][2] = 0 * intensity / 100;
                rgb[16][1][2] = 0 * intensity / 100;
                rgb[16][2][2] = 0 * intensity / 100; 
                
                rgb[17][0][2] = 0 * intensity / 100;
                rgb[17][1][2] = 0 * intensity / 100;
                rgb[17][2][2] = 0 * intensity / 100; 
                
                rgb[18][0][2] = 0 * intensity / 100;
                rgb[18][1][2] = 0 * intensity / 100;
                rgb[18][2][2] = 0 * intensity / 100; 
                
                rgb[19][0][2] = 0 * intensity / 100;
                rgb[19][1][2] = 0 * intensity / 100;
                rgb[19][2][2] = 0 * intensity / 100; 
                
                rgb[20][0][2] = 0 * intensity / 100;
                rgb[20][1][2] = 0 * intensity / 100;
                rgb[20][2][2] = 0 * intensity / 100; 
                
                rgb[21][0][2] = 0 * intensity / 100;
                rgb[21][1][2] = 0 * intensity / 100;
                rgb[21][2][2] = 0 * intensity / 100; 
                
                rgb[22][0][2] = 0 * intensity / 100;
                rgb[22][1][2] = 0 * intensity / 100;
                rgb[22][2][2] = 0 * intensity / 100; 
                
                rgb[23][0][2] = 0 * intensity / 100;
                rgb[23][1][2] = 0 * intensity / 100;
                rgb[23][2][2] = 0 * intensity / 100; 
                
                rgb[24][0][2] = 0 * intensity / 100;
                rgb[24][1][2] = 0 * intensity / 100;
                rgb[24][2][2] = 0 * intensity / 100; 
                
                rgb[25][0][2] = 0 * intensity / 100;
                rgb[25][1][2] = 0 * intensity / 100;
                rgb[25][2][2] = 0 * intensity / 100; 
                
                rgb[26][0][2] = 0 * intensity / 100;
                rgb[26][1][2] = 0 * intensity / 100;
                rgb[26][2][2] = 0 * intensity / 100; 
                
                rgb[27][0][2] = 0 * intensity / 100;
                rgb[27][1][2] = 0 * intensity / 100;
                rgb[27][2][2] = 0 * intensity / 100; 
                
                rgb[28][0][2] = 0 * intensity / 100;
                rgb[28][1][2] = 0 * intensity / 100;
                rgb[28][2][2] = 0 * intensity / 100; 
                
                rgb[29][0][2] = 0 * intensity / 100;
                rgb[29][1][2] = 0 * intensity / 100;
                rgb[29][2][2] = 0 * intensity / 100; 
                
                rgb[30][0][2] = 0 * intensity / 100;
                rgb[30][1][2] = 0 * intensity / 100;
                rgb[30][2][2] = 0 * intensity / 100; 
                
                rgb[31][0][2] = 0 * intensity / 100;
                rgb[31][1][2] = 0 * intensity / 100;
                rgb[31][2][2] = 0 * intensity / 100; 
                
                rgb[32][0][2] = 0 * intensity / 100;
                rgb[32][1][2] = 0 * intensity / 100;
                rgb[32][2][2] = 0 * intensity / 100; 
                
                rgb[33][0][2] = 215 * intensity / 100;
                rgb[33][1][2] = 80 * intensity / 100;
                rgb[33][2][2] = 156 * intensity / 100; 
                
                rgb[34][0][2] = 0 * intensity / 100;
                rgb[34][1][2] = 0 * intensity / 100;
                rgb[34][2][2] = 0 * intensity / 100; 
                
                rgb[35][0][2] = 0 * intensity / 100;
                rgb[35][1][2] = 0 * intensity / 100;
                rgb[35][2][2] = 0 * intensity / 100; 
                
                rgb[36][0][2] = 0 * intensity / 100;
                rgb[36][1][2] = 0 * intensity / 100;
                rgb[36][2][2] = 0 * intensity / 100; 
                
                rgb[37][0][2] = 0 * intensity / 100;
                rgb[37][1][2] = 0 * intensity / 100;
                rgb[37][2][2] = 0 * intensity / 100; 
                
                rgb[38][0][2] = 0 * intensity / 100;
                rgb[38][1][2] = 0 * intensity / 100;
                rgb[38][2][2] = 0 * intensity / 100; 
                
                rgb[39][0][2] = 0 * intensity / 100;
                rgb[39][1][2] = 0 * intensity / 100;
                rgb[39][2][2] = 0 * intensity / 100; 
                
                rgb[40][0][2] = 0 * intensity / 100;
                rgb[40][1][2] = 0 * intensity / 100;
                rgb[40][2][2] = 0 * intensity / 100; 
                
                rgb[41][0][2] = 0 * intensity / 100;
                rgb[41][1][2] = 0 * intensity / 100;
                rgb[41][2][2] = 0 * intensity / 100; 
                
                rgb[42][0][2] = 0 * intensity / 100;
                rgb[42][1][2] = 0 * intensity / 100;
                rgb[42][2][2] = 0 * intensity / 100; 
                
                rgb[43][0][2] = 0 * intensity / 100;
                rgb[43][1][2] = 0 * intensity / 100;
                rgb[43][2][2] = 0 * intensity / 100; 
                
                rgb[44][0][2] = 0 * intensity / 100;
                rgb[44][1][2] = 0 * intensity / 100;
                rgb[44][2][2] = 0 * intensity / 100; 
                
                rgb[45][0][2] = 0 * intensity / 100;
                rgb[45][1][2] = 0 * intensity / 100;
                rgb[45][2][2] = 0 * intensity / 100; 
                
                rgb[46][0][2] = 215 * intensity / 100;
                rgb[46][1][2] = 80 * intensity / 100;
                rgb[46][2][2] = 156 * intensity / 100; 
                
                rgb[47][0][2] = 0 * intensity / 100;
                rgb[47][1][2] = 0 * intensity / 100;
                rgb[47][2][2] = 0 * intensity / 100; 
                
                rgb[48][0][2] = 0 * intensity / 100;
                rgb[48][1][2] = 0 * intensity / 100;
                rgb[48][2][2] = 0 * intensity / 100; 
                
                rgb[49][0][2] = 0 * intensity / 100;
                rgb[49][1][2] = 0 * intensity / 100;
                rgb[49][2][2] = 0 * intensity / 100; 
                
                rgb[50][0][2] = 215 * intensity / 100;
                rgb[50][1][2] = 80 * intensity / 100;
                rgb[50][2][2] = 156 * intensity / 100; 
                
                rgb[51][0][2] = 215 * intensity / 100;
                rgb[51][1][2] = 80 * intensity / 100;
                rgb[51][2][2] = 156 * intensity / 100; 
                
                rgb[52][0][2] = 215 * intensity / 100;
                rgb[52][1][2] = 80 * intensity / 100;
                rgb[52][2][2] = 156 * intensity / 100; 
                
                rgb[53][0][2] = 215 * intensity / 100;
                rgb[53][1][2] = 80 * intensity / 100;
                rgb[53][2][2] = 156 * intensity / 100; 
                
                rgb[54][0][2] = 0 * intensity / 100;
                rgb[54][1][2] = 0 * intensity / 100;
                rgb[54][2][2] = 0 * intensity / 100; 
                
                rgb[55][0][2] = 0 * intensity / 100;
                rgb[55][1][2] = 0 * intensity / 100;
                rgb[55][2][2] = 0 * intensity / 100; 
                
                rgb[56][0][2] = 0 * intensity / 100;
                rgb[56][1][2] = 0 * intensity / 100;
                rgb[56][2][2] = 0 * intensity / 100; 
                
                rgb[57][0][2] = 0 * intensity / 100;
                rgb[57][1][2] = 0 * intensity / 100;
                rgb[57][2][2] = 0 * intensity / 100; 
                
                rgb[58][0][2] = 215 * intensity / 100;
                rgb[58][1][2] = 80 * intensity / 100;
                rgb[58][2][2] = 156 * intensity / 100; 
                
                rgb[59][0][2] = 215 * intensity / 100;
                rgb[59][1][2] = 80 * intensity / 100;
                rgb[59][2][2] = 156 * intensity / 100; 
                
                rgb[60][0][2] = 215 * intensity / 100;
                rgb[60][1][2] = 80 * intensity / 100;
                rgb[60][2][2] = 156 * intensity / 100; 
                
                rgb[61][0][2] = 215 * intensity / 100;
                rgb[61][1][2] = 80 * intensity / 100;
                rgb[61][2][2] = 156 * intensity / 100; 
                
                rgb[62][0][2] = 0 * intensity / 100;
                rgb[62][1][2] = 0 * intensity / 100;
                rgb[62][2][2] = 0 * intensity / 100; 
                
                rgb[63][0][2] = 0 * intensity / 100;
                rgb[63][1][2] = 0 * intensity / 100;
                rgb[63][2][2] = 0 * intensity / 100; 
                
                rgb[0][0][2] = 0 * intensity / 100;
                rgb[0][1][2] = 0 * intensity / 100;
                rgb[0][2][2] = 0 * intensity / 100; 
                
                rgb[1][0][2] = 0 * intensity / 100;
                rgb[1][1][2] = 0 * intensity / 100;
                rgb[1][2][2] = 0 * intensity / 100; 
                
                rgb[2][0][2] = 0 * intensity / 100;
                rgb[2][1][2] = 0 * intensity / 100;
                rgb[2][2][2] = 0 * intensity / 100; 
                
                rgb[3][0][2] = 215 * intensity / 100;
                rgb[3][1][2] = 80 * intensity / 100;
                rgb[3][2][2] = 156 * intensity / 100; 
                
                rgb[4][0][2] = 215 * intensity / 100;
                rgb[4][1][2] = 80 * intensity / 100;
                rgb[4][2][2] = 156 * intensity / 100; 
                
                rgb[5][0][2] = 215 * intensity / 100;
                rgb[5][1][2] = 80 * intensity / 100;
                rgb[5][2][2] = 156 * intensity / 100; 
                
                rgb[6][0][2] = 0 * intensity / 100;
                rgb[6][1][2] = 0 * intensity / 100;
                rgb[6][2][2] = 0 * intensity / 100; 
                
                rgb[7][0][2] = 0 * intensity / 100;
                rgb[7][1][2] = 0 * intensity / 100;
                rgb[7][2][2] = 0 * intensity / 100; 
                
                rgb[8][0][2] = 0 * intensity / 100;
                rgb[8][1][2] = 0 * intensity / 100;
                rgb[8][2][2] = 0 * intensity / 100; 
                
                rgb[9][0][2] = 0 * intensity / 100;
                rgb[9][1][2] = 0 * intensity / 100;
                rgb[9][2][2] = 0 * intensity / 100; 
                
                rgb[10][0][2] = 215 * intensity / 100;
                rgb[10][1][2] = 80 * intensity / 100;
                rgb[10][2][2] = 156 * intensity / 100; 
                
                rgb[11][0][2] = 215 * intensity / 100;
                rgb[11][1][2] = 80 * intensity / 100;
                rgb[11][2][2] = 156 * intensity / 100; 
                
                rgb[12][0][2] = 215 * intensity / 100;
                rgb[12][1][2] = 80 * intensity / 100;
                rgb[12][2][2] = 156 * intensity / 100; 
                
                rgb[13][0][2] = 0 * intensity / 100;
                rgb[13][1][2] = 0 * intensity / 100;
                rgb[13][2][2] = 0 * intensity / 100; 
                
                rgb[14][0][2] = 0 * intensity / 100;
                rgb[14][1][2] = 0 * intensity / 100;
                rgb[14][2][2] = 0 * intensity / 100; 
                
                rgb[15][0][2] = 0 * intensity / 100;
                rgb[15][1][2] = 0 * intensity / 100;
                rgb[15][2][2] = 0 * intensity / 100; 
                
                rgb[16][0][2] = 0 * intensity / 100;
                rgb[16][1][2] = 0 * intensity / 100;
                rgb[16][2][2] = 0 * intensity / 100; 
                
                rgb[17][0][2] = 0 * intensity / 100;
                rgb[17][1][2] = 0 * intensity / 100;
                rgb[17][2][2] = 0 * intensity / 100; 
                
                rgb[18][0][2] = 0 * intensity / 100;
                rgb[18][1][2] = 0 * intensity / 100;
                rgb[18][2][2] = 0 * intensity / 100; 
                
                rgb[19][0][2] = 215 * intensity / 100;
                rgb[19][1][2] = 80 * intensity / 100;
                rgb[19][2][2] = 156 * intensity / 100; 
                
                rgb[20][0][2] = 215 * intensity / 100;
                rgb[20][1][2] = 80 * intensity / 100;
                rgb[20][2][2] = 156 * intensity / 100; 
                
                rgb[21][0][2] = 215 * intensity / 100;
                rgb[21][1][2] = 80 * intensity / 100;
                rgb[21][2][2] = 156 * intensity / 100; 
                
                rgb[22][0][2] = 0 * intensity / 100;
                rgb[22][1][2] = 0 * intensity / 100;
                rgb[22][2][2] = 0 * intensity / 100; 
                
                rgb[23][0][2] = 0 * intensity / 100;
                rgb[23][1][2] = 0 * intensity / 100;
                rgb[23][2][2] = 0 * intensity / 100; 
                
                rgb[24][0][2] = 0 * intensity / 100;
                rgb[24][1][2] = 0 * intensity / 100;
                rgb[24][2][2] = 0 * intensity / 100; 
                
                rgb[25][0][2] = 0 * intensity / 100;
                rgb[25][1][2] = 0 * intensity / 100;
                rgb[25][2][2] = 0 * intensity / 100; 
                
                rgb[26][0][2] = 215 * intensity / 100;
                rgb[26][1][2] = 80 * intensity / 100;
                rgb[26][2][2] = 156 * intensity / 100; 
                
                rgb[27][0][2] = 215 * intensity / 100;
                rgb[27][1][2] = 80 * intensity / 100;
                rgb[27][2][2] = 156 * intensity / 100; 
                
                rgb[28][0][2] = 215 * intensity / 100;
                rgb[28][1][2] = 80 * intensity / 100;
                rgb[28][2][2] = 156 * intensity / 100; 
                
                rgb[29][0][2] = 0 * intensity / 100;
                rgb[29][1][2] = 0 * intensity / 100;
                rgb[29][2][2] = 0 * intensity / 100; 
                
                rgb[30][0][2] = 0 * intensity / 100;
                rgb[30][1][2] = 0 * intensity / 100;
                rgb[30][2][2] = 0 * intensity / 100; 
                
                rgb[31][0][2] = 0 * intensity / 100;
                rgb[31][1][2] = 0 * intensity / 100;
                rgb[31][2][2] = 0 * intensity / 100; 
                
                rgb[32][0][2] = 0 * intensity / 100;
                rgb[32][1][2] = 0 * intensity / 100;
                rgb[32][2][2] = 0 * intensity / 100; 
                
                rgb[33][0][2] = 0 * intensity / 100;
                rgb[33][1][2] = 0 * intensity / 100;
                rgb[33][2][2] = 0 * intensity / 100; 
                
                rgb[34][0][2] = 0 * intensity / 100;
                rgb[34][1][2] = 0 * intensity / 100;
                rgb[34][2][2] = 0 * intensity / 100; 
                
                rgb[35][0][2] = 215 * intensity / 100;
                rgb[35][1][2] = 80 * intensity / 100;
                rgb[35][2][2] = 156 * intensity / 100; 
                
                rgb[36][0][2] = 215 * intensity / 100;
                rgb[36][1][2] = 80 * intensity / 100;
                rgb[36][2][2] = 156 * intensity / 100; 
                
                rgb[37][0][2] = 215 * intensity / 100;
                rgb[37][1][2] = 80 * intensity / 100;
                rgb[37][2][2] = 156 * intensity / 100; 
                
                rgb[38][0][2] = 0 * intensity / 100;
                rgb[38][1][2] = 0 * intensity / 100;
                rgb[38][2][2] = 0 * intensity / 100; 
                
                rgb[39][0][2] = 0 * intensity / 100;
                rgb[39][1][2] = 0 * intensity / 100;
                rgb[39][2][2] = 0 * intensity / 100; 
                
                rgb[40][0][2] = 0 * intensity / 100;
                rgb[40][1][2] = 0 * intensity / 100;
                rgb[40][2][2] = 0 * intensity / 100; 
                
                rgb[41][0][2] = 0 * intensity / 100;
                rgb[41][1][2] = 0 * intensity / 100;
                rgb[41][2][2] = 0 * intensity / 100; 
                
                rgb[42][0][2] = 215 * intensity / 100;
                rgb[42][1][2] = 80 * intensity / 100;
                rgb[42][2][2] = 156 * intensity / 100; 
                
                rgb[43][0][2] = 215 * intensity / 100;
                rgb[43][1][2] = 80 * intensity / 100;
                rgb[43][2][2] = 156 * intensity / 100; 
                
                rgb[44][0][2] = 215 * intensity / 100;
                rgb[44][1][2] = 80 * intensity / 100;
                rgb[44][2][2] = 156 * intensity / 100; 
                
                rgb[45][0][2] = 0 * intensity / 100;
                rgb[45][1][2] = 0 * intensity / 100;
                rgb[45][2][2] = 0 * intensity / 100; 
                
                rgb[46][0][2] = 0 * intensity / 100;
                rgb[46][1][2] = 0 * intensity / 100;
                rgb[46][2][2] = 0 * intensity / 100; 
                
                rgb[47][0][2] = 0 * intensity / 100;
                rgb[47][1][2] = 0 * intensity / 100;
                rgb[47][2][2] = 0 * intensity / 100; 
                
                rgb[48][0][2] = 0 * intensity / 100;
                rgb[48][1][2] = 0 * intensity / 100;
                rgb[48][2][2] = 0 * intensity / 100; 
                
                rgb[49][0][2] = 0 * intensity / 100;
                rgb[49][1][2] = 0 * intensity / 100;
                rgb[49][2][2] = 0 * intensity / 100; 
                
                rgb[50][0][2] = 0 * intensity / 100;
                rgb[50][1][2] = 0 * intensity / 100;
                rgb[50][2][2] = 0 * intensity / 100; 
                
                rgb[51][0][2] = 0 * intensity / 100;
                rgb[51][1][2] = 0 * intensity / 100;
                rgb[51][2][2] = 0 * intensity / 100; 
                
                rgb[52][0][2] = 0 * intensity / 100;
                rgb[52][1][2] = 0 * intensity / 100;
                rgb[52][2][2] = 0 * intensity / 100; 
                
                rgb[53][0][2] = 0 * intensity / 100;
                rgb[53][1][2] = 0 * intensity / 100;
                rgb[53][2][2] = 0 * intensity / 100; 
                
                rgb[54][0][2] = 0 * intensity / 100;
                rgb[54][1][2] = 0 * intensity / 100;
                rgb[54][2][2] = 0 * intensity / 100; 
                
                rgb[55][0][2] = 0 * intensity / 100;
                rgb[55][1][2] = 0 * intensity / 100;
                rgb[55][2][2] = 0 * intensity / 100; 
                
                rgb[56][0][2] = 0 * intensity / 100;
                rgb[56][1][2] = 0 * intensity / 100;
                rgb[56][2][2] = 0 * intensity / 100; 
                
                rgb[57][0][2] = 0 * intensity / 100;
                rgb[57][1][2] = 0 * intensity / 100;
                rgb[57][2][2] = 0 * intensity / 100; 
                
                rgb[58][0][2] = 0 * intensity / 100;
                rgb[58][1][2] = 0 * intensity / 100;
                rgb[58][2][2] = 0 * intensity / 100; 
                
                rgb[59][0][2] = 0 * intensity / 100;
                rgb[59][1][2] = 0 * intensity / 100;
                rgb[59][2][2] = 0 * intensity / 100; 
                
                rgb[60][0][2] = 0 * intensity / 100;
                rgb[60][1][2] = 0 * intensity / 100;
                rgb[60][2][2] = 0 * intensity / 100; 
                
                rgb[61][0][2] = 0 * intensity / 100;
                rgb[61][1][2] = 0 * intensity / 100;
                rgb[61][2][2] = 0 * intensity / 100; 
                
                rgb[62][0][2] = 0 * intensity / 100;
                rgb[62][1][2] = 0 * intensity / 100;
                rgb[62][2][2] = 0 * intensity / 100; 
                
                rgb[63][0][2] = 0 * intensity / 100;
                rgb[63][1][2] = 0 * intensity / 100;
                rgb[63][2][2] = 0 * intensity / 100; 
                

        frameTime[2] = 50;

    
                rgb[0][0][3] = 0 * intensity / 100;
                rgb[0][1][3] = 0 * intensity / 100;
                rgb[0][2][3] = 0 * intensity / 100; 
                
                rgb[1][0][3] = 0 * intensity / 100;
                rgb[1][1][3] = 0 * intensity / 100;
                rgb[1][2][3] = 0 * intensity / 100; 
                
                rgb[2][0][3] = 0 * intensity / 100;
                rgb[2][1][3] = 0 * intensity / 100;
                rgb[2][2][3] = 0 * intensity / 100; 
                
                rgb[3][0][3] = 0 * intensity / 100;
                rgb[3][1][3] = 0 * intensity / 100;
                rgb[3][2][3] = 0 * intensity / 100; 
                
                rgb[4][0][3] = 0 * intensity / 100;
                rgb[4][1][3] = 0 * intensity / 100;
                rgb[4][2][3] = 0 * intensity / 100; 
                
                rgb[5][0][3] = 0 * intensity / 100;
                rgb[5][1][3] = 0 * intensity / 100;
                rgb[5][2][3] = 0 * intensity / 100; 
                
                rgb[6][0][3] = 0 * intensity / 100;
                rgb[6][1][3] = 0 * intensity / 100;
                rgb[6][2][3] = 0 * intensity / 100; 
                
                rgb[7][0][3] = 0 * intensity / 100;
                rgb[7][1][3] = 0 * intensity / 100;
                rgb[7][2][3] = 0 * intensity / 100; 
                
                rgb[8][0][3] = 0 * intensity / 100;
                rgb[8][1][3] = 0 * intensity / 100;
                rgb[8][2][3] = 0 * intensity / 100; 
                
                rgb[9][0][3] = 0 * intensity / 100;
                rgb[9][1][3] = 0 * intensity / 100;
                rgb[9][2][3] = 0 * intensity / 100; 
                
                rgb[10][0][3] = 0 * intensity / 100;
                rgb[10][1][3] = 0 * intensity / 100;
                rgb[10][2][3] = 0 * intensity / 100; 
                
                rgb[11][0][3] = 0 * intensity / 100;
                rgb[11][1][3] = 0 * intensity / 100;
                rgb[11][2][3] = 0 * intensity / 100; 
                
                rgb[12][0][3] = 0 * intensity / 100;
                rgb[12][1][3] = 0 * intensity / 100;
                rgb[12][2][3] = 0 * intensity / 100; 
                
                rgb[13][0][3] = 0 * intensity / 100;
                rgb[13][1][3] = 0 * intensity / 100;
                rgb[13][2][3] = 0 * intensity / 100; 
                
                rgb[14][0][3] = 0 * intensity / 100;
                rgb[14][1][3] = 0 * intensity / 100;
                rgb[14][2][3] = 0 * intensity / 100; 
                
                rgb[15][0][3] = 0 * intensity / 100;
                rgb[15][1][3] = 0 * intensity / 100;
                rgb[15][2][3] = 0 * intensity / 100; 
                
                rgb[16][0][3] = 0 * intensity / 100;
                rgb[16][1][3] = 0 * intensity / 100;
                rgb[16][2][3] = 0 * intensity / 100; 
                
                rgb[17][0][3] = 0 * intensity / 100;
                rgb[17][1][3] = 0 * intensity / 100;
                rgb[17][2][3] = 0 * intensity / 100; 
                
                rgb[18][0][3] = 0 * intensity / 100;
                rgb[18][1][3] = 0 * intensity / 100;
                rgb[18][2][3] = 0 * intensity / 100; 
                
                rgb[19][0][3] = 0 * intensity / 100;
                rgb[19][1][3] = 0 * intensity / 100;
                rgb[19][2][3] = 0 * intensity / 100; 
                
                rgb[20][0][3] = 0 * intensity / 100;
                rgb[20][1][3] = 0 * intensity / 100;
                rgb[20][2][3] = 0 * intensity / 100; 
                
                rgb[21][0][3] = 0 * intensity / 100;
                rgb[21][1][3] = 0 * intensity / 100;
                rgb[21][2][3] = 0 * intensity / 100; 
                
                rgb[22][0][3] = 0 * intensity / 100;
                rgb[22][1][3] = 0 * intensity / 100;
                rgb[22][2][3] = 0 * intensity / 100; 
                
                rgb[23][0][3] = 0 * intensity / 100;
                rgb[23][1][3] = 0 * intensity / 100;
                rgb[23][2][3] = 0 * intensity / 100; 
                
                rgb[24][0][3] = 0 * intensity / 100;
                rgb[24][1][3] = 0 * intensity / 100;
                rgb[24][2][3] = 0 * intensity / 100; 
                
                rgb[25][0][3] = 0 * intensity / 100;
                rgb[25][1][3] = 0 * intensity / 100;
                rgb[25][2][3] = 0 * intensity / 100; 
                
                rgb[26][0][3] = 0 * intensity / 100;
                rgb[26][1][3] = 0 * intensity / 100;
                rgb[26][2][3] = 0 * intensity / 100; 
                
                rgb[27][0][3] = 0 * intensity / 100;
                rgb[27][1][3] = 0 * intensity / 100;
                rgb[27][2][3] = 0 * intensity / 100; 
                
                rgb[28][0][3] = 0 * intensity / 100;
                rgb[28][1][3] = 0 * intensity / 100;
                rgb[28][2][3] = 0 * intensity / 100; 
                
                rgb[29][0][3] = 0 * intensity / 100;
                rgb[29][1][3] = 0 * intensity / 100;
                rgb[29][2][3] = 0 * intensity / 100; 
                
                rgb[30][0][3] = 0 * intensity / 100;
                rgb[30][1][3] = 0 * intensity / 100;
                rgb[30][2][3] = 0 * intensity / 100; 
                
                rgb[31][0][3] = 0 * intensity / 100;
                rgb[31][1][3] = 0 * intensity / 100;
                rgb[31][2][3] = 0 * intensity / 100; 
                
                rgb[32][0][3] = 0 * intensity / 100;
                rgb[32][1][3] = 0 * intensity / 100;
                rgb[32][2][3] = 0 * intensity / 100; 
                
                rgb[33][0][3] = 0 * intensity / 100;
                rgb[33][1][3] = 0 * intensity / 100;
                rgb[33][2][3] = 0 * intensity / 100; 
                
                rgb[34][0][3] = 0 * intensity / 100;
                rgb[34][1][3] = 0 * intensity / 100;
                rgb[34][2][3] = 0 * intensity / 100; 
                
                rgb[35][0][3] = 0 * intensity / 100;
                rgb[35][1][3] = 0 * intensity / 100;
                rgb[35][2][3] = 0 * intensity / 100; 
                
                rgb[36][0][3] = 0 * intensity / 100;
                rgb[36][1][3] = 0 * intensity / 100;
                rgb[36][2][3] = 0 * intensity / 100; 
                
                rgb[37][0][3] = 0 * intensity / 100;
                rgb[37][1][3] = 0 * intensity / 100;
                rgb[37][2][3] = 0 * intensity / 100; 
                
                rgb[38][0][3] = 0 * intensity / 100;
                rgb[38][1][3] = 0 * intensity / 100;
                rgb[38][2][3] = 0 * intensity / 100; 
                
                rgb[39][0][3] = 0 * intensity / 100;
                rgb[39][1][3] = 0 * intensity / 100;
                rgb[39][2][3] = 0 * intensity / 100; 
                
                rgb[40][0][3] = 0 * intensity / 100;
                rgb[40][1][3] = 0 * intensity / 100;
                rgb[40][2][3] = 0 * intensity / 100; 
                
                rgb[41][0][3] = 0 * intensity / 100;
                rgb[41][1][3] = 0 * intensity / 100;
                rgb[41][2][3] = 0 * intensity / 100; 
                
                rgb[42][0][3] = 0 * intensity / 100;
                rgb[42][1][3] = 0 * intensity / 100;
                rgb[42][2][3] = 0 * intensity / 100; 
                
                rgb[43][0][3] = 0 * intensity / 100;
                rgb[43][1][3] = 0 * intensity / 100;
                rgb[43][2][3] = 0 * intensity / 100; 
                
                rgb[44][0][3] = 0 * intensity / 100;
                rgb[44][1][3] = 0 * intensity / 100;
                rgb[44][2][3] = 0 * intensity / 100; 
                
                rgb[45][0][3] = 0 * intensity / 100;
                rgb[45][1][3] = 0 * intensity / 100;
                rgb[45][2][3] = 0 * intensity / 100; 
                
                rgb[46][0][3] = 0 * intensity / 100;
                rgb[46][1][3] = 0 * intensity / 100;
                rgb[46][2][3] = 0 * intensity / 100; 
                
                rgb[47][0][3] = 0 * intensity / 100;
                rgb[47][1][3] = 0 * intensity / 100;
                rgb[47][2][3] = 0 * intensity / 100; 
                
                rgb[48][0][3] = 0 * intensity / 100;
                rgb[48][1][3] = 0 * intensity / 100;
                rgb[48][2][3] = 0 * intensity / 100; 
                
                rgb[49][0][3] = 215 * intensity / 100;
                rgb[49][1][3] = 80 * intensity / 100;
                rgb[49][2][3] = 156 * intensity / 100; 
                
                rgb[50][0][3] = 0 * intensity / 100;
                rgb[50][1][3] = 0 * intensity / 100;
                rgb[50][2][3] = 0 * intensity / 100; 
                
                rgb[51][0][3] = 0 * intensity / 100;
                rgb[51][1][3] = 0 * intensity / 100;
                rgb[51][2][3] = 0 * intensity / 100; 
                
                rgb[52][0][3] = 0 * intensity / 100;
                rgb[52][1][3] = 0 * intensity / 100;
                rgb[52][2][3] = 0 * intensity / 100; 
                
                rgb[53][0][3] = 0 * intensity / 100;
                rgb[53][1][3] = 0 * intensity / 100;
                rgb[53][2][3] = 0 * intensity / 100; 
                
                rgb[54][0][3] = 0 * intensity / 100;
                rgb[54][1][3] = 0 * intensity / 100;
                rgb[54][2][3] = 0 * intensity / 100; 
                
                rgb[55][0][3] = 0 * intensity / 100;
                rgb[55][1][3] = 0 * intensity / 100;
                rgb[55][2][3] = 0 * intensity / 100; 
                
                rgb[56][0][3] = 0 * intensity / 100;
                rgb[56][1][3] = 0 * intensity / 100;
                rgb[56][2][3] = 0 * intensity / 100; 
                
                rgb[57][0][3] = 0 * intensity / 100;
                rgb[57][1][3] = 0 * intensity / 100;
                rgb[57][2][3] = 0 * intensity / 100; 
                
                rgb[58][0][3] = 0 * intensity / 100;
                rgb[58][1][3] = 0 * intensity / 100;
                rgb[58][2][3] = 0 * intensity / 100; 
                
                rgb[59][0][3] = 0 * intensity / 100;
                rgb[59][1][3] = 0 * intensity / 100;
                rgb[59][2][3] = 0 * intensity / 100; 
                
                rgb[60][0][3] = 0 * intensity / 100;
                rgb[60][1][3] = 0 * intensity / 100;
                rgb[60][2][3] = 0 * intensity / 100; 
                
                rgb[61][0][3] = 0 * intensity / 100;
                rgb[61][1][3] = 0 * intensity / 100;
                rgb[61][2][3] = 0 * intensity / 100; 
                
                rgb[62][0][3] = 215 * intensity / 100;
                rgb[62][1][3] = 80 * intensity / 100;
                rgb[62][2][3] = 156 * intensity / 100; 
                
                rgb[63][0][3] = 0 * intensity / 100;
                rgb[63][1][3] = 0 * intensity / 100;
                rgb[63][2][3] = 0 * intensity / 100; 
                
                rgb[0][0][3] = 0 * intensity / 100;
                rgb[0][1][3] = 0 * intensity / 100;
                rgb[0][2][3] = 0 * intensity / 100; 
                
                rgb[1][0][3] = 0 * intensity / 100;
                rgb[1][1][3] = 0 * intensity / 100;
                rgb[1][2][3] = 0 * intensity / 100; 
                
                rgb[2][0][3] = 215 * intensity / 100;
                rgb[2][1][3] = 80 * intensity / 100;
                rgb[2][2][3] = 156 * intensity / 100; 
                
                rgb[3][0][3] = 215 * intensity / 100;
                rgb[3][1][3] = 80 * intensity / 100;
                rgb[3][2][3] = 156 * intensity / 100; 
                
                rgb[4][0][3] = 215 * intensity / 100;
                rgb[4][1][3] = 80 * intensity / 100;
                rgb[4][2][3] = 156 * intensity / 100; 
                
                rgb[5][0][3] = 215 * intensity / 100;
                rgb[5][1][3] = 80 * intensity / 100;
                rgb[5][2][3] = 156 * intensity / 100; 
                
                rgb[6][0][3] = 0 * intensity / 100;
                rgb[6][1][3] = 0 * intensity / 100;
                rgb[6][2][3] = 0 * intensity / 100; 
                
                rgb[7][0][3] = 0 * intensity / 100;
                rgb[7][1][3] = 0 * intensity / 100;
                rgb[7][2][3] = 0 * intensity / 100; 
                
                rgb[8][0][3] = 0 * intensity / 100;
                rgb[8][1][3] = 0 * intensity / 100;
                rgb[8][2][3] = 0 * intensity / 100; 
                
                rgb[9][0][3] = 0 * intensity / 100;
                rgb[9][1][3] = 0 * intensity / 100;
                rgb[9][2][3] = 0 * intensity / 100; 
                
                rgb[10][0][3] = 215 * intensity / 100;
                rgb[10][1][3] = 80 * intensity / 100;
                rgb[10][2][3] = 156 * intensity / 100; 
                
                rgb[11][0][3] = 215 * intensity / 100;
                rgb[11][1][3] = 80 * intensity / 100;
                rgb[11][2][3] = 156 * intensity / 100; 
                
                rgb[12][0][3] = 215 * intensity / 100;
                rgb[12][1][3] = 80 * intensity / 100;
                rgb[12][2][3] = 156 * intensity / 100; 
                
                rgb[13][0][3] = 215 * intensity / 100;
                rgb[13][1][3] = 80 * intensity / 100;
                rgb[13][2][3] = 156 * intensity / 100; 
                
                rgb[14][0][3] = 0 * intensity / 100;
                rgb[14][1][3] = 0 * intensity / 100;
                rgb[14][2][3] = 0 * intensity / 100; 
                
                rgb[15][0][3] = 0 * intensity / 100;
                rgb[15][1][3] = 0 * intensity / 100;
                rgb[15][2][3] = 0 * intensity / 100; 
                
                rgb[16][0][3] = 0 * intensity / 100;
                rgb[16][1][3] = 0 * intensity / 100;
                rgb[16][2][3] = 0 * intensity / 100; 
                
                rgb[17][0][3] = 0 * intensity / 100;
                rgb[17][1][3] = 0 * intensity / 100;
                rgb[17][2][3] = 0 * intensity / 100; 
                
                rgb[18][0][3] = 0 * intensity / 100;
                rgb[18][1][3] = 0 * intensity / 100;
                rgb[18][2][3] = 0 * intensity / 100; 
                
                rgb[19][0][3] = 215 * intensity / 100;
                rgb[19][1][3] = 80 * intensity / 100;
                rgb[19][2][3] = 156 * intensity / 100; 
                
                rgb[20][0][3] = 215 * intensity / 100;
                rgb[20][1][3] = 80 * intensity / 100;
                rgb[20][2][3] = 156 * intensity / 100; 
                
                rgb[21][0][3] = 215 * intensity / 100;
                rgb[21][1][3] = 80 * intensity / 100;
                rgb[21][2][3] = 156 * intensity / 100; 
                
                rgb[22][0][3] = 0 * intensity / 100;
                rgb[22][1][3] = 0 * intensity / 100;
                rgb[22][2][3] = 0 * intensity / 100; 
                
                rgb[23][0][3] = 0 * intensity / 100;
                rgb[23][1][3] = 0 * intensity / 100;
                rgb[23][2][3] = 0 * intensity / 100; 
                
                rgb[24][0][3] = 0 * intensity / 100;
                rgb[24][1][3] = 0 * intensity / 100;
                rgb[24][2][3] = 0 * intensity / 100; 
                
                rgb[25][0][3] = 0 * intensity / 100;
                rgb[25][1][3] = 0 * intensity / 100;
                rgb[25][2][3] = 0 * intensity / 100; 
                
                rgb[26][0][3] = 215 * intensity / 100;
                rgb[26][1][3] = 80 * intensity / 100;
                rgb[26][2][3] = 156 * intensity / 100; 
                
                rgb[27][0][3] = 215 * intensity / 100;
                rgb[27][1][3] = 80 * intensity / 100;
                rgb[27][2][3] = 156 * intensity / 100; 
                
                rgb[28][0][3] = 215 * intensity / 100;
                rgb[28][1][3] = 80 * intensity / 100;
                rgb[28][2][3] = 156 * intensity / 100; 
                
                rgb[29][0][3] = 0 * intensity / 100;
                rgb[29][1][3] = 0 * intensity / 100;
                rgb[29][2][3] = 0 * intensity / 100; 
                
                rgb[30][0][3] = 0 * intensity / 100;
                rgb[30][1][3] = 0 * intensity / 100;
                rgb[30][2][3] = 0 * intensity / 100; 
                
                rgb[31][0][3] = 0 * intensity / 100;
                rgb[31][1][3] = 0 * intensity / 100;
                rgb[31][2][3] = 0 * intensity / 100; 
                
                rgb[32][0][3] = 0 * intensity / 100;
                rgb[32][1][3] = 0 * intensity / 100;
                rgb[32][2][3] = 0 * intensity / 100; 
                
                rgb[33][0][3] = 0 * intensity / 100;
                rgb[33][1][3] = 0 * intensity / 100;
                rgb[33][2][3] = 0 * intensity / 100; 
                
                rgb[34][0][3] = 0 * intensity / 100;
                rgb[34][1][3] = 0 * intensity / 100;
                rgb[34][2][3] = 0 * intensity / 100; 
                
                rgb[35][0][3] = 0 * intensity / 100;
                rgb[35][1][3] = 0 * intensity / 100;
                rgb[35][2][3] = 0 * intensity / 100; 
                
                rgb[36][0][3] = 0 * intensity / 100;
                rgb[36][1][3] = 0 * intensity / 100;
                rgb[36][2][3] = 0 * intensity / 100; 
                
                rgb[37][0][3] = 0 * intensity / 100;
                rgb[37][1][3] = 0 * intensity / 100;
                rgb[37][2][3] = 0 * intensity / 100; 
                
                rgb[38][0][3] = 0 * intensity / 100;
                rgb[38][1][3] = 0 * intensity / 100;
                rgb[38][2][3] = 0 * intensity / 100; 
                
                rgb[39][0][3] = 0 * intensity / 100;
                rgb[39][1][3] = 0 * intensity / 100;
                rgb[39][2][3] = 0 * intensity / 100; 
                
                rgb[40][0][3] = 0 * intensity / 100;
                rgb[40][1][3] = 0 * intensity / 100;
                rgb[40][2][3] = 0 * intensity / 100; 
                
                rgb[41][0][3] = 0 * intensity / 100;
                rgb[41][1][3] = 0 * intensity / 100;
                rgb[41][2][3] = 0 * intensity / 100; 
                
                rgb[42][0][3] = 0 * intensity / 100;
                rgb[42][1][3] = 0 * intensity / 100;
                rgb[42][2][3] = 0 * intensity / 100; 
                
                rgb[43][0][3] = 0 * intensity / 100;
                rgb[43][1][3] = 0 * intensity / 100;
                rgb[43][2][3] = 0 * intensity / 100; 
                
                rgb[44][0][3] = 0 * intensity / 100;
                rgb[44][1][3] = 0 * intensity / 100;
                rgb[44][2][3] = 0 * intensity / 100; 
                
                rgb[45][0][3] = 0 * intensity / 100;
                rgb[45][1][3] = 0 * intensity / 100;
                rgb[45][2][3] = 0 * intensity / 100; 
                
                rgb[46][0][3] = 0 * intensity / 100;
                rgb[46][1][3] = 0 * intensity / 100;
                rgb[46][2][3] = 0 * intensity / 100; 
                
                rgb[47][0][3] = 0 * intensity / 100;
                rgb[47][1][3] = 0 * intensity / 100;
                rgb[47][2][3] = 0 * intensity / 100; 
                
                rgb[48][0][3] = 0 * intensity / 100;
                rgb[48][1][3] = 0 * intensity / 100;
                rgb[48][2][3] = 0 * intensity / 100; 
                
                rgb[49][0][3] = 0 * intensity / 100;
                rgb[49][1][3] = 0 * intensity / 100;
                rgb[49][2][3] = 0 * intensity / 100; 
                
                rgb[50][0][3] = 0 * intensity / 100;
                rgb[50][1][3] = 0 * intensity / 100;
                rgb[50][2][3] = 0 * intensity / 100; 
                
                rgb[51][0][3] = 0 * intensity / 100;
                rgb[51][1][3] = 0 * intensity / 100;
                rgb[51][2][3] = 0 * intensity / 100; 
                
                rgb[52][0][3] = 0 * intensity / 100;
                rgb[52][1][3] = 0 * intensity / 100;
                rgb[52][2][3] = 0 * intensity / 100; 
                
                rgb[53][0][3] = 0 * intensity / 100;
                rgb[53][1][3] = 0 * intensity / 100;
                rgb[53][2][3] = 0 * intensity / 100; 
                
                rgb[54][0][3] = 0 * intensity / 100;
                rgb[54][1][3] = 0 * intensity / 100;
                rgb[54][2][3] = 0 * intensity / 100; 
                
                rgb[55][0][3] = 0 * intensity / 100;
                rgb[55][1][3] = 0 * intensity / 100;
                rgb[55][2][3] = 0 * intensity / 100; 
                
                rgb[56][0][3] = 0 * intensity / 100;
                rgb[56][1][3] = 0 * intensity / 100;
                rgb[56][2][3] = 0 * intensity / 100; 
                
                rgb[57][0][3] = 0 * intensity / 100;
                rgb[57][1][3] = 0 * intensity / 100;
                rgb[57][2][3] = 0 * intensity / 100; 
                
                rgb[58][0][3] = 0 * intensity / 100;
                rgb[58][1][3] = 0 * intensity / 100;
                rgb[58][2][3] = 0 * intensity / 100; 
                
                rgb[59][0][3] = 0 * intensity / 100;
                rgb[59][1][3] = 0 * intensity / 100;
                rgb[59][2][3] = 0 * intensity / 100; 
                
                rgb[60][0][3] = 0 * intensity / 100;
                rgb[60][1][3] = 0 * intensity / 100;
                rgb[60][2][3] = 0 * intensity / 100; 
                
                rgb[61][0][3] = 0 * intensity / 100;
                rgb[61][1][3] = 0 * intensity / 100;
                rgb[61][2][3] = 0 * intensity / 100; 
                
                rgb[62][0][3] = 0 * intensity / 100;
                rgb[62][1][3] = 0 * intensity / 100;
                rgb[62][2][3] = 0 * intensity / 100; 
                
                rgb[63][0][3] = 0 * intensity / 100;
                rgb[63][1][3] = 0 * intensity / 100;
                rgb[63][2][3] = 0 * intensity / 100; 
                

        frameTime[3] = 100;

    
                rgb[0][0][4] = 0 * intensity / 100;
                rgb[0][1][4] = 0 * intensity / 100;
                rgb[0][2][4] = 0 * intensity / 100; 
                
                rgb[1][0][4] = 0 * intensity / 100;
                rgb[1][1][4] = 0 * intensity / 100;
                rgb[1][2][4] = 0 * intensity / 100; 
                
                rgb[2][0][4] = 0 * intensity / 100;
                rgb[2][1][4] = 0 * intensity / 100;
                rgb[2][2][4] = 0 * intensity / 100; 
                
                rgb[3][0][4] = 0 * intensity / 100;
                rgb[3][1][4] = 0 * intensity / 100;
                rgb[3][2][4] = 0 * intensity / 100; 
                
                rgb[4][0][4] = 0 * intensity / 100;
                rgb[4][1][4] = 0 * intensity / 100;
                rgb[4][2][4] = 0 * intensity / 100; 
                
                rgb[5][0][4] = 0 * intensity / 100;
                rgb[5][1][4] = 0 * intensity / 100;
                rgb[5][2][4] = 0 * intensity / 100; 
                
                rgb[6][0][4] = 0 * intensity / 100;
                rgb[6][1][4] = 0 * intensity / 100;
                rgb[6][2][4] = 0 * intensity / 100; 
                
                rgb[7][0][4] = 0 * intensity / 100;
                rgb[7][1][4] = 0 * intensity / 100;
                rgb[7][2][4] = 0 * intensity / 100; 
                
                rgb[8][0][4] = 0 * intensity / 100;
                rgb[8][1][4] = 0 * intensity / 100;
                rgb[8][2][4] = 0 * intensity / 100; 
                
                rgb[9][0][4] = 0 * intensity / 100;
                rgb[9][1][4] = 0 * intensity / 100;
                rgb[9][2][4] = 0 * intensity / 100; 
                
                rgb[10][0][4] = 0 * intensity / 100;
                rgb[10][1][4] = 0 * intensity / 100;
                rgb[10][2][4] = 0 * intensity / 100; 
                
                rgb[11][0][4] = 0 * intensity / 100;
                rgb[11][1][4] = 0 * intensity / 100;
                rgb[11][2][4] = 0 * intensity / 100; 
                
                rgb[12][0][4] = 0 * intensity / 100;
                rgb[12][1][4] = 0 * intensity / 100;
                rgb[12][2][4] = 0 * intensity / 100; 
                
                rgb[13][0][4] = 0 * intensity / 100;
                rgb[13][1][4] = 0 * intensity / 100;
                rgb[13][2][4] = 0 * intensity / 100; 
                
                rgb[14][0][4] = 0 * intensity / 100;
                rgb[14][1][4] = 0 * intensity / 100;
                rgb[14][2][4] = 0 * intensity / 100; 
                
                rgb[15][0][4] = 0 * intensity / 100;
                rgb[15][1][4] = 0 * intensity / 100;
                rgb[15][2][4] = 0 * intensity / 100; 
                
                rgb[16][0][4] = 0 * intensity / 100;
                rgb[16][1][4] = 0 * intensity / 100;
                rgb[16][2][4] = 0 * intensity / 100; 
                
                rgb[17][0][4] = 0 * intensity / 100;
                rgb[17][1][4] = 0 * intensity / 100;
                rgb[17][2][4] = 0 * intensity / 100; 
                
                rgb[18][0][4] = 0 * intensity / 100;
                rgb[18][1][4] = 0 * intensity / 100;
                rgb[18][2][4] = 0 * intensity / 100; 
                
                rgb[19][0][4] = 0 * intensity / 100;
                rgb[19][1][4] = 0 * intensity / 100;
                rgb[19][2][4] = 0 * intensity / 100; 
                
                rgb[20][0][4] = 0 * intensity / 100;
                rgb[20][1][4] = 0 * intensity / 100;
                rgb[20][2][4] = 0 * intensity / 100; 
                
                rgb[21][0][4] = 0 * intensity / 100;
                rgb[21][1][4] = 0 * intensity / 100;
                rgb[21][2][4] = 0 * intensity / 100; 
                
                rgb[22][0][4] = 0 * intensity / 100;
                rgb[22][1][4] = 0 * intensity / 100;
                rgb[22][2][4] = 0 * intensity / 100; 
                
                rgb[23][0][4] = 0 * intensity / 100;
                rgb[23][1][4] = 0 * intensity / 100;
                rgb[23][2][4] = 0 * intensity / 100; 
                
                rgb[24][0][4] = 0 * intensity / 100;
                rgb[24][1][4] = 0 * intensity / 100;
                rgb[24][2][4] = 0 * intensity / 100; 
                
                rgb[25][0][4] = 0 * intensity / 100;
                rgb[25][1][4] = 0 * intensity / 100;
                rgb[25][2][4] = 0 * intensity / 100; 
                
                rgb[26][0][4] = 0 * intensity / 100;
                rgb[26][1][4] = 0 * intensity / 100;
                rgb[26][2][4] = 0 * intensity / 100; 
                
                rgb[27][0][4] = 0 * intensity / 100;
                rgb[27][1][4] = 0 * intensity / 100;
                rgb[27][2][4] = 0 * intensity / 100; 
                
                rgb[28][0][4] = 0 * intensity / 100;
                rgb[28][1][4] = 0 * intensity / 100;
                rgb[28][2][4] = 0 * intensity / 100; 
                
                rgb[29][0][4] = 0 * intensity / 100;
                rgb[29][1][4] = 0 * intensity / 100;
                rgb[29][2][4] = 0 * intensity / 100; 
                
                rgb[30][0][4] = 0 * intensity / 100;
                rgb[30][1][4] = 0 * intensity / 100;
                rgb[30][2][4] = 0 * intensity / 100; 
                
                rgb[31][0][4] = 0 * intensity / 100;
                rgb[31][1][4] = 0 * intensity / 100;
                rgb[31][2][4] = 0 * intensity / 100; 
                
                rgb[32][0][4] = 0 * intensity / 100;
                rgb[32][1][4] = 0 * intensity / 100;
                rgb[32][2][4] = 0 * intensity / 100; 
                
                rgb[33][0][4] = 0 * intensity / 100;
                rgb[33][1][4] = 0 * intensity / 100;
                rgb[33][2][4] = 0 * intensity / 100; 
                
                rgb[34][0][4] = 0 * intensity / 100;
                rgb[34][1][4] = 0 * intensity / 100;
                rgb[34][2][4] = 0 * intensity / 100; 
                
                rgb[35][0][4] = 0 * intensity / 100;
                rgb[35][1][4] = 0 * intensity / 100;
                rgb[35][2][4] = 0 * intensity / 100; 
                
                rgb[36][0][4] = 0 * intensity / 100;
                rgb[36][1][4] = 0 * intensity / 100;
                rgb[36][2][4] = 0 * intensity / 100; 
                
                rgb[37][0][4] = 0 * intensity / 100;
                rgb[37][1][4] = 0 * intensity / 100;
                rgb[37][2][4] = 0 * intensity / 100; 
                
                rgb[38][0][4] = 0 * intensity / 100;
                rgb[38][1][4] = 0 * intensity / 100;
                rgb[38][2][4] = 0 * intensity / 100; 
                
                rgb[39][0][4] = 0 * intensity / 100;
                rgb[39][1][4] = 0 * intensity / 100;
                rgb[39][2][4] = 0 * intensity / 100; 
                
                rgb[40][0][4] = 0 * intensity / 100;
                rgb[40][1][4] = 0 * intensity / 100;
                rgb[40][2][4] = 0 * intensity / 100; 
                
                rgb[41][0][4] = 0 * intensity / 100;
                rgb[41][1][4] = 0 * intensity / 100;
                rgb[41][2][4] = 0 * intensity / 100; 
                
                rgb[42][0][4] = 0 * intensity / 100;
                rgb[42][1][4] = 0 * intensity / 100;
                rgb[42][2][4] = 0 * intensity / 100; 
                
                rgb[43][0][4] = 0 * intensity / 100;
                rgb[43][1][4] = 0 * intensity / 100;
                rgb[43][2][4] = 0 * intensity / 100; 
                
                rgb[44][0][4] = 0 * intensity / 100;
                rgb[44][1][4] = 0 * intensity / 100;
                rgb[44][2][4] = 0 * intensity / 100; 
                
                rgb[45][0][4] = 0 * intensity / 100;
                rgb[45][1][4] = 0 * intensity / 100;
                rgb[45][2][4] = 0 * intensity / 100; 
                
                rgb[46][0][4] = 0 * intensity / 100;
                rgb[46][1][4] = 0 * intensity / 100;
                rgb[46][2][4] = 0 * intensity / 100; 
                
                rgb[47][0][4] = 0 * intensity / 100;
                rgb[47][1][4] = 0 * intensity / 100;
                rgb[47][2][4] = 0 * intensity / 100; 
                
                rgb[48][0][4] = 0 * intensity / 100;
                rgb[48][1][4] = 0 * intensity / 100;
                rgb[48][2][4] = 0 * intensity / 100; 
                
                rgb[49][0][4] = 0 * intensity / 100;
                rgb[49][1][4] = 0 * intensity / 100;
                rgb[49][2][4] = 0 * intensity / 100; 
                
                rgb[50][0][4] = 0 * intensity / 100;
                rgb[50][1][4] = 0 * intensity / 100;
                rgb[50][2][4] = 0 * intensity / 100; 
                
                rgb[51][0][4] = 0 * intensity / 100;
                rgb[51][1][4] = 0 * intensity / 100;
                rgb[51][2][4] = 0 * intensity / 100; 
                
                rgb[52][0][4] = 0 * intensity / 100;
                rgb[52][1][4] = 0 * intensity / 100;
                rgb[52][2][4] = 0 * intensity / 100; 
                
                rgb[53][0][4] = 0 * intensity / 100;
                rgb[53][1][4] = 0 * intensity / 100;
                rgb[53][2][4] = 0 * intensity / 100; 
                
                rgb[54][0][4] = 0 * intensity / 100;
                rgb[54][1][4] = 0 * intensity / 100;
                rgb[54][2][4] = 0 * intensity / 100; 
                
                rgb[55][0][4] = 0 * intensity / 100;
                rgb[55][1][4] = 0 * intensity / 100;
                rgb[55][2][4] = 0 * intensity / 100; 
                
                rgb[56][0][4] = 0 * intensity / 100;
                rgb[56][1][4] = 0 * intensity / 100;
                rgb[56][2][4] = 0 * intensity / 100; 
                
                rgb[57][0][4] = 0 * intensity / 100;
                rgb[57][1][4] = 0 * intensity / 100;
                rgb[57][2][4] = 0 * intensity / 100; 
                
                rgb[58][0][4] = 0 * intensity / 100;
                rgb[58][1][4] = 0 * intensity / 100;
                rgb[58][2][4] = 0 * intensity / 100; 
                
                rgb[59][0][4] = 0 * intensity / 100;
                rgb[59][1][4] = 0 * intensity / 100;
                rgb[59][2][4] = 0 * intensity / 100; 
                
                rgb[60][0][4] = 0 * intensity / 100;
                rgb[60][1][4] = 0 * intensity / 100;
                rgb[60][2][4] = 0 * intensity / 100; 
                
                rgb[61][0][4] = 0 * intensity / 100;
                rgb[61][1][4] = 0 * intensity / 100;
                rgb[61][2][4] = 0 * intensity / 100; 
                
                rgb[62][0][4] = 0 * intensity / 100;
                rgb[62][1][4] = 0 * intensity / 100;
                rgb[62][2][4] = 0 * intensity / 100; 
                
                rgb[63][0][4] = 0 * intensity / 100;
                rgb[63][1][4] = 0 * intensity / 100;
                rgb[63][2][4] = 0 * intensity / 100; 
                
                rgb[0][0][4] = 0 * intensity / 100;
                rgb[0][1][4] = 0 * intensity / 100;
                rgb[0][2][4] = 0 * intensity / 100; 
                
                rgb[1][0][4] = 215 * intensity / 100;
                rgb[1][1][4] = 80 * intensity / 100;
                rgb[1][2][4] = 156 * intensity / 100; 
                
                rgb[2][0][4] = 0 * intensity / 100;
                rgb[2][1][4] = 0 * intensity / 100;
                rgb[2][2][4] = 0 * intensity / 100; 
                
                rgb[3][0][4] = 0 * intensity / 100;
                rgb[3][1][4] = 0 * intensity / 100;
                rgb[3][2][4] = 0 * intensity / 100; 
                
                rgb[4][0][4] = 0 * intensity / 100;
                rgb[4][1][4] = 0 * intensity / 100;
                rgb[4][2][4] = 0 * intensity / 100; 
                
                rgb[5][0][4] = 0 * intensity / 100;
                rgb[5][1][4] = 0 * intensity / 100;
                rgb[5][2][4] = 0 * intensity / 100; 
                
                rgb[6][0][4] = 0 * intensity / 100;
                rgb[6][1][4] = 0 * intensity / 100;
                rgb[6][2][4] = 0 * intensity / 100; 
                
                rgb[7][0][4] = 0 * intensity / 100;
                rgb[7][1][4] = 0 * intensity / 100;
                rgb[7][2][4] = 0 * intensity / 100; 
                
                rgb[8][0][4] = 0 * intensity / 100;
                rgb[8][1][4] = 0 * intensity / 100;
                rgb[8][2][4] = 0 * intensity / 100; 
                
                rgb[9][0][4] = 0 * intensity / 100;
                rgb[9][1][4] = 0 * intensity / 100;
                rgb[9][2][4] = 0 * intensity / 100; 
                
                rgb[10][0][4] = 0 * intensity / 100;
                rgb[10][1][4] = 0 * intensity / 100;
                rgb[10][2][4] = 0 * intensity / 100; 
                
                rgb[11][0][4] = 0 * intensity / 100;
                rgb[11][1][4] = 0 * intensity / 100;
                rgb[11][2][4] = 0 * intensity / 100; 
                
                rgb[12][0][4] = 0 * intensity / 100;
                rgb[12][1][4] = 0 * intensity / 100;
                rgb[12][2][4] = 0 * intensity / 100; 
                
                rgb[13][0][4] = 0 * intensity / 100;
                rgb[13][1][4] = 0 * intensity / 100;
                rgb[13][2][4] = 0 * intensity / 100; 
                
                rgb[14][0][4] = 215 * intensity / 100;
                rgb[14][1][4] = 80 * intensity / 100;
                rgb[14][2][4] = 156 * intensity / 100; 
                
                rgb[15][0][4] = 0 * intensity / 100;
                rgb[15][1][4] = 0 * intensity / 100;
                rgb[15][2][4] = 0 * intensity / 100; 
                
                rgb[16][0][4] = 0 * intensity / 100;
                rgb[16][1][4] = 0 * intensity / 100;
                rgb[16][2][4] = 0 * intensity / 100; 
                
                rgb[17][0][4] = 0 * intensity / 100;
                rgb[17][1][4] = 0 * intensity / 100;
                rgb[17][2][4] = 0 * intensity / 100; 
                
                rgb[18][0][4] = 215 * intensity / 100;
                rgb[18][1][4] = 80 * intensity / 100;
                rgb[18][2][4] = 156 * intensity / 100; 
                
                rgb[19][0][4] = 215 * intensity / 100;
                rgb[19][1][4] = 80 * intensity / 100;
                rgb[19][2][4] = 156 * intensity / 100; 
                
                rgb[20][0][4] = 215 * intensity / 100;
                rgb[20][1][4] = 80 * intensity / 100;
                rgb[20][2][4] = 156 * intensity / 100; 
                
                rgb[21][0][4] = 215 * intensity / 100;
                rgb[21][1][4] = 80 * intensity / 100;
                rgb[21][2][4] = 156 * intensity / 100; 
                
                rgb[22][0][4] = 0 * intensity / 100;
                rgb[22][1][4] = 0 * intensity / 100;
                rgb[22][2][4] = 0 * intensity / 100; 
                
                rgb[23][0][4] = 0 * intensity / 100;
                rgb[23][1][4] = 0 * intensity / 100;
                rgb[23][2][4] = 0 * intensity / 100; 
                
                rgb[24][0][4] = 0 * intensity / 100;
                rgb[24][1][4] = 0 * intensity / 100;
                rgb[24][2][4] = 0 * intensity / 100; 
                
                rgb[25][0][4] = 0 * intensity / 100;
                rgb[25][1][4] = 0 * intensity / 100;
                rgb[25][2][4] = 0 * intensity / 100; 
                
                rgb[26][0][4] = 215 * intensity / 100;
                rgb[26][1][4] = 80 * intensity / 100;
                rgb[26][2][4] = 156 * intensity / 100; 
                
                rgb[27][0][4] = 215 * intensity / 100;
                rgb[27][1][4] = 80 * intensity / 100;
                rgb[27][2][4] = 156 * intensity / 100; 
                
                rgb[28][0][4] = 215 * intensity / 100;
                rgb[28][1][4] = 80 * intensity / 100;
                rgb[28][2][4] = 156 * intensity / 100; 
                
                rgb[29][0][4] = 215 * intensity / 100;
                rgb[29][1][4] = 80 * intensity / 100;
                rgb[29][2][4] = 156 * intensity / 100; 
                
                rgb[30][0][4] = 0 * intensity / 100;
                rgb[30][1][4] = 0 * intensity / 100;
                rgb[30][2][4] = 0 * intensity / 100; 
                
                rgb[31][0][4] = 0 * intensity / 100;
                rgb[31][1][4] = 0 * intensity / 100;
                rgb[31][2][4] = 0 * intensity / 100; 
                
                rgb[32][0][4] = 0 * intensity / 100;
                rgb[32][1][4] = 0 * intensity / 100;
                rgb[32][2][4] = 0 * intensity / 100; 
                
                rgb[33][0][4] = 0 * intensity / 100;
                rgb[33][1][4] = 0 * intensity / 100;
                rgb[33][2][4] = 0 * intensity / 100; 
                
                rgb[34][0][4] = 0 * intensity / 100;
                rgb[34][1][4] = 0 * intensity / 100;
                rgb[34][2][4] = 0 * intensity / 100; 
                
                rgb[35][0][4] = 0 * intensity / 100;
                rgb[35][1][4] = 0 * intensity / 100;
                rgb[35][2][4] = 0 * intensity / 100; 
                
                rgb[36][0][4] = 0 * intensity / 100;
                rgb[36][1][4] = 0 * intensity / 100;
                rgb[36][2][4] = 0 * intensity / 100; 
                
                rgb[37][0][4] = 0 * intensity / 100;
                rgb[37][1][4] = 0 * intensity / 100;
                rgb[37][2][4] = 0 * intensity / 100; 
                
                rgb[38][0][4] = 0 * intensity / 100;
                rgb[38][1][4] = 0 * intensity / 100;
                rgb[38][2][4] = 0 * intensity / 100; 
                
                rgb[39][0][4] = 0 * intensity / 100;
                rgb[39][1][4] = 0 * intensity / 100;
                rgb[39][2][4] = 0 * intensity / 100; 
                
                rgb[40][0][4] = 0 * intensity / 100;
                rgb[40][1][4] = 0 * intensity / 100;
                rgb[40][2][4] = 0 * intensity / 100; 
                
                rgb[41][0][4] = 0 * intensity / 100;
                rgb[41][1][4] = 0 * intensity / 100;
                rgb[41][2][4] = 0 * intensity / 100; 
                
                rgb[42][0][4] = 0 * intensity / 100;
                rgb[42][1][4] = 0 * intensity / 100;
                rgb[42][2][4] = 0 * intensity / 100; 
                
                rgb[43][0][4] = 0 * intensity / 100;
                rgb[43][1][4] = 0 * intensity / 100;
                rgb[43][2][4] = 0 * intensity / 100; 
                
                rgb[44][0][4] = 0 * intensity / 100;
                rgb[44][1][4] = 0 * intensity / 100;
                rgb[44][2][4] = 0 * intensity / 100; 
                
                rgb[45][0][4] = 0 * intensity / 100;
                rgb[45][1][4] = 0 * intensity / 100;
                rgb[45][2][4] = 0 * intensity / 100; 
                
                rgb[46][0][4] = 0 * intensity / 100;
                rgb[46][1][4] = 0 * intensity / 100;
                rgb[46][2][4] = 0 * intensity / 100; 
                
                rgb[47][0][4] = 0 * intensity / 100;
                rgb[47][1][4] = 0 * intensity / 100;
                rgb[47][2][4] = 0 * intensity / 100; 
                
                rgb[48][0][4] = 0 * intensity / 100;
                rgb[48][1][4] = 0 * intensity / 100;
                rgb[48][2][4] = 0 * intensity / 100; 
                
                rgb[49][0][4] = 0 * intensity / 100;
                rgb[49][1][4] = 0 * intensity / 100;
                rgb[49][2][4] = 0 * intensity / 100; 
                
                rgb[50][0][4] = 0 * intensity / 100;
                rgb[50][1][4] = 0 * intensity / 100;
                rgb[50][2][4] = 0 * intensity / 100; 
                
                rgb[51][0][4] = 0 * intensity / 100;
                rgb[51][1][4] = 0 * intensity / 100;
                rgb[51][2][4] = 0 * intensity / 100; 
                
                rgb[52][0][4] = 0 * intensity / 100;
                rgb[52][1][4] = 0 * intensity / 100;
                rgb[52][2][4] = 0 * intensity / 100; 
                
                rgb[53][0][4] = 0 * intensity / 100;
                rgb[53][1][4] = 0 * intensity / 100;
                rgb[53][2][4] = 0 * intensity / 100; 
                
                rgb[54][0][4] = 0 * intensity / 100;
                rgb[54][1][4] = 0 * intensity / 100;
                rgb[54][2][4] = 0 * intensity / 100; 
                
                rgb[55][0][4] = 0 * intensity / 100;
                rgb[55][1][4] = 0 * intensity / 100;
                rgb[55][2][4] = 0 * intensity / 100; 
                
                rgb[56][0][4] = 0 * intensity / 100;
                rgb[56][1][4] = 0 * intensity / 100;
                rgb[56][2][4] = 0 * intensity / 100; 
                
                rgb[57][0][4] = 0 * intensity / 100;
                rgb[57][1][4] = 0 * intensity / 100;
                rgb[57][2][4] = 0 * intensity / 100; 
                
                rgb[58][0][4] = 0 * intensity / 100;
                rgb[58][1][4] = 0 * intensity / 100;
                rgb[58][2][4] = 0 * intensity / 100; 
                
                rgb[59][0][4] = 0 * intensity / 100;
                rgb[59][1][4] = 0 * intensity / 100;
                rgb[59][2][4] = 0 * intensity / 100; 
                
                rgb[60][0][4] = 0 * intensity / 100;
                rgb[60][1][4] = 0 * intensity / 100;
                rgb[60][2][4] = 0 * intensity / 100; 
                
                rgb[61][0][4] = 0 * intensity / 100;
                rgb[61][1][4] = 0 * intensity / 100;
                rgb[61][2][4] = 0 * intensity / 100; 
                
                rgb[62][0][4] = 0 * intensity / 100;
                rgb[62][1][4] = 0 * intensity / 100;
                rgb[62][2][4] = 0 * intensity / 100; 
                
                rgb[63][0][4] = 0 * intensity / 100;
                rgb[63][1][4] = 0 * intensity / 100;
                rgb[63][2][4] = 0 * intensity / 100; 
                

        frameTime[4] = 150;

    
                rgb[0][0][5] = 0 * intensity / 100;
                rgb[0][1][5] = 0 * intensity / 100;
                rgb[0][2][5] = 0 * intensity / 100; 
                
                rgb[1][0][5] = 0 * intensity / 100;
                rgb[1][1][5] = 0 * intensity / 100;
                rgb[1][2][5] = 0 * intensity / 100; 
                
                rgb[2][0][5] = 0 * intensity / 100;
                rgb[2][1][5] = 0 * intensity / 100;
                rgb[2][2][5] = 0 * intensity / 100; 
                
                rgb[3][0][5] = 0 * intensity / 100;
                rgb[3][1][5] = 0 * intensity / 100;
                rgb[3][2][5] = 0 * intensity / 100; 
                
                rgb[4][0][5] = 0 * intensity / 100;
                rgb[4][1][5] = 0 * intensity / 100;
                rgb[4][2][5] = 0 * intensity / 100; 
                
                rgb[5][0][5] = 0 * intensity / 100;
                rgb[5][1][5] = 0 * intensity / 100;
                rgb[5][2][5] = 0 * intensity / 100; 
                
                rgb[6][0][5] = 0 * intensity / 100;
                rgb[6][1][5] = 0 * intensity / 100;
                rgb[6][2][5] = 0 * intensity / 100; 
                
                rgb[7][0][5] = 0 * intensity / 100;
                rgb[7][1][5] = 0 * intensity / 100;
                rgb[7][2][5] = 0 * intensity / 100; 
                
                rgb[8][0][5] = 0 * intensity / 100;
                rgb[8][1][5] = 0 * intensity / 100;
                rgb[8][2][5] = 0 * intensity / 100; 
                
                rgb[9][0][5] = 0 * intensity / 100;
                rgb[9][1][5] = 0 * intensity / 100;
                rgb[9][2][5] = 0 * intensity / 100; 
                
                rgb[10][0][5] = 0 * intensity / 100;
                rgb[10][1][5] = 0 * intensity / 100;
                rgb[10][2][5] = 0 * intensity / 100; 
                
                rgb[11][0][5] = 0 * intensity / 100;
                rgb[11][1][5] = 0 * intensity / 100;
                rgb[11][2][5] = 0 * intensity / 100; 
                
                rgb[12][0][5] = 0 * intensity / 100;
                rgb[12][1][5] = 0 * intensity / 100;
                rgb[12][2][5] = 0 * intensity / 100; 
                
                rgb[13][0][5] = 0 * intensity / 100;
                rgb[13][1][5] = 0 * intensity / 100;
                rgb[13][2][5] = 0 * intensity / 100; 
                
                rgb[14][0][5] = 0 * intensity / 100;
                rgb[14][1][5] = 0 * intensity / 100;
                rgb[14][2][5] = 0 * intensity / 100; 
                
                rgb[15][0][5] = 0 * intensity / 100;
                rgb[15][1][5] = 0 * intensity / 100;
                rgb[15][2][5] = 0 * intensity / 100; 
                
                rgb[16][0][5] = 0 * intensity / 100;
                rgb[16][1][5] = 0 * intensity / 100;
                rgb[16][2][5] = 0 * intensity / 100; 
                
                rgb[17][0][5] = 0 * intensity / 100;
                rgb[17][1][5] = 0 * intensity / 100;
                rgb[17][2][5] = 0 * intensity / 100; 
                
                rgb[18][0][5] = 0 * intensity / 100;
                rgb[18][1][5] = 0 * intensity / 100;
                rgb[18][2][5] = 0 * intensity / 100; 
                
                rgb[19][0][5] = 0 * intensity / 100;
                rgb[19][1][5] = 0 * intensity / 100;
                rgb[19][2][5] = 0 * intensity / 100; 
                
                rgb[20][0][5] = 0 * intensity / 100;
                rgb[20][1][5] = 0 * intensity / 100;
                rgb[20][2][5] = 0 * intensity / 100; 
                
                rgb[21][0][5] = 0 * intensity / 100;
                rgb[21][1][5] = 0 * intensity / 100;
                rgb[21][2][5] = 0 * intensity / 100; 
                
                rgb[22][0][5] = 0 * intensity / 100;
                rgb[22][1][5] = 0 * intensity / 100;
                rgb[22][2][5] = 0 * intensity / 100; 
                
                rgb[23][0][5] = 0 * intensity / 100;
                rgb[23][1][5] = 0 * intensity / 100;
                rgb[23][2][5] = 0 * intensity / 100; 
                
                rgb[24][0][5] = 0 * intensity / 100;
                rgb[24][1][5] = 0 * intensity / 100;
                rgb[24][2][5] = 0 * intensity / 100; 
                
                rgb[25][0][5] = 0 * intensity / 100;
                rgb[25][1][5] = 0 * intensity / 100;
                rgb[25][2][5] = 0 * intensity / 100; 
                
                rgb[26][0][5] = 0 * intensity / 100;
                rgb[26][1][5] = 0 * intensity / 100;
                rgb[26][2][5] = 0 * intensity / 100; 
                
                rgb[27][0][5] = 0 * intensity / 100;
                rgb[27][1][5] = 0 * intensity / 100;
                rgb[27][2][5] = 0 * intensity / 100; 
                
                rgb[28][0][5] = 0 * intensity / 100;
                rgb[28][1][5] = 0 * intensity / 100;
                rgb[28][2][5] = 0 * intensity / 100; 
                
                rgb[29][0][5] = 0 * intensity / 100;
                rgb[29][1][5] = 0 * intensity / 100;
                rgb[29][2][5] = 0 * intensity / 100; 
                
                rgb[30][0][5] = 0 * intensity / 100;
                rgb[30][1][5] = 0 * intensity / 100;
                rgb[30][2][5] = 0 * intensity / 100; 
                
                rgb[31][0][5] = 0 * intensity / 100;
                rgb[31][1][5] = 0 * intensity / 100;
                rgb[31][2][5] = 0 * intensity / 100; 
                
                rgb[32][0][5] = 0 * intensity / 100;
                rgb[32][1][5] = 0 * intensity / 100;
                rgb[32][2][5] = 0 * intensity / 100; 
                
                rgb[33][0][5] = 0 * intensity / 100;
                rgb[33][1][5] = 0 * intensity / 100;
                rgb[33][2][5] = 0 * intensity / 100; 
                
                rgb[34][0][5] = 0 * intensity / 100;
                rgb[34][1][5] = 0 * intensity / 100;
                rgb[34][2][5] = 0 * intensity / 100; 
                
                rgb[35][0][5] = 0 * intensity / 100;
                rgb[35][1][5] = 0 * intensity / 100;
                rgb[35][2][5] = 0 * intensity / 100; 
                
                rgb[36][0][5] = 0 * intensity / 100;
                rgb[36][1][5] = 0 * intensity / 100;
                rgb[36][2][5] = 0 * intensity / 100; 
                
                rgb[37][0][5] = 0 * intensity / 100;
                rgb[37][1][5] = 0 * intensity / 100;
                rgb[37][2][5] = 0 * intensity / 100; 
                
                rgb[38][0][5] = 0 * intensity / 100;
                rgb[38][1][5] = 0 * intensity / 100;
                rgb[38][2][5] = 0 * intensity / 100; 
                
                rgb[39][0][5] = 0 * intensity / 100;
                rgb[39][1][5] = 0 * intensity / 100;
                rgb[39][2][5] = 0 * intensity / 100; 
                
                rgb[40][0][5] = 0 * intensity / 100;
                rgb[40][1][5] = 0 * intensity / 100;
                rgb[40][2][5] = 0 * intensity / 100; 
                
                rgb[41][0][5] = 0 * intensity / 100;
                rgb[41][1][5] = 0 * intensity / 100;
                rgb[41][2][5] = 0 * intensity / 100; 
                
                rgb[42][0][5] = 0 * intensity / 100;
                rgb[42][1][5] = 0 * intensity / 100;
                rgb[42][2][5] = 0 * intensity / 100; 
                
                rgb[43][0][5] = 0 * intensity / 100;
                rgb[43][1][5] = 0 * intensity / 100;
                rgb[43][2][5] = 0 * intensity / 100; 
                
                rgb[44][0][5] = 0 * intensity / 100;
                rgb[44][1][5] = 0 * intensity / 100;
                rgb[44][2][5] = 0 * intensity / 100; 
                
                rgb[45][0][5] = 0 * intensity / 100;
                rgb[45][1][5] = 0 * intensity / 100;
                rgb[45][2][5] = 0 * intensity / 100; 
                
                rgb[46][0][5] = 0 * intensity / 100;
                rgb[46][1][5] = 0 * intensity / 100;
                rgb[46][2][5] = 0 * intensity / 100; 
                
                rgb[47][0][5] = 0 * intensity / 100;
                rgb[47][1][5] = 0 * intensity / 100;
                rgb[47][2][5] = 0 * intensity / 100; 
                
                rgb[48][0][5] = 0 * intensity / 100;
                rgb[48][1][5] = 0 * intensity / 100;
                rgb[48][2][5] = 0 * intensity / 100; 
                
                rgb[49][0][5] = 0 * intensity / 100;
                rgb[49][1][5] = 0 * intensity / 100;
                rgb[49][2][5] = 0 * intensity / 100; 
                
                rgb[50][0][5] = 0 * intensity / 100;
                rgb[50][1][5] = 0 * intensity / 100;
                rgb[50][2][5] = 0 * intensity / 100; 
                
                rgb[51][0][5] = 0 * intensity / 100;
                rgb[51][1][5] = 0 * intensity / 100;
                rgb[51][2][5] = 0 * intensity / 100; 
                
                rgb[52][0][5] = 0 * intensity / 100;
                rgb[52][1][5] = 0 * intensity / 100;
                rgb[52][2][5] = 0 * intensity / 100; 
                
                rgb[53][0][5] = 0 * intensity / 100;
                rgb[53][1][5] = 0 * intensity / 100;
                rgb[53][2][5] = 0 * intensity / 100; 
                
                rgb[54][0][5] = 0 * intensity / 100;
                rgb[54][1][5] = 0 * intensity / 100;
                rgb[54][2][5] = 0 * intensity / 100; 
                
                rgb[55][0][5] = 0 * intensity / 100;
                rgb[55][1][5] = 0 * intensity / 100;
                rgb[55][2][5] = 0 * intensity / 100; 
                
                rgb[56][0][5] = 0 * intensity / 100;
                rgb[56][1][5] = 0 * intensity / 100;
                rgb[56][2][5] = 0 * intensity / 100; 
                
                rgb[57][0][5] = 0 * intensity / 100;
                rgb[57][1][5] = 0 * intensity / 100;
                rgb[57][2][5] = 0 * intensity / 100; 
                
                rgb[58][0][5] = 0 * intensity / 100;
                rgb[58][1][5] = 0 * intensity / 100;
                rgb[58][2][5] = 0 * intensity / 100; 
                
                rgb[59][0][5] = 0 * intensity / 100;
                rgb[59][1][5] = 0 * intensity / 100;
                rgb[59][2][5] = 0 * intensity / 100; 
                
                rgb[60][0][5] = 0 * intensity / 100;
                rgb[60][1][5] = 0 * intensity / 100;
                rgb[60][2][5] = 0 * intensity / 100; 
                
                rgb[61][0][5] = 0 * intensity / 100;
                rgb[61][1][5] = 0 * intensity / 100;
                rgb[61][2][5] = 0 * intensity / 100; 
                
                rgb[62][0][5] = 0 * intensity / 100;
                rgb[62][1][5] = 0 * intensity / 100;
                rgb[62][2][5] = 0 * intensity / 100; 
                
                rgb[63][0][5] = 0 * intensity / 100;
                rgb[63][1][5] = 0 * intensity / 100;
                rgb[63][2][5] = 0 * intensity / 100; 
                
                rgb[0][0][5] = 0 * intensity / 100;
                rgb[0][1][5] = 0 * intensity / 100;
                rgb[0][2][5] = 0 * intensity / 100; 
                
                rgb[1][0][5] = 215 * intensity / 100;
                rgb[1][1][5] = 80 * intensity / 100;
                rgb[1][2][5] = 156 * intensity / 100; 
                
                rgb[2][0][5] = 0 * intensity / 100;
                rgb[2][1][5] = 0 * intensity / 100;
                rgb[2][2][5] = 0 * intensity / 100; 
                
                rgb[3][0][5] = 0 * intensity / 100;
                rgb[3][1][5] = 0 * intensity / 100;
                rgb[3][2][5] = 0 * intensity / 100; 
                
                rgb[4][0][5] = 0 * intensity / 100;
                rgb[4][1][5] = 0 * intensity / 100;
                rgb[4][2][5] = 0 * intensity / 100; 
                
                rgb[5][0][5] = 0 * intensity / 100;
                rgb[5][1][5] = 0 * intensity / 100;
                rgb[5][2][5] = 0 * intensity / 100; 
                
                rgb[6][0][5] = 0 * intensity / 100;
                rgb[6][1][5] = 0 * intensity / 100;
                rgb[6][2][5] = 0 * intensity / 100; 
                
                rgb[7][0][5] = 0 * intensity / 100;
                rgb[7][1][5] = 0 * intensity / 100;
                rgb[7][2][5] = 0 * intensity / 100; 
                
                rgb[8][0][5] = 0 * intensity / 100;
                rgb[8][1][5] = 0 * intensity / 100;
                rgb[8][2][5] = 0 * intensity / 100; 
                
                rgb[9][0][5] = 0 * intensity / 100;
                rgb[9][1][5] = 0 * intensity / 100;
                rgb[9][2][5] = 0 * intensity / 100; 
                
                rgb[10][0][5] = 0 * intensity / 100;
                rgb[10][1][5] = 0 * intensity / 100;
                rgb[10][2][5] = 0 * intensity / 100; 
                
                rgb[11][0][5] = 0 * intensity / 100;
                rgb[11][1][5] = 0 * intensity / 100;
                rgb[11][2][5] = 0 * intensity / 100; 
                
                rgb[12][0][5] = 0 * intensity / 100;
                rgb[12][1][5] = 0 * intensity / 100;
                rgb[12][2][5] = 0 * intensity / 100; 
                
                rgb[13][0][5] = 0 * intensity / 100;
                rgb[13][1][5] = 0 * intensity / 100;
                rgb[13][2][5] = 0 * intensity / 100; 
                
                rgb[14][0][5] = 215 * intensity / 100;
                rgb[14][1][5] = 80 * intensity / 100;
                rgb[14][2][5] = 156 * intensity / 100; 
                
                rgb[15][0][5] = 0 * intensity / 100;
                rgb[15][1][5] = 0 * intensity / 100;
                rgb[15][2][5] = 0 * intensity / 100; 
                
                rgb[16][0][5] = 0 * intensity / 100;
                rgb[16][1][5] = 0 * intensity / 100;
                rgb[16][2][5] = 0 * intensity / 100; 
                
                rgb[17][0][5] = 0 * intensity / 100;
                rgb[17][1][5] = 0 * intensity / 100;
                rgb[17][2][5] = 0 * intensity / 100; 
                
                rgb[18][0][5] = 215 * intensity / 100;
                rgb[18][1][5] = 80 * intensity / 100;
                rgb[18][2][5] = 156 * intensity / 100; 
                
                rgb[19][0][5] = 215 * intensity / 100;
                rgb[19][1][5] = 80 * intensity / 100;
                rgb[19][2][5] = 156 * intensity / 100; 
                
                rgb[20][0][5] = 215 * intensity / 100;
                rgb[20][1][5] = 80 * intensity / 100;
                rgb[20][2][5] = 156 * intensity / 100; 
                
                rgb[21][0][5] = 215 * intensity / 100;
                rgb[21][1][5] = 80 * intensity / 100;
                rgb[21][2][5] = 156 * intensity / 100; 
                
                rgb[22][0][5] = 0 * intensity / 100;
                rgb[22][1][5] = 0 * intensity / 100;
                rgb[22][2][5] = 0 * intensity / 100; 
                
                rgb[23][0][5] = 0 * intensity / 100;
                rgb[23][1][5] = 0 * intensity / 100;
                rgb[23][2][5] = 0 * intensity / 100; 
                
                rgb[24][0][5] = 0 * intensity / 100;
                rgb[24][1][5] = 0 * intensity / 100;
                rgb[24][2][5] = 0 * intensity / 100; 
                
                rgb[25][0][5] = 0 * intensity / 100;
                rgb[25][1][5] = 0 * intensity / 100;
                rgb[25][2][5] = 0 * intensity / 100; 
                
                rgb[26][0][5] = 215 * intensity / 100;
                rgb[26][1][5] = 80 * intensity / 100;
                rgb[26][2][5] = 156 * intensity / 100; 
                
                rgb[27][0][5] = 215 * intensity / 100;
                rgb[27][1][5] = 80 * intensity / 100;
                rgb[27][2][5] = 156 * intensity / 100; 
                
                rgb[28][0][5] = 215 * intensity / 100;
                rgb[28][1][5] = 80 * intensity / 100;
                rgb[28][2][5] = 156 * intensity / 100; 
                
                rgb[29][0][5] = 215 * intensity / 100;
                rgb[29][1][5] = 80 * intensity / 100;
                rgb[29][2][5] = 156 * intensity / 100; 
                
                rgb[30][0][5] = 0 * intensity / 100;
                rgb[30][1][5] = 0 * intensity / 100;
                rgb[30][2][5] = 0 * intensity / 100; 
                
                rgb[31][0][5] = 0 * intensity / 100;
                rgb[31][1][5] = 0 * intensity / 100;
                rgb[31][2][5] = 0 * intensity / 100; 
                
                rgb[32][0][5] = 0 * intensity / 100;
                rgb[32][1][5] = 0 * intensity / 100;
                rgb[32][2][5] = 0 * intensity / 100; 
                
                rgb[33][0][5] = 0 * intensity / 100;
                rgb[33][1][5] = 0 * intensity / 100;
                rgb[33][2][5] = 0 * intensity / 100; 
                
                rgb[34][0][5] = 0 * intensity / 100;
                rgb[34][1][5] = 0 * intensity / 100;
                rgb[34][2][5] = 0 * intensity / 100; 
                
                rgb[35][0][5] = 0 * intensity / 100;
                rgb[35][1][5] = 0 * intensity / 100;
                rgb[35][2][5] = 0 * intensity / 100; 
                
                rgb[36][0][5] = 0 * intensity / 100;
                rgb[36][1][5] = 0 * intensity / 100;
                rgb[36][2][5] = 0 * intensity / 100; 
                
                rgb[37][0][5] = 0 * intensity / 100;
                rgb[37][1][5] = 0 * intensity / 100;
                rgb[37][2][5] = 0 * intensity / 100; 
                
                rgb[38][0][5] = 0 * intensity / 100;
                rgb[38][1][5] = 0 * intensity / 100;
                rgb[38][2][5] = 0 * intensity / 100; 
                
                rgb[39][0][5] = 0 * intensity / 100;
                rgb[39][1][5] = 0 * intensity / 100;
                rgb[39][2][5] = 0 * intensity / 100; 
                
                rgb[40][0][5] = 0 * intensity / 100;
                rgb[40][1][5] = 0 * intensity / 100;
                rgb[40][2][5] = 0 * intensity / 100; 
                
                rgb[41][0][5] = 0 * intensity / 100;
                rgb[41][1][5] = 0 * intensity / 100;
                rgb[41][2][5] = 0 * intensity / 100; 
                
                rgb[42][0][5] = 0 * intensity / 100;
                rgb[42][1][5] = 0 * intensity / 100;
                rgb[42][2][5] = 0 * intensity / 100; 
                
                rgb[43][0][5] = 0 * intensity / 100;
                rgb[43][1][5] = 0 * intensity / 100;
                rgb[43][2][5] = 0 * intensity / 100; 
                
                rgb[44][0][5] = 0 * intensity / 100;
                rgb[44][1][5] = 0 * intensity / 100;
                rgb[44][2][5] = 0 * intensity / 100; 
                
                rgb[45][0][5] = 0 * intensity / 100;
                rgb[45][1][5] = 0 * intensity / 100;
                rgb[45][2][5] = 0 * intensity / 100; 
                
                rgb[46][0][5] = 0 * intensity / 100;
                rgb[46][1][5] = 0 * intensity / 100;
                rgb[46][2][5] = 0 * intensity / 100; 
                
                rgb[47][0][5] = 0 * intensity / 100;
                rgb[47][1][5] = 0 * intensity / 100;
                rgb[47][2][5] = 0 * intensity / 100; 
                
                rgb[48][0][5] = 0 * intensity / 100;
                rgb[48][1][5] = 0 * intensity / 100;
                rgb[48][2][5] = 0 * intensity / 100; 
                
                rgb[49][0][5] = 0 * intensity / 100;
                rgb[49][1][5] = 0 * intensity / 100;
                rgb[49][2][5] = 0 * intensity / 100; 
                
                rgb[50][0][5] = 0 * intensity / 100;
                rgb[50][1][5] = 0 * intensity / 100;
                rgb[50][2][5] = 0 * intensity / 100; 
                
                rgb[51][0][5] = 0 * intensity / 100;
                rgb[51][1][5] = 0 * intensity / 100;
                rgb[51][2][5] = 0 * intensity / 100; 
                
                rgb[52][0][5] = 0 * intensity / 100;
                rgb[52][1][5] = 0 * intensity / 100;
                rgb[52][2][5] = 0 * intensity / 100; 
                
                rgb[53][0][5] = 0 * intensity / 100;
                rgb[53][1][5] = 0 * intensity / 100;
                rgb[53][2][5] = 0 * intensity / 100; 
                
                rgb[54][0][5] = 0 * intensity / 100;
                rgb[54][1][5] = 0 * intensity / 100;
                rgb[54][2][5] = 0 * intensity / 100; 
                
                rgb[55][0][5] = 0 * intensity / 100;
                rgb[55][1][5] = 0 * intensity / 100;
                rgb[55][2][5] = 0 * intensity / 100; 
                
                rgb[56][0][5] = 0 * intensity / 100;
                rgb[56][1][5] = 0 * intensity / 100;
                rgb[56][2][5] = 0 * intensity / 100; 
                
                rgb[57][0][5] = 0 * intensity / 100;
                rgb[57][1][5] = 0 * intensity / 100;
                rgb[57][2][5] = 0 * intensity / 100; 
                
                rgb[58][0][5] = 0 * intensity / 100;
                rgb[58][1][5] = 0 * intensity / 100;
                rgb[58][2][5] = 0 * intensity / 100; 
                
                rgb[59][0][5] = 0 * intensity / 100;
                rgb[59][1][5] = 0 * intensity / 100;
                rgb[59][2][5] = 0 * intensity / 100; 
                
                rgb[60][0][5] = 0 * intensity / 100;
                rgb[60][1][5] = 0 * intensity / 100;
                rgb[60][2][5] = 0 * intensity / 100; 
                
                rgb[61][0][5] = 0 * intensity / 100;
                rgb[61][1][5] = 0 * intensity / 100;
                rgb[61][2][5] = 0 * intensity / 100; 
                
                rgb[62][0][5] = 0 * intensity / 100;
                rgb[62][1][5] = 0 * intensity / 100;
                rgb[62][2][5] = 0 * intensity / 100; 
                
                rgb[63][0][5] = 0 * intensity / 100;
                rgb[63][1][5] = 0 * intensity / 100;
                rgb[63][2][5] = 0 * intensity / 100; 
                

        frameTime[5] = 50;

    
                rgb[0][0][6] = 0 * intensity / 100;
                rgb[0][1][6] = 0 * intensity / 100;
                rgb[0][2][6] = 0 * intensity / 100; 
                
                rgb[1][0][6] = 0 * intensity / 100;
                rgb[1][1][6] = 0 * intensity / 100;
                rgb[1][2][6] = 0 * intensity / 100; 
                
                rgb[2][0][6] = 0 * intensity / 100;
                rgb[2][1][6] = 0 * intensity / 100;
                rgb[2][2][6] = 0 * intensity / 100; 
                
                rgb[3][0][6] = 0 * intensity / 100;
                rgb[3][1][6] = 0 * intensity / 100;
                rgb[3][2][6] = 0 * intensity / 100; 
                
                rgb[4][0][6] = 0 * intensity / 100;
                rgb[4][1][6] = 0 * intensity / 100;
                rgb[4][2][6] = 0 * intensity / 100; 
                
                rgb[5][0][6] = 0 * intensity / 100;
                rgb[5][1][6] = 0 * intensity / 100;
                rgb[5][2][6] = 0 * intensity / 100; 
                
                rgb[6][0][6] = 0 * intensity / 100;
                rgb[6][1][6] = 0 * intensity / 100;
                rgb[6][2][6] = 0 * intensity / 100; 
                
                rgb[7][0][6] = 0 * intensity / 100;
                rgb[7][1][6] = 0 * intensity / 100;
                rgb[7][2][6] = 0 * intensity / 100; 
                
                rgb[8][0][6] = 0 * intensity / 100;
                rgb[8][1][6] = 0 * intensity / 100;
                rgb[8][2][6] = 0 * intensity / 100; 
                
                rgb[9][0][6] = 0 * intensity / 100;
                rgb[9][1][6] = 0 * intensity / 100;
                rgb[9][2][6] = 0 * intensity / 100; 
                
                rgb[10][0][6] = 0 * intensity / 100;
                rgb[10][1][6] = 0 * intensity / 100;
                rgb[10][2][6] = 0 * intensity / 100; 
                
                rgb[11][0][6] = 0 * intensity / 100;
                rgb[11][1][6] = 0 * intensity / 100;
                rgb[11][2][6] = 0 * intensity / 100; 
                
                rgb[12][0][6] = 0 * intensity / 100;
                rgb[12][1][6] = 0 * intensity / 100;
                rgb[12][2][6] = 0 * intensity / 100; 
                
                rgb[13][0][6] = 0 * intensity / 100;
                rgb[13][1][6] = 0 * intensity / 100;
                rgb[13][2][6] = 0 * intensity / 100; 
                
                rgb[14][0][6] = 0 * intensity / 100;
                rgb[14][1][6] = 0 * intensity / 100;
                rgb[14][2][6] = 0 * intensity / 100; 
                
                rgb[15][0][6] = 0 * intensity / 100;
                rgb[15][1][6] = 0 * intensity / 100;
                rgb[15][2][6] = 0 * intensity / 100; 
                
                rgb[16][0][6] = 0 * intensity / 100;
                rgb[16][1][6] = 0 * intensity / 100;
                rgb[16][2][6] = 0 * intensity / 100; 
                
                rgb[17][0][6] = 0 * intensity / 100;
                rgb[17][1][6] = 0 * intensity / 100;
                rgb[17][2][6] = 0 * intensity / 100; 
                
                rgb[18][0][6] = 0 * intensity / 100;
                rgb[18][1][6] = 0 * intensity / 100;
                rgb[18][2][6] = 0 * intensity / 100; 
                
                rgb[19][0][6] = 0 * intensity / 100;
                rgb[19][1][6] = 0 * intensity / 100;
                rgb[19][2][6] = 0 * intensity / 100; 
                
                rgb[20][0][6] = 0 * intensity / 100;
                rgb[20][1][6] = 0 * intensity / 100;
                rgb[20][2][6] = 0 * intensity / 100; 
                
                rgb[21][0][6] = 0 * intensity / 100;
                rgb[21][1][6] = 0 * intensity / 100;
                rgb[21][2][6] = 0 * intensity / 100; 
                
                rgb[22][0][6] = 0 * intensity / 100;
                rgb[22][1][6] = 0 * intensity / 100;
                rgb[22][2][6] = 0 * intensity / 100; 
                
                rgb[23][0][6] = 0 * intensity / 100;
                rgb[23][1][6] = 0 * intensity / 100;
                rgb[23][2][6] = 0 * intensity / 100; 
                
                rgb[24][0][6] = 0 * intensity / 100;
                rgb[24][1][6] = 0 * intensity / 100;
                rgb[24][2][6] = 0 * intensity / 100; 
                
                rgb[25][0][6] = 0 * intensity / 100;
                rgb[25][1][6] = 0 * intensity / 100;
                rgb[25][2][6] = 0 * intensity / 100; 
                
                rgb[26][0][6] = 0 * intensity / 100;
                rgb[26][1][6] = 0 * intensity / 100;
                rgb[26][2][6] = 0 * intensity / 100; 
                
                rgb[27][0][6] = 0 * intensity / 100;
                rgb[27][1][6] = 0 * intensity / 100;
                rgb[27][2][6] = 0 * intensity / 100; 
                
                rgb[28][0][6] = 0 * intensity / 100;
                rgb[28][1][6] = 0 * intensity / 100;
                rgb[28][2][6] = 0 * intensity / 100; 
                
                rgb[29][0][6] = 0 * intensity / 100;
                rgb[29][1][6] = 0 * intensity / 100;
                rgb[29][2][6] = 0 * intensity / 100; 
                
                rgb[30][0][6] = 0 * intensity / 100;
                rgb[30][1][6] = 0 * intensity / 100;
                rgb[30][2][6] = 0 * intensity / 100; 
                
                rgb[31][0][6] = 0 * intensity / 100;
                rgb[31][1][6] = 0 * intensity / 100;
                rgb[31][2][6] = 0 * intensity / 100; 
                
                rgb[32][0][6] = 0 * intensity / 100;
                rgb[32][1][6] = 0 * intensity / 100;
                rgb[32][2][6] = 0 * intensity / 100; 
                
                rgb[33][0][6] = 0 * intensity / 100;
                rgb[33][1][6] = 0 * intensity / 100;
                rgb[33][2][6] = 0 * intensity / 100; 
                
                rgb[34][0][6] = 0 * intensity / 100;
                rgb[34][1][6] = 0 * intensity / 100;
                rgb[34][2][6] = 0 * intensity / 100; 
                
                rgb[35][0][6] = 0 * intensity / 100;
                rgb[35][1][6] = 0 * intensity / 100;
                rgb[35][2][6] = 0 * intensity / 100; 
                
                rgb[36][0][6] = 0 * intensity / 100;
                rgb[36][1][6] = 0 * intensity / 100;
                rgb[36][2][6] = 0 * intensity / 100; 
                
                rgb[37][0][6] = 0 * intensity / 100;
                rgb[37][1][6] = 0 * intensity / 100;
                rgb[37][2][6] = 0 * intensity / 100; 
                
                rgb[38][0][6] = 0 * intensity / 100;
                rgb[38][1][6] = 0 * intensity / 100;
                rgb[38][2][6] = 0 * intensity / 100; 
                
                rgb[39][0][6] = 0 * intensity / 100;
                rgb[39][1][6] = 0 * intensity / 100;
                rgb[39][2][6] = 0 * intensity / 100; 
                
                rgb[40][0][6] = 0 * intensity / 100;
                rgb[40][1][6] = 0 * intensity / 100;
                rgb[40][2][6] = 0 * intensity / 100; 
                
                rgb[41][0][6] = 0 * intensity / 100;
                rgb[41][1][6] = 0 * intensity / 100;
                rgb[41][2][6] = 0 * intensity / 100; 
                
                rgb[42][0][6] = 0 * intensity / 100;
                rgb[42][1][6] = 0 * intensity / 100;
                rgb[42][2][6] = 0 * intensity / 100; 
                
                rgb[43][0][6] = 0 * intensity / 100;
                rgb[43][1][6] = 0 * intensity / 100;
                rgb[43][2][6] = 0 * intensity / 100; 
                
                rgb[44][0][6] = 0 * intensity / 100;
                rgb[44][1][6] = 0 * intensity / 100;
                rgb[44][2][6] = 0 * intensity / 100; 
                
                rgb[45][0][6] = 0 * intensity / 100;
                rgb[45][1][6] = 0 * intensity / 100;
                rgb[45][2][6] = 0 * intensity / 100; 
                
                rgb[46][0][6] = 0 * intensity / 100;
                rgb[46][1][6] = 0 * intensity / 100;
                rgb[46][2][6] = 0 * intensity / 100; 
                
                rgb[47][0][6] = 0 * intensity / 100;
                rgb[47][1][6] = 0 * intensity / 100;
                rgb[47][2][6] = 0 * intensity / 100; 
                
                rgb[48][0][6] = 0 * intensity / 100;
                rgb[48][1][6] = 0 * intensity / 100;
                rgb[48][2][6] = 0 * intensity / 100; 
                
                rgb[49][0][6] = 215 * intensity / 100;
                rgb[49][1][6] = 80 * intensity / 100;
                rgb[49][2][6] = 156 * intensity / 100; 
                
                rgb[50][0][6] = 0 * intensity / 100;
                rgb[50][1][6] = 0 * intensity / 100;
                rgb[50][2][6] = 0 * intensity / 100; 
                
                rgb[51][0][6] = 0 * intensity / 100;
                rgb[51][1][6] = 0 * intensity / 100;
                rgb[51][2][6] = 0 * intensity / 100; 
                
                rgb[52][0][6] = 0 * intensity / 100;
                rgb[52][1][6] = 0 * intensity / 100;
                rgb[52][2][6] = 0 * intensity / 100; 
                
                rgb[53][0][6] = 0 * intensity / 100;
                rgb[53][1][6] = 0 * intensity / 100;
                rgb[53][2][6] = 0 * intensity / 100; 
                
                rgb[54][0][6] = 0 * intensity / 100;
                rgb[54][1][6] = 0 * intensity / 100;
                rgb[54][2][6] = 0 * intensity / 100; 
                
                rgb[55][0][6] = 0 * intensity / 100;
                rgb[55][1][6] = 0 * intensity / 100;
                rgb[55][2][6] = 0 * intensity / 100; 
                
                rgb[56][0][6] = 0 * intensity / 100;
                rgb[56][1][6] = 0 * intensity / 100;
                rgb[56][2][6] = 0 * intensity / 100; 
                
                rgb[57][0][6] = 0 * intensity / 100;
                rgb[57][1][6] = 0 * intensity / 100;
                rgb[57][2][6] = 0 * intensity / 100; 
                
                rgb[58][0][6] = 0 * intensity / 100;
                rgb[58][1][6] = 0 * intensity / 100;
                rgb[58][2][6] = 0 * intensity / 100; 
                
                rgb[59][0][6] = 0 * intensity / 100;
                rgb[59][1][6] = 0 * intensity / 100;
                rgb[59][2][6] = 0 * intensity / 100; 
                
                rgb[60][0][6] = 0 * intensity / 100;
                rgb[60][1][6] = 0 * intensity / 100;
                rgb[60][2][6] = 0 * intensity / 100; 
                
                rgb[61][0][6] = 0 * intensity / 100;
                rgb[61][1][6] = 0 * intensity / 100;
                rgb[61][2][6] = 0 * intensity / 100; 
                
                rgb[62][0][6] = 215 * intensity / 100;
                rgb[62][1][6] = 80 * intensity / 100;
                rgb[62][2][6] = 156 * intensity / 100; 
                
                rgb[63][0][6] = 0 * intensity / 100;
                rgb[63][1][6] = 0 * intensity / 100;
                rgb[63][2][6] = 0 * intensity / 100; 
                
                rgb[0][0][6] = 0 * intensity / 100;
                rgb[0][1][6] = 0 * intensity / 100;
                rgb[0][2][6] = 0 * intensity / 100; 
                
                rgb[1][0][6] = 0 * intensity / 100;
                rgb[1][1][6] = 0 * intensity / 100;
                rgb[1][2][6] = 0 * intensity / 100; 
                
                rgb[2][0][6] = 215 * intensity / 100;
                rgb[2][1][6] = 80 * intensity / 100;
                rgb[2][2][6] = 156 * intensity / 100; 
                
                rgb[3][0][6] = 215 * intensity / 100;
                rgb[3][1][6] = 80 * intensity / 100;
                rgb[3][2][6] = 156 * intensity / 100; 
                
                rgb[4][0][6] = 215 * intensity / 100;
                rgb[4][1][6] = 80 * intensity / 100;
                rgb[4][2][6] = 156 * intensity / 100; 
                
                rgb[5][0][6] = 215 * intensity / 100;
                rgb[5][1][6] = 80 * intensity / 100;
                rgb[5][2][6] = 156 * intensity / 100; 
                
                rgb[6][0][6] = 0 * intensity / 100;
                rgb[6][1][6] = 0 * intensity / 100;
                rgb[6][2][6] = 0 * intensity / 100; 
                
                rgb[7][0][6] = 0 * intensity / 100;
                rgb[7][1][6] = 0 * intensity / 100;
                rgb[7][2][6] = 0 * intensity / 100; 
                
                rgb[8][0][6] = 0 * intensity / 100;
                rgb[8][1][6] = 0 * intensity / 100;
                rgb[8][2][6] = 0 * intensity / 100; 
                
                rgb[9][0][6] = 0 * intensity / 100;
                rgb[9][1][6] = 0 * intensity / 100;
                rgb[9][2][6] = 0 * intensity / 100; 
                
                rgb[10][0][6] = 215 * intensity / 100;
                rgb[10][1][6] = 80 * intensity / 100;
                rgb[10][2][6] = 156 * intensity / 100; 
                
                rgb[11][0][6] = 215 * intensity / 100;
                rgb[11][1][6] = 80 * intensity / 100;
                rgb[11][2][6] = 156 * intensity / 100; 
                
                rgb[12][0][6] = 215 * intensity / 100;
                rgb[12][1][6] = 80 * intensity / 100;
                rgb[12][2][6] = 156 * intensity / 100; 
                
                rgb[13][0][6] = 215 * intensity / 100;
                rgb[13][1][6] = 80 * intensity / 100;
                rgb[13][2][6] = 156 * intensity / 100; 
                
                rgb[14][0][6] = 0 * intensity / 100;
                rgb[14][1][6] = 0 * intensity / 100;
                rgb[14][2][6] = 0 * intensity / 100; 
                
                rgb[15][0][6] = 0 * intensity / 100;
                rgb[15][1][6] = 0 * intensity / 100;
                rgb[15][2][6] = 0 * intensity / 100; 
                
                rgb[16][0][6] = 0 * intensity / 100;
                rgb[16][1][6] = 0 * intensity / 100;
                rgb[16][2][6] = 0 * intensity / 100; 
                
                rgb[17][0][6] = 0 * intensity / 100;
                rgb[17][1][6] = 0 * intensity / 100;
                rgb[17][2][6] = 0 * intensity / 100; 
                
                rgb[18][0][6] = 0 * intensity / 100;
                rgb[18][1][6] = 0 * intensity / 100;
                rgb[18][2][6] = 0 * intensity / 100; 
                
                rgb[19][0][6] = 215 * intensity / 100;
                rgb[19][1][6] = 80 * intensity / 100;
                rgb[19][2][6] = 156 * intensity / 100; 
                
                rgb[20][0][6] = 215 * intensity / 100;
                rgb[20][1][6] = 80 * intensity / 100;
                rgb[20][2][6] = 156 * intensity / 100; 
                
                rgb[21][0][6] = 215 * intensity / 100;
                rgb[21][1][6] = 80 * intensity / 100;
                rgb[21][2][6] = 156 * intensity / 100; 
                
                rgb[22][0][6] = 0 * intensity / 100;
                rgb[22][1][6] = 0 * intensity / 100;
                rgb[22][2][6] = 0 * intensity / 100; 
                
                rgb[23][0][6] = 0 * intensity / 100;
                rgb[23][1][6] = 0 * intensity / 100;
                rgb[23][2][6] = 0 * intensity / 100; 
                
                rgb[24][0][6] = 0 * intensity / 100;
                rgb[24][1][6] = 0 * intensity / 100;
                rgb[24][2][6] = 0 * intensity / 100; 
                
                rgb[25][0][6] = 0 * intensity / 100;
                rgb[25][1][6] = 0 * intensity / 100;
                rgb[25][2][6] = 0 * intensity / 100; 
                
                rgb[26][0][6] = 215 * intensity / 100;
                rgb[26][1][6] = 80 * intensity / 100;
                rgb[26][2][6] = 156 * intensity / 100; 
                
                rgb[27][0][6] = 215 * intensity / 100;
                rgb[27][1][6] = 80 * intensity / 100;
                rgb[27][2][6] = 156 * intensity / 100; 
                
                rgb[28][0][6] = 215 * intensity / 100;
                rgb[28][1][6] = 80 * intensity / 100;
                rgb[28][2][6] = 156 * intensity / 100; 
                
                rgb[29][0][6] = 0 * intensity / 100;
                rgb[29][1][6] = 0 * intensity / 100;
                rgb[29][2][6] = 0 * intensity / 100; 
                
                rgb[30][0][6] = 0 * intensity / 100;
                rgb[30][1][6] = 0 * intensity / 100;
                rgb[30][2][6] = 0 * intensity / 100; 
                
                rgb[31][0][6] = 0 * intensity / 100;
                rgb[31][1][6] = 0 * intensity / 100;
                rgb[31][2][6] = 0 * intensity / 100; 
                
                rgb[32][0][6] = 0 * intensity / 100;
                rgb[32][1][6] = 0 * intensity / 100;
                rgb[32][2][6] = 0 * intensity / 100; 
                
                rgb[33][0][6] = 0 * intensity / 100;
                rgb[33][1][6] = 0 * intensity / 100;
                rgb[33][2][6] = 0 * intensity / 100; 
                
                rgb[34][0][6] = 0 * intensity / 100;
                rgb[34][1][6] = 0 * intensity / 100;
                rgb[34][2][6] = 0 * intensity / 100; 
                
                rgb[35][0][6] = 0 * intensity / 100;
                rgb[35][1][6] = 0 * intensity / 100;
                rgb[35][2][6] = 0 * intensity / 100; 
                
                rgb[36][0][6] = 0 * intensity / 100;
                rgb[36][1][6] = 0 * intensity / 100;
                rgb[36][2][6] = 0 * intensity / 100; 
                
                rgb[37][0][6] = 0 * intensity / 100;
                rgb[37][1][6] = 0 * intensity / 100;
                rgb[37][2][6] = 0 * intensity / 100; 
                
                rgb[38][0][6] = 0 * intensity / 100;
                rgb[38][1][6] = 0 * intensity / 100;
                rgb[38][2][6] = 0 * intensity / 100; 
                
                rgb[39][0][6] = 0 * intensity / 100;
                rgb[39][1][6] = 0 * intensity / 100;
                rgb[39][2][6] = 0 * intensity / 100; 
                
                rgb[40][0][6] = 0 * intensity / 100;
                rgb[40][1][6] = 0 * intensity / 100;
                rgb[40][2][6] = 0 * intensity / 100; 
                
                rgb[41][0][6] = 0 * intensity / 100;
                rgb[41][1][6] = 0 * intensity / 100;
                rgb[41][2][6] = 0 * intensity / 100; 
                
                rgb[42][0][6] = 0 * intensity / 100;
                rgb[42][1][6] = 0 * intensity / 100;
                rgb[42][2][6] = 0 * intensity / 100; 
                
                rgb[43][0][6] = 0 * intensity / 100;
                rgb[43][1][6] = 0 * intensity / 100;
                rgb[43][2][6] = 0 * intensity / 100; 
                
                rgb[44][0][6] = 0 * intensity / 100;
                rgb[44][1][6] = 0 * intensity / 100;
                rgb[44][2][6] = 0 * intensity / 100; 
                
                rgb[45][0][6] = 0 * intensity / 100;
                rgb[45][1][6] = 0 * intensity / 100;
                rgb[45][2][6] = 0 * intensity / 100; 
                
                rgb[46][0][6] = 0 * intensity / 100;
                rgb[46][1][6] = 0 * intensity / 100;
                rgb[46][2][6] = 0 * intensity / 100; 
                
                rgb[47][0][6] = 0 * intensity / 100;
                rgb[47][1][6] = 0 * intensity / 100;
                rgb[47][2][6] = 0 * intensity / 100; 
                
                rgb[48][0][6] = 0 * intensity / 100;
                rgb[48][1][6] = 0 * intensity / 100;
                rgb[48][2][6] = 0 * intensity / 100; 
                
                rgb[49][0][6] = 0 * intensity / 100;
                rgb[49][1][6] = 0 * intensity / 100;
                rgb[49][2][6] = 0 * intensity / 100; 
                
                rgb[50][0][6] = 0 * intensity / 100;
                rgb[50][1][6] = 0 * intensity / 100;
                rgb[50][2][6] = 0 * intensity / 100; 
                
                rgb[51][0][6] = 0 * intensity / 100;
                rgb[51][1][6] = 0 * intensity / 100;
                rgb[51][2][6] = 0 * intensity / 100; 
                
                rgb[52][0][6] = 0 * intensity / 100;
                rgb[52][1][6] = 0 * intensity / 100;
                rgb[52][2][6] = 0 * intensity / 100; 
                
                rgb[53][0][6] = 0 * intensity / 100;
                rgb[53][1][6] = 0 * intensity / 100;
                rgb[53][2][6] = 0 * intensity / 100; 
                
                rgb[54][0][6] = 0 * intensity / 100;
                rgb[54][1][6] = 0 * intensity / 100;
                rgb[54][2][6] = 0 * intensity / 100; 
                
                rgb[55][0][6] = 0 * intensity / 100;
                rgb[55][1][6] = 0 * intensity / 100;
                rgb[55][2][6] = 0 * intensity / 100; 
                
                rgb[56][0][6] = 0 * intensity / 100;
                rgb[56][1][6] = 0 * intensity / 100;
                rgb[56][2][6] = 0 * intensity / 100; 
                
                rgb[57][0][6] = 0 * intensity / 100;
                rgb[57][1][6] = 0 * intensity / 100;
                rgb[57][2][6] = 0 * intensity / 100; 
                
                rgb[58][0][6] = 0 * intensity / 100;
                rgb[58][1][6] = 0 * intensity / 100;
                rgb[58][2][6] = 0 * intensity / 100; 
                
                rgb[59][0][6] = 0 * intensity / 100;
                rgb[59][1][6] = 0 * intensity / 100;
                rgb[59][2][6] = 0 * intensity / 100; 
                
                rgb[60][0][6] = 0 * intensity / 100;
                rgb[60][1][6] = 0 * intensity / 100;
                rgb[60][2][6] = 0 * intensity / 100; 
                
                rgb[61][0][6] = 0 * intensity / 100;
                rgb[61][1][6] = 0 * intensity / 100;
                rgb[61][2][6] = 0 * intensity / 100; 
                
                rgb[62][0][6] = 0 * intensity / 100;
                rgb[62][1][6] = 0 * intensity / 100;
                rgb[62][2][6] = 0 * intensity / 100; 
                
                rgb[63][0][6] = 0 * intensity / 100;
                rgb[63][1][6] = 0 * intensity / 100;
                rgb[63][2][6] = 0 * intensity / 100; 
                

        frameTime[6] = 50;

    
                rgb[0][0][7] = 0 * intensity / 100;
                rgb[0][1][7] = 0 * intensity / 100;
                rgb[0][2][7] = 0 * intensity / 100; 
                
                rgb[1][0][7] = 0 * intensity / 100;
                rgb[1][1][7] = 0 * intensity / 100;
                rgb[1][2][7] = 0 * intensity / 100; 
                
                rgb[2][0][7] = 0 * intensity / 100;
                rgb[2][1][7] = 0 * intensity / 100;
                rgb[2][2][7] = 0 * intensity / 100; 
                
                rgb[3][0][7] = 0 * intensity / 100;
                rgb[3][1][7] = 0 * intensity / 100;
                rgb[3][2][7] = 0 * intensity / 100; 
                
                rgb[4][0][7] = 0 * intensity / 100;
                rgb[4][1][7] = 0 * intensity / 100;
                rgb[4][2][7] = 0 * intensity / 100; 
                
                rgb[5][0][7] = 0 * intensity / 100;
                rgb[5][1][7] = 0 * intensity / 100;
                rgb[5][2][7] = 0 * intensity / 100; 
                
                rgb[6][0][7] = 0 * intensity / 100;
                rgb[6][1][7] = 0 * intensity / 100;
                rgb[6][2][7] = 0 * intensity / 100; 
                
                rgb[7][0][7] = 0 * intensity / 100;
                rgb[7][1][7] = 0 * intensity / 100;
                rgb[7][2][7] = 0 * intensity / 100; 
                
                rgb[8][0][7] = 0 * intensity / 100;
                rgb[8][1][7] = 0 * intensity / 100;
                rgb[8][2][7] = 0 * intensity / 100; 
                
                rgb[9][0][7] = 0 * intensity / 100;
                rgb[9][1][7] = 0 * intensity / 100;
                rgb[9][2][7] = 0 * intensity / 100; 
                
                rgb[10][0][7] = 0 * intensity / 100;
                rgb[10][1][7] = 0 * intensity / 100;
                rgb[10][2][7] = 0 * intensity / 100; 
                
                rgb[11][0][7] = 0 * intensity / 100;
                rgb[11][1][7] = 0 * intensity / 100;
                rgb[11][2][7] = 0 * intensity / 100; 
                
                rgb[12][0][7] = 0 * intensity / 100;
                rgb[12][1][7] = 0 * intensity / 100;
                rgb[12][2][7] = 0 * intensity / 100; 
                
                rgb[13][0][7] = 0 * intensity / 100;
                rgb[13][1][7] = 0 * intensity / 100;
                rgb[13][2][7] = 0 * intensity / 100; 
                
                rgb[14][0][7] = 0 * intensity / 100;
                rgb[14][1][7] = 0 * intensity / 100;
                rgb[14][2][7] = 0 * intensity / 100; 
                
                rgb[15][0][7] = 0 * intensity / 100;
                rgb[15][1][7] = 0 * intensity / 100;
                rgb[15][2][7] = 0 * intensity / 100; 
                
                rgb[16][0][7] = 0 * intensity / 100;
                rgb[16][1][7] = 0 * intensity / 100;
                rgb[16][2][7] = 0 * intensity / 100; 
                
                rgb[17][0][7] = 0 * intensity / 100;
                rgb[17][1][7] = 0 * intensity / 100;
                rgb[17][2][7] = 0 * intensity / 100; 
                
                rgb[18][0][7] = 0 * intensity / 100;
                rgb[18][1][7] = 0 * intensity / 100;
                rgb[18][2][7] = 0 * intensity / 100; 
                
                rgb[19][0][7] = 0 * intensity / 100;
                rgb[19][1][7] = 0 * intensity / 100;
                rgb[19][2][7] = 0 * intensity / 100; 
                
                rgb[20][0][7] = 0 * intensity / 100;
                rgb[20][1][7] = 0 * intensity / 100;
                rgb[20][2][7] = 0 * intensity / 100; 
                
                rgb[21][0][7] = 0 * intensity / 100;
                rgb[21][1][7] = 0 * intensity / 100;
                rgb[21][2][7] = 0 * intensity / 100; 
                
                rgb[22][0][7] = 0 * intensity / 100;
                rgb[22][1][7] = 0 * intensity / 100;
                rgb[22][2][7] = 0 * intensity / 100; 
                
                rgb[23][0][7] = 0 * intensity / 100;
                rgb[23][1][7] = 0 * intensity / 100;
                rgb[23][2][7] = 0 * intensity / 100; 
                
                rgb[24][0][7] = 0 * intensity / 100;
                rgb[24][1][7] = 0 * intensity / 100;
                rgb[24][2][7] = 0 * intensity / 100; 
                
                rgb[25][0][7] = 0 * intensity / 100;
                rgb[25][1][7] = 0 * intensity / 100;
                rgb[25][2][7] = 0 * intensity / 100; 
                
                rgb[26][0][7] = 0 * intensity / 100;
                rgb[26][1][7] = 0 * intensity / 100;
                rgb[26][2][7] = 0 * intensity / 100; 
                
                rgb[27][0][7] = 0 * intensity / 100;
                rgb[27][1][7] = 0 * intensity / 100;
                rgb[27][2][7] = 0 * intensity / 100; 
                
                rgb[28][0][7] = 0 * intensity / 100;
                rgb[28][1][7] = 0 * intensity / 100;
                rgb[28][2][7] = 0 * intensity / 100; 
                
                rgb[29][0][7] = 0 * intensity / 100;
                rgb[29][1][7] = 0 * intensity / 100;
                rgb[29][2][7] = 0 * intensity / 100; 
                
                rgb[30][0][7] = 0 * intensity / 100;
                rgb[30][1][7] = 0 * intensity / 100;
                rgb[30][2][7] = 0 * intensity / 100; 
                
                rgb[31][0][7] = 0 * intensity / 100;
                rgb[31][1][7] = 0 * intensity / 100;
                rgb[31][2][7] = 0 * intensity / 100; 
                
                rgb[32][0][7] = 0 * intensity / 100;
                rgb[32][1][7] = 0 * intensity / 100;
                rgb[32][2][7] = 0 * intensity / 100; 
                
                rgb[33][0][7] = 215 * intensity / 100;
                rgb[33][1][7] = 80 * intensity / 100;
                rgb[33][2][7] = 156 * intensity / 100; 
                
                rgb[34][0][7] = 0 * intensity / 100;
                rgb[34][1][7] = 0 * intensity / 100;
                rgb[34][2][7] = 0 * intensity / 100; 
                
                rgb[35][0][7] = 0 * intensity / 100;
                rgb[35][1][7] = 0 * intensity / 100;
                rgb[35][2][7] = 0 * intensity / 100; 
                
                rgb[36][0][7] = 0 * intensity / 100;
                rgb[36][1][7] = 0 * intensity / 100;
                rgb[36][2][7] = 0 * intensity / 100; 
                
                rgb[37][0][7] = 0 * intensity / 100;
                rgb[37][1][7] = 0 * intensity / 100;
                rgb[37][2][7] = 0 * intensity / 100; 
                
                rgb[38][0][7] = 0 * intensity / 100;
                rgb[38][1][7] = 0 * intensity / 100;
                rgb[38][2][7] = 0 * intensity / 100; 
                
                rgb[39][0][7] = 0 * intensity / 100;
                rgb[39][1][7] = 0 * intensity / 100;
                rgb[39][2][7] = 0 * intensity / 100; 
                
                rgb[40][0][7] = 0 * intensity / 100;
                rgb[40][1][7] = 0 * intensity / 100;
                rgb[40][2][7] = 0 * intensity / 100; 
                
                rgb[41][0][7] = 0 * intensity / 100;
                rgb[41][1][7] = 0 * intensity / 100;
                rgb[41][2][7] = 0 * intensity / 100; 
                
                rgb[42][0][7] = 0 * intensity / 100;
                rgb[42][1][7] = 0 * intensity / 100;
                rgb[42][2][7] = 0 * intensity / 100; 
                
                rgb[43][0][7] = 0 * intensity / 100;
                rgb[43][1][7] = 0 * intensity / 100;
                rgb[43][2][7] = 0 * intensity / 100; 
                
                rgb[44][0][7] = 0 * intensity / 100;
                rgb[44][1][7] = 0 * intensity / 100;
                rgb[44][2][7] = 0 * intensity / 100; 
                
                rgb[45][0][7] = 0 * intensity / 100;
                rgb[45][1][7] = 0 * intensity / 100;
                rgb[45][2][7] = 0 * intensity / 100; 
                
                rgb[46][0][7] = 215 * intensity / 100;
                rgb[46][1][7] = 80 * intensity / 100;
                rgb[46][2][7] = 156 * intensity / 100; 
                
                rgb[47][0][7] = 0 * intensity / 100;
                rgb[47][1][7] = 0 * intensity / 100;
                rgb[47][2][7] = 0 * intensity / 100; 
                
                rgb[48][0][7] = 0 * intensity / 100;
                rgb[48][1][7] = 0 * intensity / 100;
                rgb[48][2][7] = 0 * intensity / 100; 
                
                rgb[49][0][7] = 0 * intensity / 100;
                rgb[49][1][7] = 0 * intensity / 100;
                rgb[49][2][7] = 0 * intensity / 100; 
                
                rgb[50][0][7] = 215 * intensity / 100;
                rgb[50][1][7] = 80 * intensity / 100;
                rgb[50][2][7] = 156 * intensity / 100; 
                
                rgb[51][0][7] = 215 * intensity / 100;
                rgb[51][1][7] = 80 * intensity / 100;
                rgb[51][2][7] = 156 * intensity / 100; 
                
                rgb[52][0][7] = 215 * intensity / 100;
                rgb[52][1][7] = 80 * intensity / 100;
                rgb[52][2][7] = 156 * intensity / 100; 
                
                rgb[53][0][7] = 215 * intensity / 100;
                rgb[53][1][7] = 80 * intensity / 100;
                rgb[53][2][7] = 156 * intensity / 100; 
                
                rgb[54][0][7] = 0 * intensity / 100;
                rgb[54][1][7] = 0 * intensity / 100;
                rgb[54][2][7] = 0 * intensity / 100; 
                
                rgb[55][0][7] = 0 * intensity / 100;
                rgb[55][1][7] = 0 * intensity / 100;
                rgb[55][2][7] = 0 * intensity / 100; 
                
                rgb[56][0][7] = 0 * intensity / 100;
                rgb[56][1][7] = 0 * intensity / 100;
                rgb[56][2][7] = 0 * intensity / 100; 
                
                rgb[57][0][7] = 0 * intensity / 100;
                rgb[57][1][7] = 0 * intensity / 100;
                rgb[57][2][7] = 0 * intensity / 100; 
                
                rgb[58][0][7] = 215 * intensity / 100;
                rgb[58][1][7] = 80 * intensity / 100;
                rgb[58][2][7] = 156 * intensity / 100; 
                
                rgb[59][0][7] = 215 * intensity / 100;
                rgb[59][1][7] = 80 * intensity / 100;
                rgb[59][2][7] = 156 * intensity / 100; 
                
                rgb[60][0][7] = 215 * intensity / 100;
                rgb[60][1][7] = 80 * intensity / 100;
                rgb[60][2][7] = 156 * intensity / 100; 
                
                rgb[61][0][7] = 215 * intensity / 100;
                rgb[61][1][7] = 80 * intensity / 100;
                rgb[61][2][7] = 156 * intensity / 100; 
                
                rgb[62][0][7] = 0 * intensity / 100;
                rgb[62][1][7] = 0 * intensity / 100;
                rgb[62][2][7] = 0 * intensity / 100; 
                
                rgb[63][0][7] = 0 * intensity / 100;
                rgb[63][1][7] = 0 * intensity / 100;
                rgb[63][2][7] = 0 * intensity / 100; 
                
                rgb[0][0][7] = 0 * intensity / 100;
                rgb[0][1][7] = 0 * intensity / 100;
                rgb[0][2][7] = 0 * intensity / 100; 
                
                rgb[1][0][7] = 0 * intensity / 100;
                rgb[1][1][7] = 0 * intensity / 100;
                rgb[1][2][7] = 0 * intensity / 100; 
                
                rgb[2][0][7] = 0 * intensity / 100;
                rgb[2][1][7] = 0 * intensity / 100;
                rgb[2][2][7] = 0 * intensity / 100; 
                
                rgb[3][0][7] = 215 * intensity / 100;
                rgb[3][1][7] = 80 * intensity / 100;
                rgb[3][2][7] = 156 * intensity / 100; 
                
                rgb[4][0][7] = 215 * intensity / 100;
                rgb[4][1][7] = 80 * intensity / 100;
                rgb[4][2][7] = 156 * intensity / 100; 
                
                rgb[5][0][7] = 215 * intensity / 100;
                rgb[5][1][7] = 80 * intensity / 100;
                rgb[5][2][7] = 156 * intensity / 100; 
                
                rgb[6][0][7] = 0 * intensity / 100;
                rgb[6][1][7] = 0 * intensity / 100;
                rgb[6][2][7] = 0 * intensity / 100; 
                
                rgb[7][0][7] = 0 * intensity / 100;
                rgb[7][1][7] = 0 * intensity / 100;
                rgb[7][2][7] = 0 * intensity / 100; 
                
                rgb[8][0][7] = 0 * intensity / 100;
                rgb[8][1][7] = 0 * intensity / 100;
                rgb[8][2][7] = 0 * intensity / 100; 
                
                rgb[9][0][7] = 0 * intensity / 100;
                rgb[9][1][7] = 0 * intensity / 100;
                rgb[9][2][7] = 0 * intensity / 100; 
                
                rgb[10][0][7] = 215 * intensity / 100;
                rgb[10][1][7] = 80 * intensity / 100;
                rgb[10][2][7] = 156 * intensity / 100; 
                
                rgb[11][0][7] = 215 * intensity / 100;
                rgb[11][1][7] = 80 * intensity / 100;
                rgb[11][2][7] = 156 * intensity / 100; 
                
                rgb[12][0][7] = 215 * intensity / 100;
                rgb[12][1][7] = 80 * intensity / 100;
                rgb[12][2][7] = 156 * intensity / 100; 
                
                rgb[13][0][7] = 0 * intensity / 100;
                rgb[13][1][7] = 0 * intensity / 100;
                rgb[13][2][7] = 0 * intensity / 100; 
                
                rgb[14][0][7] = 0 * intensity / 100;
                rgb[14][1][7] = 0 * intensity / 100;
                rgb[14][2][7] = 0 * intensity / 100; 
                
                rgb[15][0][7] = 0 * intensity / 100;
                rgb[15][1][7] = 0 * intensity / 100;
                rgb[15][2][7] = 0 * intensity / 100; 
                
                rgb[16][0][7] = 0 * intensity / 100;
                rgb[16][1][7] = 0 * intensity / 100;
                rgb[16][2][7] = 0 * intensity / 100; 
                
                rgb[17][0][7] = 0 * intensity / 100;
                rgb[17][1][7] = 0 * intensity / 100;
                rgb[17][2][7] = 0 * intensity / 100; 
                
                rgb[18][0][7] = 0 * intensity / 100;
                rgb[18][1][7] = 0 * intensity / 100;
                rgb[18][2][7] = 0 * intensity / 100; 
                
                rgb[19][0][7] = 215 * intensity / 100;
                rgb[19][1][7] = 80 * intensity / 100;
                rgb[19][2][7] = 156 * intensity / 100; 
                
                rgb[20][0][7] = 215 * intensity / 100;
                rgb[20][1][7] = 80 * intensity / 100;
                rgb[20][2][7] = 156 * intensity / 100; 
                
                rgb[21][0][7] = 215 * intensity / 100;
                rgb[21][1][7] = 80 * intensity / 100;
                rgb[21][2][7] = 156 * intensity / 100; 
                
                rgb[22][0][7] = 0 * intensity / 100;
                rgb[22][1][7] = 0 * intensity / 100;
                rgb[22][2][7] = 0 * intensity / 100; 
                
                rgb[23][0][7] = 0 * intensity / 100;
                rgb[23][1][7] = 0 * intensity / 100;
                rgb[23][2][7] = 0 * intensity / 100; 
                
                rgb[24][0][7] = 0 * intensity / 100;
                rgb[24][1][7] = 0 * intensity / 100;
                rgb[24][2][7] = 0 * intensity / 100; 
                
                rgb[25][0][7] = 0 * intensity / 100;
                rgb[25][1][7] = 0 * intensity / 100;
                rgb[25][2][7] = 0 * intensity / 100; 
                
                rgb[26][0][7] = 215 * intensity / 100;
                rgb[26][1][7] = 80 * intensity / 100;
                rgb[26][2][7] = 156 * intensity / 100; 
                
                rgb[27][0][7] = 215 * intensity / 100;
                rgb[27][1][7] = 80 * intensity / 100;
                rgb[27][2][7] = 156 * intensity / 100; 
                
                rgb[28][0][7] = 215 * intensity / 100;
                rgb[28][1][7] = 80 * intensity / 100;
                rgb[28][2][7] = 156 * intensity / 100; 
                
                rgb[29][0][7] = 0 * intensity / 100;
                rgb[29][1][7] = 0 * intensity / 100;
                rgb[29][2][7] = 0 * intensity / 100; 
                
                rgb[30][0][7] = 0 * intensity / 100;
                rgb[30][1][7] = 0 * intensity / 100;
                rgb[30][2][7] = 0 * intensity / 100; 
                
                rgb[31][0][7] = 0 * intensity / 100;
                rgb[31][1][7] = 0 * intensity / 100;
                rgb[31][2][7] = 0 * intensity / 100; 
                
                rgb[32][0][7] = 0 * intensity / 100;
                rgb[32][1][7] = 0 * intensity / 100;
                rgb[32][2][7] = 0 * intensity / 100; 
                
                rgb[33][0][7] = 0 * intensity / 100;
                rgb[33][1][7] = 0 * intensity / 100;
                rgb[33][2][7] = 0 * intensity / 100; 
                
                rgb[34][0][7] = 0 * intensity / 100;
                rgb[34][1][7] = 0 * intensity / 100;
                rgb[34][2][7] = 0 * intensity / 100; 
                
                rgb[35][0][7] = 215 * intensity / 100;
                rgb[35][1][7] = 80 * intensity / 100;
                rgb[35][2][7] = 156 * intensity / 100; 
                
                rgb[36][0][7] = 215 * intensity / 100;
                rgb[36][1][7] = 80 * intensity / 100;
                rgb[36][2][7] = 156 * intensity / 100; 
                
                rgb[37][0][7] = 215 * intensity / 100;
                rgb[37][1][7] = 80 * intensity / 100;
                rgb[37][2][7] = 156 * intensity / 100; 
                
                rgb[38][0][7] = 0 * intensity / 100;
                rgb[38][1][7] = 0 * intensity / 100;
                rgb[38][2][7] = 0 * intensity / 100; 
                
                rgb[39][0][7] = 0 * intensity / 100;
                rgb[39][1][7] = 0 * intensity / 100;
                rgb[39][2][7] = 0 * intensity / 100; 
                
                rgb[40][0][7] = 0 * intensity / 100;
                rgb[40][1][7] = 0 * intensity / 100;
                rgb[40][2][7] = 0 * intensity / 100; 
                
                rgb[41][0][7] = 0 * intensity / 100;
                rgb[41][1][7] = 0 * intensity / 100;
                rgb[41][2][7] = 0 * intensity / 100; 
                
                rgb[42][0][7] = 215 * intensity / 100;
                rgb[42][1][7] = 80 * intensity / 100;
                rgb[42][2][7] = 156 * intensity / 100; 
                
                rgb[43][0][7] = 215 * intensity / 100;
                rgb[43][1][7] = 80 * intensity / 100;
                rgb[43][2][7] = 156 * intensity / 100; 
                
                rgb[44][0][7] = 215 * intensity / 100;
                rgb[44][1][7] = 80 * intensity / 100;
                rgb[44][2][7] = 156 * intensity / 100; 
                
                rgb[45][0][7] = 0 * intensity / 100;
                rgb[45][1][7] = 0 * intensity / 100;
                rgb[45][2][7] = 0 * intensity / 100; 
                
                rgb[46][0][7] = 0 * intensity / 100;
                rgb[46][1][7] = 0 * intensity / 100;
                rgb[46][2][7] = 0 * intensity / 100; 
                
                rgb[47][0][7] = 0 * intensity / 100;
                rgb[47][1][7] = 0 * intensity / 100;
                rgb[47][2][7] = 0 * intensity / 100; 
                
                rgb[48][0][7] = 0 * intensity / 100;
                rgb[48][1][7] = 0 * intensity / 100;
                rgb[48][2][7] = 0 * intensity / 100; 
                
                rgb[49][0][7] = 0 * intensity / 100;
                rgb[49][1][7] = 0 * intensity / 100;
                rgb[49][2][7] = 0 * intensity / 100; 
                
                rgb[50][0][7] = 0 * intensity / 100;
                rgb[50][1][7] = 0 * intensity / 100;
                rgb[50][2][7] = 0 * intensity / 100; 
                
                rgb[51][0][7] = 0 * intensity / 100;
                rgb[51][1][7] = 0 * intensity / 100;
                rgb[51][2][7] = 0 * intensity / 100; 
                
                rgb[52][0][7] = 0 * intensity / 100;
                rgb[52][1][7] = 0 * intensity / 100;
                rgb[52][2][7] = 0 * intensity / 100; 
                
                rgb[53][0][7] = 0 * intensity / 100;
                rgb[53][1][7] = 0 * intensity / 100;
                rgb[53][2][7] = 0 * intensity / 100; 
                
                rgb[54][0][7] = 0 * intensity / 100;
                rgb[54][1][7] = 0 * intensity / 100;
                rgb[54][2][7] = 0 * intensity / 100; 
                
                rgb[55][0][7] = 0 * intensity / 100;
                rgb[55][1][7] = 0 * intensity / 100;
                rgb[55][2][7] = 0 * intensity / 100; 
                
                rgb[56][0][7] = 0 * intensity / 100;
                rgb[56][1][7] = 0 * intensity / 100;
                rgb[56][2][7] = 0 * intensity / 100; 
                
                rgb[57][0][7] = 0 * intensity / 100;
                rgb[57][1][7] = 0 * intensity / 100;
                rgb[57][2][7] = 0 * intensity / 100; 
                
                rgb[58][0][7] = 0 * intensity / 100;
                rgb[58][1][7] = 0 * intensity / 100;
                rgb[58][2][7] = 0 * intensity / 100; 
                
                rgb[59][0][7] = 0 * intensity / 100;
                rgb[59][1][7] = 0 * intensity / 100;
                rgb[59][2][7] = 0 * intensity / 100; 
                
                rgb[60][0][7] = 0 * intensity / 100;
                rgb[60][1][7] = 0 * intensity / 100;
                rgb[60][2][7] = 0 * intensity / 100; 
                
                rgb[61][0][7] = 0 * intensity / 100;
                rgb[61][1][7] = 0 * intensity / 100;
                rgb[61][2][7] = 0 * intensity / 100; 
                
                rgb[62][0][7] = 0 * intensity / 100;
                rgb[62][1][7] = 0 * intensity / 100;
                rgb[62][2][7] = 0 * intensity / 100; 
                
                rgb[63][0][7] = 0 * intensity / 100;
                rgb[63][1][7] = 0 * intensity / 100;
                rgb[63][2][7] = 0 * intensity / 100; 
                

        frameTime[7] = 50;

    

} 
void loop() {
    int nFrames = 8;
    int currentFrame = 0;

for (currentFrame; currentFrame < nFrames; currentFrame++)
{
    int LEDloc = NUM_LEDS;
    int imgIndex = 0;

    for (int n = SQ_SIZE / 2; n > 0; n--)
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
        