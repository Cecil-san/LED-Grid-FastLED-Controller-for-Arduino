//LED library and pins
#include <FastLED.h>
#define NUM_LEDS 128
#define LED_DATA_PIN 3

int gridWidth = 16;
int gridHeight = 8;

CRGB leds[NUM_LEDS];

byte rgb[NUM_LEDS][3][8];
byte intensity = 15;
int frameTime[8];

//These only go from 0 to 7, to match the device's grid
byte x = 0;
byte y = 0;

void setup() {

int LEDloc = NUM_LEDS - 1;

FastLED.addLeds <WS2812B, LED_DATA_PIN, GRB> (leds, NUM_LEDS).setCorrection( TypicalLEDStrip );

Serial.begin(9600);

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
    
    rgb[9][0][0] = 215 * intensity / 100;
    rgb[9][1][0] = 80 * intensity / 100;
    rgb[9][2][0] = 156 * intensity / 100; 
    
    rgb[10][0][0] = 0 * intensity / 100;
    rgb[10][1][0] = 0 * intensity / 100;
    rgb[10][2][0] = 0 * intensity / 100; 
    
    rgb[11][0][0] = 215 * intensity / 100;
    rgb[11][1][0] = 80 * intensity / 100;
    rgb[11][2][0] = 156 * intensity / 100; 
    
    rgb[12][0][0] = 215 * intensity / 100;
    rgb[12][1][0] = 80 * intensity / 100;
    rgb[12][2][0] = 156 * intensity / 100; 
    
    rgb[13][0][0] = 215 * intensity / 100;
    rgb[13][1][0] = 80 * intensity / 100;
    rgb[13][2][0] = 156 * intensity / 100; 
    
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
    
    rgb[18][0][0] = 215 * intensity / 100;
    rgb[18][1][0] = 80 * intensity / 100;
    rgb[18][2][0] = 156 * intensity / 100; 
    
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
    
    rgb[26][0][0] = 0 * intensity / 100;
    rgb[26][1][0] = 0 * intensity / 100;
    rgb[26][2][0] = 0 * intensity / 100; 
    
    rgb[27][0][0] = 215 * intensity / 100;
    rgb[27][1][0] = 80 * intensity / 100;
    rgb[27][2][0] = 156 * intensity / 100; 
    
    rgb[28][0][0] = 215 * intensity / 100;
    rgb[28][1][0] = 80 * intensity / 100;
    rgb[28][2][0] = 156 * intensity / 100; 
    
    rgb[29][0][0] = 215 * intensity / 100;
    rgb[29][1][0] = 80 * intensity / 100;
    rgb[29][2][0] = 156 * intensity / 100; 
    
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
    
    rgb[42][0][0] = 0 * intensity / 100;
    rgb[42][1][0] = 0 * intensity / 100;
    rgb[42][2][0] = 0 * intensity / 100; 
    
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

    
    rgb[64][0][0] = 0 * intensity / 100;
    rgb[64][1][0] = 0 * intensity / 100;
    rgb[64][2][0] = 0 * intensity / 100; 
    
    rgb[65][0][0] = 0 * intensity / 100;
    rgb[65][1][0] = 0 * intensity / 100;
    rgb[65][2][0] = 0 * intensity / 100; 
    
    rgb[66][0][0] = 0 * intensity / 100;
    rgb[66][1][0] = 0 * intensity / 100;
    rgb[66][2][0] = 0 * intensity / 100; 
    
    rgb[67][0][0] = 0 * intensity / 100;
    rgb[67][1][0] = 0 * intensity / 100;
    rgb[67][2][0] = 0 * intensity / 100; 
    
    rgb[68][0][0] = 0 * intensity / 100;
    rgb[68][1][0] = 0 * intensity / 100;
    rgb[68][2][0] = 0 * intensity / 100; 
    
    rgb[69][0][0] = 0 * intensity / 100;
    rgb[69][1][0] = 0 * intensity / 100;
    rgb[69][2][0] = 0 * intensity / 100; 
    
    rgb[70][0][0] = 0 * intensity / 100;
    rgb[70][1][0] = 0 * intensity / 100;
    rgb[70][2][0] = 0 * intensity / 100; 
    
    rgb[71][0][0] = 0 * intensity / 100;
    rgb[71][1][0] = 0 * intensity / 100;
    rgb[71][2][0] = 0 * intensity / 100; 
    
    rgb[72][0][0] = 0 * intensity / 100;
    rgb[72][1][0] = 0 * intensity / 100;
    rgb[72][2][0] = 0 * intensity / 100; 
    
    rgb[73][0][0] = 0 * intensity / 100;
    rgb[73][1][0] = 0 * intensity / 100;
    rgb[73][2][0] = 0 * intensity / 100; 
    
    rgb[74][0][0] = 215 * intensity / 100;
    rgb[74][1][0] = 80 * intensity / 100;
    rgb[74][2][0] = 156 * intensity / 100; 
    
    rgb[75][0][0] = 215 * intensity / 100;
    rgb[75][1][0] = 80 * intensity / 100;
    rgb[75][2][0] = 156 * intensity / 100; 
    
    rgb[76][0][0] = 215 * intensity / 100;
    rgb[76][1][0] = 80 * intensity / 100;
    rgb[76][2][0] = 156 * intensity / 100; 
    
    rgb[77][0][0] = 0 * intensity / 100;
    rgb[77][1][0] = 0 * intensity / 100;
    rgb[77][2][0] = 0 * intensity / 100; 
    
    rgb[78][0][0] = 215 * intensity / 100;
    rgb[78][1][0] = 80 * intensity / 100;
    rgb[78][2][0] = 156 * intensity / 100; 
    
    rgb[79][0][0] = 0 * intensity / 100;
    rgb[79][1][0] = 0 * intensity / 100;
    rgb[79][2][0] = 0 * intensity / 100; 
    
    rgb[80][0][0] = 0 * intensity / 100;
    rgb[80][1][0] = 0 * intensity / 100;
    rgb[80][2][0] = 0 * intensity / 100; 
    
    rgb[81][0][0] = 0 * intensity / 100;
    rgb[81][1][0] = 0 * intensity / 100;
    rgb[81][2][0] = 0 * intensity / 100; 
    
    rgb[82][0][0] = 215 * intensity / 100;
    rgb[82][1][0] = 80 * intensity / 100;
    rgb[82][2][0] = 156 * intensity / 100; 
    
    rgb[83][0][0] = 215 * intensity / 100;
    rgb[83][1][0] = 80 * intensity / 100;
    rgb[83][2][0] = 156 * intensity / 100; 
    
    rgb[84][0][0] = 215 * intensity / 100;
    rgb[84][1][0] = 80 * intensity / 100;
    rgb[84][2][0] = 156 * intensity / 100; 
    
    rgb[85][0][0] = 215 * intensity / 100;
    rgb[85][1][0] = 80 * intensity / 100;
    rgb[85][2][0] = 156 * intensity / 100; 
    
    rgb[86][0][0] = 0 * intensity / 100;
    rgb[86][1][0] = 0 * intensity / 100;
    rgb[86][2][0] = 0 * intensity / 100; 
    
    rgb[87][0][0] = 0 * intensity / 100;
    rgb[87][1][0] = 0 * intensity / 100;
    rgb[87][2][0] = 0 * intensity / 100; 
    
    rgb[88][0][0] = 0 * intensity / 100;
    rgb[88][1][0] = 0 * intensity / 100;
    rgb[88][2][0] = 0 * intensity / 100; 
    
    rgb[89][0][0] = 0 * intensity / 100;
    rgb[89][1][0] = 0 * intensity / 100;
    rgb[89][2][0] = 0 * intensity / 100; 
    
    rgb[90][0][0] = 215 * intensity / 100;
    rgb[90][1][0] = 80 * intensity / 100;
    rgb[90][2][0] = 156 * intensity / 100; 
    
    rgb[91][0][0] = 215 * intensity / 100;
    rgb[91][1][0] = 80 * intensity / 100;
    rgb[91][2][0] = 156 * intensity / 100; 
    
    rgb[92][0][0] = 215 * intensity / 100;
    rgb[92][1][0] = 80 * intensity / 100;
    rgb[92][2][0] = 156 * intensity / 100; 
    
    rgb[93][0][0] = 0 * intensity / 100;
    rgb[93][1][0] = 0 * intensity / 100;
    rgb[93][2][0] = 0 * intensity / 100; 
    
    rgb[94][0][0] = 0 * intensity / 100;
    rgb[94][1][0] = 0 * intensity / 100;
    rgb[94][2][0] = 0 * intensity / 100; 
    
    rgb[95][0][0] = 0 * intensity / 100;
    rgb[95][1][0] = 0 * intensity / 100;
    rgb[95][2][0] = 0 * intensity / 100; 
    
    rgb[96][0][0] = 0 * intensity / 100;
    rgb[96][1][0] = 0 * intensity / 100;
    rgb[96][2][0] = 0 * intensity / 100; 
    
    rgb[97][0][0] = 0 * intensity / 100;
    rgb[97][1][0] = 0 * intensity / 100;
    rgb[97][2][0] = 0 * intensity / 100; 
    
    rgb[98][0][0] = 215 * intensity / 100;
    rgb[98][1][0] = 80 * intensity / 100;
    rgb[98][2][0] = 156 * intensity / 100; 
    
    rgb[99][0][0] = 215 * intensity / 100;
    rgb[99][1][0] = 80 * intensity / 100;
    rgb[99][2][0] = 156 * intensity / 100; 
    
    rgb[100][0][0] = 215 * intensity / 100;
    rgb[100][1][0] = 80 * intensity / 100;
    rgb[100][2][0] = 156 * intensity / 100; 
    
    rgb[101][0][0] = 0 * intensity / 100;
    rgb[101][1][0] = 0 * intensity / 100;
    rgb[101][2][0] = 0 * intensity / 100; 
    
    rgb[102][0][0] = 0 * intensity / 100;
    rgb[102][1][0] = 0 * intensity / 100;
    rgb[102][2][0] = 0 * intensity / 100; 
    
    rgb[103][0][0] = 0 * intensity / 100;
    rgb[103][1][0] = 0 * intensity / 100;
    rgb[103][2][0] = 0 * intensity / 100; 
    
    rgb[104][0][0] = 0 * intensity / 100;
    rgb[104][1][0] = 0 * intensity / 100;
    rgb[104][2][0] = 0 * intensity / 100; 
    
    rgb[105][0][0] = 0 * intensity / 100;
    rgb[105][1][0] = 0 * intensity / 100;
    rgb[105][2][0] = 0 * intensity / 100; 
    
    rgb[106][0][0] = 215 * intensity / 100;
    rgb[106][1][0] = 80 * intensity / 100;
    rgb[106][2][0] = 156 * intensity / 100; 
    
    rgb[107][0][0] = 215 * intensity / 100;
    rgb[107][1][0] = 80 * intensity / 100;
    rgb[107][2][0] = 156 * intensity / 100; 
    
    rgb[108][0][0] = 215 * intensity / 100;
    rgb[108][1][0] = 80 * intensity / 100;
    rgb[108][2][0] = 156 * intensity / 100; 
    
    rgb[109][0][0] = 0 * intensity / 100;
    rgb[109][1][0] = 0 * intensity / 100;
    rgb[109][2][0] = 0 * intensity / 100; 
    
    rgb[110][0][0] = 0 * intensity / 100;
    rgb[110][1][0] = 0 * intensity / 100;
    rgb[110][2][0] = 0 * intensity / 100; 
    
    rgb[111][0][0] = 0 * intensity / 100;
    rgb[111][1][0] = 0 * intensity / 100;
    rgb[111][2][0] = 0 * intensity / 100; 
    
    rgb[112][0][0] = 0 * intensity / 100;
    rgb[112][1][0] = 0 * intensity / 100;
    rgb[112][2][0] = 0 * intensity / 100; 
    
    rgb[113][0][0] = 0 * intensity / 100;
    rgb[113][1][0] = 0 * intensity / 100;
    rgb[113][2][0] = 0 * intensity / 100; 
    
    rgb[114][0][0] = 215 * intensity / 100;
    rgb[114][1][0] = 80 * intensity / 100;
    rgb[114][2][0] = 156 * intensity / 100; 
    
    rgb[115][0][0] = 215 * intensity / 100;
    rgb[115][1][0] = 80 * intensity / 100;
    rgb[115][2][0] = 156 * intensity / 100; 
    
    rgb[116][0][0] = 215 * intensity / 100;
    rgb[116][1][0] = 80 * intensity / 100;
    rgb[116][2][0] = 156 * intensity / 100; 
    
    rgb[117][0][0] = 0 * intensity / 100;
    rgb[117][1][0] = 0 * intensity / 100;
    rgb[117][2][0] = 0 * intensity / 100; 
    
    rgb[118][0][0] = 0 * intensity / 100;
    rgb[118][1][0] = 0 * intensity / 100;
    rgb[118][2][0] = 0 * intensity / 100; 
    
    rgb[119][0][0] = 0 * intensity / 100;
    rgb[119][1][0] = 0 * intensity / 100;
    rgb[119][2][0] = 0 * intensity / 100; 
    
    rgb[120][0][0] = 0 * intensity / 100;
    rgb[120][1][0] = 0 * intensity / 100;
    rgb[120][2][0] = 0 * intensity / 100; 
    
    rgb[121][0][0] = 0 * intensity / 100;
    rgb[121][1][0] = 0 * intensity / 100;
    rgb[121][2][0] = 0 * intensity / 100; 
    
    rgb[122][0][0] = 0 * intensity / 100;
    rgb[122][1][0] = 0 * intensity / 100;
    rgb[122][2][0] = 0 * intensity / 100; 
    
    rgb[123][0][0] = 0 * intensity / 100;
    rgb[123][1][0] = 0 * intensity / 100;
    rgb[123][2][0] = 0 * intensity / 100; 
    
    rgb[124][0][0] = 0 * intensity / 100;
    rgb[124][1][0] = 0 * intensity / 100;
    rgb[124][2][0] = 0 * intensity / 100; 
    
    rgb[125][0][0] = 0 * intensity / 100;
    rgb[125][1][0] = 0 * intensity / 100;
    rgb[125][2][0] = 0 * intensity / 100; 
    
    rgb[126][0][0] = 0 * intensity / 100;
    rgb[126][1][0] = 0 * intensity / 100;
    rgb[126][2][0] = 0 * intensity / 100; 
    
    rgb[127][0][0] = 0 * intensity / 100;
    rgb[127][1][0] = 0 * intensity / 100;
    rgb[127][2][0] = 0 * intensity / 100; 
    

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
    
    rgb[9][0][1] = 215 * intensity / 100;
    rgb[9][1][1] = 80 * intensity / 100;
    rgb[9][2][1] = 156 * intensity / 100; 
    
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
    
    rgb[17][0][1] = 0 * intensity / 100;
    rgb[17][1][1] = 0 * intensity / 100;
    rgb[17][2][1] = 0 * intensity / 100; 
    
    rgb[18][0][1] = 215 * intensity / 100;
    rgb[18][1][1] = 80 * intensity / 100;
    rgb[18][2][1] = 156 * intensity / 100; 
    
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
    
    rgb[26][0][1] = 0 * intensity / 100;
    rgb[26][1][1] = 0 * intensity / 100;
    rgb[26][2][1] = 0 * intensity / 100; 
    
    rgb[27][0][1] = 215 * intensity / 100;
    rgb[27][1][1] = 80 * intensity / 100;
    rgb[27][2][1] = 156 * intensity / 100; 
    
    rgb[28][0][1] = 215 * intensity / 100;
    rgb[28][1][1] = 80 * intensity / 100;
    rgb[28][2][1] = 156 * intensity / 100; 
    
    rgb[29][0][1] = 215 * intensity / 100;
    rgb[29][1][1] = 80 * intensity / 100;
    rgb[29][2][1] = 156 * intensity / 100; 
    
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
    
    rgb[42][0][1] = 0 * intensity / 100;
    rgb[42][1][1] = 0 * intensity / 100;
    rgb[42][2][1] = 0 * intensity / 100; 
    
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

    
    rgb[64][0][1] = 0 * intensity / 100;
    rgb[64][1][1] = 0 * intensity / 100;
    rgb[64][2][1] = 0 * intensity / 100; 
    
    rgb[65][0][1] = 0 * intensity / 100;
    rgb[65][1][1] = 0 * intensity / 100;
    rgb[65][2][1] = 0 * intensity / 100; 
    
    rgb[66][0][1] = 0 * intensity / 100;
    rgb[66][1][1] = 0 * intensity / 100;
    rgb[66][2][1] = 0 * intensity / 100; 
    
    rgb[67][0][1] = 0 * intensity / 100;
    rgb[67][1][1] = 0 * intensity / 100;
    rgb[67][2][1] = 0 * intensity / 100; 
    
    rgb[68][0][1] = 0 * intensity / 100;
    rgb[68][1][1] = 0 * intensity / 100;
    rgb[68][2][1] = 0 * intensity / 100; 
    
    rgb[69][0][1] = 0 * intensity / 100;
    rgb[69][1][1] = 0 * intensity / 100;
    rgb[69][2][1] = 0 * intensity / 100; 
    
    rgb[70][0][1] = 0 * intensity / 100;
    rgb[70][1][1] = 0 * intensity / 100;
    rgb[70][2][1] = 0 * intensity / 100; 
    
    rgb[71][0][1] = 0 * intensity / 100;
    rgb[71][1][1] = 0 * intensity / 100;
    rgb[71][2][1] = 0 * intensity / 100; 
    
    rgb[72][0][1] = 0 * intensity / 100;
    rgb[72][1][1] = 0 * intensity / 100;
    rgb[72][2][1] = 0 * intensity / 100; 
    
    rgb[73][0][1] = 0 * intensity / 100;
    rgb[73][1][1] = 0 * intensity / 100;
    rgb[73][2][1] = 0 * intensity / 100; 
    
    rgb[74][0][1] = 0 * intensity / 100;
    rgb[74][1][1] = 0 * intensity / 100;
    rgb[74][2][1] = 0 * intensity / 100; 
    
    rgb[75][0][1] = 0 * intensity / 100;
    rgb[75][1][1] = 0 * intensity / 100;
    rgb[75][2][1] = 0 * intensity / 100; 
    
    rgb[76][0][1] = 0 * intensity / 100;
    rgb[76][1][1] = 0 * intensity / 100;
    rgb[76][2][1] = 0 * intensity / 100; 
    
    rgb[77][0][1] = 0 * intensity / 100;
    rgb[77][1][1] = 0 * intensity / 100;
    rgb[77][2][1] = 0 * intensity / 100; 
    
    rgb[78][0][1] = 215 * intensity / 100;
    rgb[78][1][1] = 80 * intensity / 100;
    rgb[78][2][1] = 156 * intensity / 100; 
    
    rgb[79][0][1] = 0 * intensity / 100;
    rgb[79][1][1] = 0 * intensity / 100;
    rgb[79][2][1] = 0 * intensity / 100; 
    
    rgb[80][0][1] = 0 * intensity / 100;
    rgb[80][1][1] = 0 * intensity / 100;
    rgb[80][2][1] = 0 * intensity / 100; 
    
    rgb[81][0][1] = 0 * intensity / 100;
    rgb[81][1][1] = 0 * intensity / 100;
    rgb[81][2][1] = 0 * intensity / 100; 
    
    rgb[82][0][1] = 215 * intensity / 100;
    rgb[82][1][1] = 80 * intensity / 100;
    rgb[82][2][1] = 156 * intensity / 100; 
    
    rgb[83][0][1] = 215 * intensity / 100;
    rgb[83][1][1] = 80 * intensity / 100;
    rgb[83][2][1] = 156 * intensity / 100; 
    
    rgb[84][0][1] = 215 * intensity / 100;
    rgb[84][1][1] = 80 * intensity / 100;
    rgb[84][2][1] = 156 * intensity / 100; 
    
    rgb[85][0][1] = 215 * intensity / 100;
    rgb[85][1][1] = 80 * intensity / 100;
    rgb[85][2][1] = 156 * intensity / 100; 
    
    rgb[86][0][1] = 0 * intensity / 100;
    rgb[86][1][1] = 0 * intensity / 100;
    rgb[86][2][1] = 0 * intensity / 100; 
    
    rgb[87][0][1] = 0 * intensity / 100;
    rgb[87][1][1] = 0 * intensity / 100;
    rgb[87][2][1] = 0 * intensity / 100; 
    
    rgb[88][0][1] = 0 * intensity / 100;
    rgb[88][1][1] = 0 * intensity / 100;
    rgb[88][2][1] = 0 * intensity / 100; 
    
    rgb[89][0][1] = 0 * intensity / 100;
    rgb[89][1][1] = 0 * intensity / 100;
    rgb[89][2][1] = 0 * intensity / 100; 
    
    rgb[90][0][1] = 215 * intensity / 100;
    rgb[90][1][1] = 80 * intensity / 100;
    rgb[90][2][1] = 156 * intensity / 100; 
    
    rgb[91][0][1] = 215 * intensity / 100;
    rgb[91][1][1] = 80 * intensity / 100;
    rgb[91][2][1] = 156 * intensity / 100; 
    
    rgb[92][0][1] = 215 * intensity / 100;
    rgb[92][1][1] = 80 * intensity / 100;
    rgb[92][2][1] = 156 * intensity / 100; 
    
    rgb[93][0][1] = 0 * intensity / 100;
    rgb[93][1][1] = 0 * intensity / 100;
    rgb[93][2][1] = 0 * intensity / 100; 
    
    rgb[94][0][1] = 0 * intensity / 100;
    rgb[94][1][1] = 0 * intensity / 100;
    rgb[94][2][1] = 0 * intensity / 100; 
    
    rgb[95][0][1] = 0 * intensity / 100;
    rgb[95][1][1] = 0 * intensity / 100;
    rgb[95][2][1] = 0 * intensity / 100; 
    
    rgb[96][0][1] = 0 * intensity / 100;
    rgb[96][1][1] = 0 * intensity / 100;
    rgb[96][2][1] = 0 * intensity / 100; 
    
    rgb[97][0][1] = 0 * intensity / 100;
    rgb[97][1][1] = 0 * intensity / 100;
    rgb[97][2][1] = 0 * intensity / 100; 
    
    rgb[98][0][1] = 215 * intensity / 100;
    rgb[98][1][1] = 80 * intensity / 100;
    rgb[98][2][1] = 156 * intensity / 100; 
    
    rgb[99][0][1] = 215 * intensity / 100;
    rgb[99][1][1] = 80 * intensity / 100;
    rgb[99][2][1] = 156 * intensity / 100; 
    
    rgb[100][0][1] = 215 * intensity / 100;
    rgb[100][1][1] = 80 * intensity / 100;
    rgb[100][2][1] = 156 * intensity / 100; 
    
    rgb[101][0][1] = 0 * intensity / 100;
    rgb[101][1][1] = 0 * intensity / 100;
    rgb[101][2][1] = 0 * intensity / 100; 
    
    rgb[102][0][1] = 0 * intensity / 100;
    rgb[102][1][1] = 0 * intensity / 100;
    rgb[102][2][1] = 0 * intensity / 100; 
    
    rgb[103][0][1] = 0 * intensity / 100;
    rgb[103][1][1] = 0 * intensity / 100;
    rgb[103][2][1] = 0 * intensity / 100; 
    
    rgb[104][0][1] = 0 * intensity / 100;
    rgb[104][1][1] = 0 * intensity / 100;
    rgb[104][2][1] = 0 * intensity / 100; 
    
    rgb[105][0][1] = 0 * intensity / 100;
    rgb[105][1][1] = 0 * intensity / 100;
    rgb[105][2][1] = 0 * intensity / 100; 
    
    rgb[106][0][1] = 215 * intensity / 100;
    rgb[106][1][1] = 80 * intensity / 100;
    rgb[106][2][1] = 156 * intensity / 100; 
    
    rgb[107][0][1] = 215 * intensity / 100;
    rgb[107][1][1] = 80 * intensity / 100;
    rgb[107][2][1] = 156 * intensity / 100; 
    
    rgb[108][0][1] = 215 * intensity / 100;
    rgb[108][1][1] = 80 * intensity / 100;
    rgb[108][2][1] = 156 * intensity / 100; 
    
    rgb[109][0][1] = 0 * intensity / 100;
    rgb[109][1][1] = 0 * intensity / 100;
    rgb[109][2][1] = 0 * intensity / 100; 
    
    rgb[110][0][1] = 0 * intensity / 100;
    rgb[110][1][1] = 0 * intensity / 100;
    rgb[110][2][1] = 0 * intensity / 100; 
    
    rgb[111][0][1] = 0 * intensity / 100;
    rgb[111][1][1] = 0 * intensity / 100;
    rgb[111][2][1] = 0 * intensity / 100; 
    
    rgb[112][0][1] = 0 * intensity / 100;
    rgb[112][1][1] = 0 * intensity / 100;
    rgb[112][2][1] = 0 * intensity / 100; 
    
    rgb[113][0][1] = 0 * intensity / 100;
    rgb[113][1][1] = 0 * intensity / 100;
    rgb[113][2][1] = 0 * intensity / 100; 
    
    rgb[114][0][1] = 215 * intensity / 100;
    rgb[114][1][1] = 80 * intensity / 100;
    rgb[114][2][1] = 156 * intensity / 100; 
    
    rgb[115][0][1] = 215 * intensity / 100;
    rgb[115][1][1] = 80 * intensity / 100;
    rgb[115][2][1] = 156 * intensity / 100; 
    
    rgb[116][0][1] = 215 * intensity / 100;
    rgb[116][1][1] = 80 * intensity / 100;
    rgb[116][2][1] = 156 * intensity / 100; 
    
    rgb[117][0][1] = 0 * intensity / 100;
    rgb[117][1][1] = 0 * intensity / 100;
    rgb[117][2][1] = 0 * intensity / 100; 
    
    rgb[118][0][1] = 0 * intensity / 100;
    rgb[118][1][1] = 0 * intensity / 100;
    rgb[118][2][1] = 0 * intensity / 100; 
    
    rgb[119][0][1] = 0 * intensity / 100;
    rgb[119][1][1] = 0 * intensity / 100;
    rgb[119][2][1] = 0 * intensity / 100; 
    
    rgb[120][0][1] = 0 * intensity / 100;
    rgb[120][1][1] = 0 * intensity / 100;
    rgb[120][2][1] = 0 * intensity / 100; 
    
    rgb[121][0][1] = 0 * intensity / 100;
    rgb[121][1][1] = 0 * intensity / 100;
    rgb[121][2][1] = 0 * intensity / 100; 
    
    rgb[122][0][1] = 0 * intensity / 100;
    rgb[122][1][1] = 0 * intensity / 100;
    rgb[122][2][1] = 0 * intensity / 100; 
    
    rgb[123][0][1] = 0 * intensity / 100;
    rgb[123][1][1] = 0 * intensity / 100;
    rgb[123][2][1] = 0 * intensity / 100; 
    
    rgb[124][0][1] = 0 * intensity / 100;
    rgb[124][1][1] = 0 * intensity / 100;
    rgb[124][2][1] = 0 * intensity / 100; 
    
    rgb[125][0][1] = 0 * intensity / 100;
    rgb[125][1][1] = 0 * intensity / 100;
    rgb[125][2][1] = 0 * intensity / 100; 
    
    rgb[126][0][1] = 0 * intensity / 100;
    rgb[126][1][1] = 0 * intensity / 100;
    rgb[126][2][1] = 0 * intensity / 100; 
    
    rgb[127][0][1] = 0 * intensity / 100;
    rgb[127][1][1] = 0 * intensity / 100;
    rgb[127][2][1] = 0 * intensity / 100; 
    

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
    
    rgb[17][0][2] = 215 * intensity / 100;
    rgb[17][1][2] = 80 * intensity / 100;
    rgb[17][2][2] = 156 * intensity / 100; 
    
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
    
    rgb[26][0][2] = 215 * intensity / 100;
    rgb[26][1][2] = 80 * intensity / 100;
    rgb[26][2][2] = 156 * intensity / 100; 
    
    rgb[27][0][2] = 215 * intensity / 100;
    rgb[27][1][2] = 80 * intensity / 100;
    rgb[27][2][2] = 156 * intensity / 100; 
    
    rgb[28][0][2] = 215 * intensity / 100;
    rgb[28][1][2] = 80 * intensity / 100;
    rgb[28][2][2] = 156 * intensity / 100; 
    
    rgb[29][0][2] = 215 * intensity / 100;
    rgb[29][1][2] = 80 * intensity / 100;
    rgb[29][2][2] = 156 * intensity / 100; 
    
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
    
    rgb[42][0][2] = 0 * intensity / 100;
    rgb[42][1][2] = 0 * intensity / 100;
    rgb[42][2][2] = 0 * intensity / 100; 
    
    rgb[43][0][2] = 215 * intensity / 100;
    rgb[43][1][2] = 80 * intensity / 100;
    rgb[43][2][2] = 156 * intensity / 100; 
    
    rgb[44][0][2] = 215 * intensity / 100;
    rgb[44][1][2] = 80 * intensity / 100;
    rgb[44][2][2] = 156 * intensity / 100; 
    
    rgb[45][0][2] = 215 * intensity / 100;
    rgb[45][1][2] = 80 * intensity / 100;
    rgb[45][2][2] = 156 * intensity / 100; 
    
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

    
    rgb[64][0][2] = 0 * intensity / 100;
    rgb[64][1][2] = 0 * intensity / 100;
    rgb[64][2][2] = 0 * intensity / 100; 
    
    rgb[65][0][2] = 0 * intensity / 100;
    rgb[65][1][2] = 0 * intensity / 100;
    rgb[65][2][2] = 0 * intensity / 100; 
    
    rgb[66][0][2] = 0 * intensity / 100;
    rgb[66][1][2] = 0 * intensity / 100;
    rgb[66][2][2] = 0 * intensity / 100; 
    
    rgb[67][0][2] = 0 * intensity / 100;
    rgb[67][1][2] = 0 * intensity / 100;
    rgb[67][2][2] = 0 * intensity / 100; 
    
    rgb[68][0][2] = 0 * intensity / 100;
    rgb[68][1][2] = 0 * intensity / 100;
    rgb[68][2][2] = 0 * intensity / 100; 
    
    rgb[69][0][2] = 0 * intensity / 100;
    rgb[69][1][2] = 0 * intensity / 100;
    rgb[69][2][2] = 0 * intensity / 100; 
    
    rgb[70][0][2] = 0 * intensity / 100;
    rgb[70][1][2] = 0 * intensity / 100;
    rgb[70][2][2] = 0 * intensity / 100; 
    
    rgb[71][0][2] = 0 * intensity / 100;
    rgb[71][1][2] = 0 * intensity / 100;
    rgb[71][2][2] = 0 * intensity / 100; 
    
    rgb[72][0][2] = 0 * intensity / 100;
    rgb[72][1][2] = 0 * intensity / 100;
    rgb[72][2][2] = 0 * intensity / 100; 
    
    rgb[73][0][2] = 0 * intensity / 100;
    rgb[73][1][2] = 0 * intensity / 100;
    rgb[73][2][2] = 0 * intensity / 100; 
    
    rgb[74][0][2] = 0 * intensity / 100;
    rgb[74][1][2] = 0 * intensity / 100;
    rgb[74][2][2] = 0 * intensity / 100; 
    
    rgb[75][0][2] = 0 * intensity / 100;
    rgb[75][1][2] = 0 * intensity / 100;
    rgb[75][2][2] = 0 * intensity / 100; 
    
    rgb[76][0][2] = 0 * intensity / 100;
    rgb[76][1][2] = 0 * intensity / 100;
    rgb[76][2][2] = 0 * intensity / 100; 
    
    rgb[77][0][2] = 0 * intensity / 100;
    rgb[77][1][2] = 0 * intensity / 100;
    rgb[77][2][2] = 0 * intensity / 100; 
    
    rgb[78][0][2] = 0 * intensity / 100;
    rgb[78][1][2] = 0 * intensity / 100;
    rgb[78][2][2] = 0 * intensity / 100; 
    
    rgb[79][0][2] = 0 * intensity / 100;
    rgb[79][1][2] = 0 * intensity / 100;
    rgb[79][2][2] = 0 * intensity / 100; 
    
    rgb[80][0][2] = 0 * intensity / 100;
    rgb[80][1][2] = 0 * intensity / 100;
    rgb[80][2][2] = 0 * intensity / 100; 
    
    rgb[81][0][2] = 0 * intensity / 100;
    rgb[81][1][2] = 0 * intensity / 100;
    rgb[81][2][2] = 0 * intensity / 100; 
    
    rgb[82][0][2] = 0 * intensity / 100;
    rgb[82][1][2] = 0 * intensity / 100;
    rgb[82][2][2] = 0 * intensity / 100; 
    
    rgb[83][0][2] = 0 * intensity / 100;
    rgb[83][1][2] = 0 * intensity / 100;
    rgb[83][2][2] = 0 * intensity / 100; 
    
    rgb[84][0][2] = 0 * intensity / 100;
    rgb[84][1][2] = 0 * intensity / 100;
    rgb[84][2][2] = 0 * intensity / 100; 
    
    rgb[85][0][2] = 0 * intensity / 100;
    rgb[85][1][2] = 0 * intensity / 100;
    rgb[85][2][2] = 0 * intensity / 100; 
    
    rgb[86][0][2] = 215 * intensity / 100;
    rgb[86][1][2] = 80 * intensity / 100;
    rgb[86][2][2] = 156 * intensity / 100; 
    
    rgb[87][0][2] = 0 * intensity / 100;
    rgb[87][1][2] = 0 * intensity / 100;
    rgb[87][2][2] = 0 * intensity / 100; 
    
    rgb[88][0][2] = 0 * intensity / 100;
    rgb[88][1][2] = 0 * intensity / 100;
    rgb[88][2][2] = 0 * intensity / 100; 
    
    rgb[89][0][2] = 0 * intensity / 100;
    rgb[89][1][2] = 0 * intensity / 100;
    rgb[89][2][2] = 0 * intensity / 100; 
    
    rgb[90][0][2] = 215 * intensity / 100;
    rgb[90][1][2] = 80 * intensity / 100;
    rgb[90][2][2] = 156 * intensity / 100; 
    
    rgb[91][0][2] = 215 * intensity / 100;
    rgb[91][1][2] = 80 * intensity / 100;
    rgb[91][2][2] = 156 * intensity / 100; 
    
    rgb[92][0][2] = 215 * intensity / 100;
    rgb[92][1][2] = 80 * intensity / 100;
    rgb[92][2][2] = 156 * intensity / 100; 
    
    rgb[93][0][2] = 215 * intensity / 100;
    rgb[93][1][2] = 80 * intensity / 100;
    rgb[93][2][2] = 156 * intensity / 100; 
    
    rgb[94][0][2] = 0 * intensity / 100;
    rgb[94][1][2] = 0 * intensity / 100;
    rgb[94][2][2] = 0 * intensity / 100; 
    
    rgb[95][0][2] = 0 * intensity / 100;
    rgb[95][1][2] = 0 * intensity / 100;
    rgb[95][2][2] = 0 * intensity / 100; 
    
    rgb[96][0][2] = 0 * intensity / 100;
    rgb[96][1][2] = 0 * intensity / 100;
    rgb[96][2][2] = 0 * intensity / 100; 
    
    rgb[97][0][2] = 0 * intensity / 100;
    rgb[97][1][2] = 0 * intensity / 100;
    rgb[97][2][2] = 0 * intensity / 100; 
    
    rgb[98][0][2] = 215 * intensity / 100;
    rgb[98][1][2] = 80 * intensity / 100;
    rgb[98][2][2] = 156 * intensity / 100; 
    
    rgb[99][0][2] = 215 * intensity / 100;
    rgb[99][1][2] = 80 * intensity / 100;
    rgb[99][2][2] = 156 * intensity / 100; 
    
    rgb[100][0][2] = 215 * intensity / 100;
    rgb[100][1][2] = 80 * intensity / 100;
    rgb[100][2][2] = 156 * intensity / 100; 
    
    rgb[101][0][2] = 0 * intensity / 100;
    rgb[101][1][2] = 0 * intensity / 100;
    rgb[101][2][2] = 0 * intensity / 100; 
    
    rgb[102][0][2] = 0 * intensity / 100;
    rgb[102][1][2] = 0 * intensity / 100;
    rgb[102][2][2] = 0 * intensity / 100; 
    
    rgb[103][0][2] = 0 * intensity / 100;
    rgb[103][1][2] = 0 * intensity / 100;
    rgb[103][2][2] = 0 * intensity / 100; 
    
    rgb[104][0][2] = 0 * intensity / 100;
    rgb[104][1][2] = 0 * intensity / 100;
    rgb[104][2][2] = 0 * intensity / 100; 
    
    rgb[105][0][2] = 0 * intensity / 100;
    rgb[105][1][2] = 0 * intensity / 100;
    rgb[105][2][2] = 0 * intensity / 100; 
    
    rgb[106][0][2] = 215 * intensity / 100;
    rgb[106][1][2] = 80 * intensity / 100;
    rgb[106][2][2] = 156 * intensity / 100; 
    
    rgb[107][0][2] = 215 * intensity / 100;
    rgb[107][1][2] = 80 * intensity / 100;
    rgb[107][2][2] = 156 * intensity / 100; 
    
    rgb[108][0][2] = 215 * intensity / 100;
    rgb[108][1][2] = 80 * intensity / 100;
    rgb[108][2][2] = 156 * intensity / 100; 
    
    rgb[109][0][2] = 0 * intensity / 100;
    rgb[109][1][2] = 0 * intensity / 100;
    rgb[109][2][2] = 0 * intensity / 100; 
    
    rgb[110][0][2] = 0 * intensity / 100;
    rgb[110][1][2] = 0 * intensity / 100;
    rgb[110][2][2] = 0 * intensity / 100; 
    
    rgb[111][0][2] = 0 * intensity / 100;
    rgb[111][1][2] = 0 * intensity / 100;
    rgb[111][2][2] = 0 * intensity / 100; 
    
    rgb[112][0][2] = 0 * intensity / 100;
    rgb[112][1][2] = 0 * intensity / 100;
    rgb[112][2][2] = 0 * intensity / 100; 
    
    rgb[113][0][2] = 0 * intensity / 100;
    rgb[113][1][2] = 0 * intensity / 100;
    rgb[113][2][2] = 0 * intensity / 100; 
    
    rgb[114][0][2] = 215 * intensity / 100;
    rgb[114][1][2] = 80 * intensity / 100;
    rgb[114][2][2] = 156 * intensity / 100; 
    
    rgb[115][0][2] = 215 * intensity / 100;
    rgb[115][1][2] = 80 * intensity / 100;
    rgb[115][2][2] = 156 * intensity / 100; 
    
    rgb[116][0][2] = 215 * intensity / 100;
    rgb[116][1][2] = 80 * intensity / 100;
    rgb[116][2][2] = 156 * intensity / 100; 
    
    rgb[117][0][2] = 0 * intensity / 100;
    rgb[117][1][2] = 0 * intensity / 100;
    rgb[117][2][2] = 0 * intensity / 100; 
    
    rgb[118][0][2] = 0 * intensity / 100;
    rgb[118][1][2] = 0 * intensity / 100;
    rgb[118][2][2] = 0 * intensity / 100; 
    
    rgb[119][0][2] = 0 * intensity / 100;
    rgb[119][1][2] = 0 * intensity / 100;
    rgb[119][2][2] = 0 * intensity / 100; 
    
    rgb[120][0][2] = 0 * intensity / 100;
    rgb[120][1][2] = 0 * intensity / 100;
    rgb[120][2][2] = 0 * intensity / 100; 
    
    rgb[121][0][2] = 0 * intensity / 100;
    rgb[121][1][2] = 0 * intensity / 100;
    rgb[121][2][2] = 0 * intensity / 100; 
    
    rgb[122][0][2] = 0 * intensity / 100;
    rgb[122][1][2] = 0 * intensity / 100;
    rgb[122][2][2] = 0 * intensity / 100; 
    
    rgb[123][0][2] = 0 * intensity / 100;
    rgb[123][1][2] = 0 * intensity / 100;
    rgb[123][2][2] = 0 * intensity / 100; 
    
    rgb[124][0][2] = 0 * intensity / 100;
    rgb[124][1][2] = 0 * intensity / 100;
    rgb[124][2][2] = 0 * intensity / 100; 
    
    rgb[125][0][2] = 0 * intensity / 100;
    rgb[125][1][2] = 0 * intensity / 100;
    rgb[125][2][2] = 0 * intensity / 100; 
    
    rgb[126][0][2] = 0 * intensity / 100;
    rgb[126][1][2] = 0 * intensity / 100;
    rgb[126][2][2] = 0 * intensity / 100; 
    
    rgb[127][0][2] = 0 * intensity / 100;
    rgb[127][1][2] = 0 * intensity / 100;
    rgb[127][2][2] = 0 * intensity / 100; 
    

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
    
    rgb[25][0][3] = 215 * intensity / 100;
    rgb[25][1][3] = 80 * intensity / 100;
    rgb[25][2][3] = 156 * intensity / 100; 
    
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
    
    rgb[34][0][3] = 215 * intensity / 100;
    rgb[34][1][3] = 80 * intensity / 100;
    rgb[34][2][3] = 156 * intensity / 100; 
    
    rgb[35][0][3] = 215 * intensity / 100;
    rgb[35][1][3] = 80 * intensity / 100;
    rgb[35][2][3] = 156 * intensity / 100; 
    
    rgb[36][0][3] = 215 * intensity / 100;
    rgb[36][1][3] = 80 * intensity / 100;
    rgb[36][2][3] = 156 * intensity / 100; 
    
    rgb[37][0][3] = 215 * intensity / 100;
    rgb[37][1][3] = 80 * intensity / 100;
    rgb[37][2][3] = 156 * intensity / 100; 
    
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
    
    rgb[43][0][3] = 215 * intensity / 100;
    rgb[43][1][3] = 80 * intensity / 100;
    rgb[43][2][3] = 156 * intensity / 100; 
    
    rgb[44][0][3] = 215 * intensity / 100;
    rgb[44][1][3] = 80 * intensity / 100;
    rgb[44][2][3] = 156 * intensity / 100; 
    
    rgb[45][0][3] = 215 * intensity / 100;
    rgb[45][1][3] = 80 * intensity / 100;
    rgb[45][2][3] = 156 * intensity / 100; 
    
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

    
    rgb[64][0][3] = 0 * intensity / 100;
    rgb[64][1][3] = 0 * intensity / 100;
    rgb[64][2][3] = 0 * intensity / 100; 
    
    rgb[65][0][3] = 0 * intensity / 100;
    rgb[65][1][3] = 0 * intensity / 100;
    rgb[65][2][3] = 0 * intensity / 100; 
    
    rgb[66][0][3] = 0 * intensity / 100;
    rgb[66][1][3] = 0 * intensity / 100;
    rgb[66][2][3] = 0 * intensity / 100; 
    
    rgb[67][0][3] = 0 * intensity / 100;
    rgb[67][1][3] = 0 * intensity / 100;
    rgb[67][2][3] = 0 * intensity / 100; 
    
    rgb[68][0][3] = 0 * intensity / 100;
    rgb[68][1][3] = 0 * intensity / 100;
    rgb[68][2][3] = 0 * intensity / 100; 
    
    rgb[69][0][3] = 0 * intensity / 100;
    rgb[69][1][3] = 0 * intensity / 100;
    rgb[69][2][3] = 0 * intensity / 100; 
    
    rgb[70][0][3] = 0 * intensity / 100;
    rgb[70][1][3] = 0 * intensity / 100;
    rgb[70][2][3] = 0 * intensity / 100; 
    
    rgb[71][0][3] = 0 * intensity / 100;
    rgb[71][1][3] = 0 * intensity / 100;
    rgb[71][2][3] = 0 * intensity / 100; 
    
    rgb[72][0][3] = 0 * intensity / 100;
    rgb[72][1][3] = 0 * intensity / 100;
    rgb[72][2][3] = 0 * intensity / 100; 
    
    rgb[73][0][3] = 0 * intensity / 100;
    rgb[73][1][3] = 0 * intensity / 100;
    rgb[73][2][3] = 0 * intensity / 100; 
    
    rgb[74][0][3] = 0 * intensity / 100;
    rgb[74][1][3] = 0 * intensity / 100;
    rgb[74][2][3] = 0 * intensity / 100; 
    
    rgb[75][0][3] = 0 * intensity / 100;
    rgb[75][1][3] = 0 * intensity / 100;
    rgb[75][2][3] = 0 * intensity / 100; 
    
    rgb[76][0][3] = 0 * intensity / 100;
    rgb[76][1][3] = 0 * intensity / 100;
    rgb[76][2][3] = 0 * intensity / 100; 
    
    rgb[77][0][3] = 0 * intensity / 100;
    rgb[77][1][3] = 0 * intensity / 100;
    rgb[77][2][3] = 0 * intensity / 100; 
    
    rgb[78][0][3] = 0 * intensity / 100;
    rgb[78][1][3] = 0 * intensity / 100;
    rgb[78][2][3] = 0 * intensity / 100; 
    
    rgb[79][0][3] = 0 * intensity / 100;
    rgb[79][1][3] = 0 * intensity / 100;
    rgb[79][2][3] = 0 * intensity / 100; 
    
    rgb[80][0][3] = 0 * intensity / 100;
    rgb[80][1][3] = 0 * intensity / 100;
    rgb[80][2][3] = 0 * intensity / 100; 
    
    rgb[81][0][3] = 0 * intensity / 100;
    rgb[81][1][3] = 0 * intensity / 100;
    rgb[81][2][3] = 0 * intensity / 100; 
    
    rgb[82][0][3] = 0 * intensity / 100;
    rgb[82][1][3] = 0 * intensity / 100;
    rgb[82][2][3] = 0 * intensity / 100; 
    
    rgb[83][0][3] = 0 * intensity / 100;
    rgb[83][1][3] = 0 * intensity / 100;
    rgb[83][2][3] = 0 * intensity / 100; 
    
    rgb[84][0][3] = 0 * intensity / 100;
    rgb[84][1][3] = 0 * intensity / 100;
    rgb[84][2][3] = 0 * intensity / 100; 
    
    rgb[85][0][3] = 0 * intensity / 100;
    rgb[85][1][3] = 0 * intensity / 100;
    rgb[85][2][3] = 0 * intensity / 100; 
    
    rgb[86][0][3] = 0 * intensity / 100;
    rgb[86][1][3] = 0 * intensity / 100;
    rgb[86][2][3] = 0 * intensity / 100; 
    
    rgb[87][0][3] = 0 * intensity / 100;
    rgb[87][1][3] = 0 * intensity / 100;
    rgb[87][2][3] = 0 * intensity / 100; 
    
    rgb[88][0][3] = 0 * intensity / 100;
    rgb[88][1][3] = 0 * intensity / 100;
    rgb[88][2][3] = 0 * intensity / 100; 
    
    rgb[89][0][3] = 0 * intensity / 100;
    rgb[89][1][3] = 0 * intensity / 100;
    rgb[89][2][3] = 0 * intensity / 100; 
    
    rgb[90][0][3] = 0 * intensity / 100;
    rgb[90][1][3] = 0 * intensity / 100;
    rgb[90][2][3] = 0 * intensity / 100; 
    
    rgb[91][0][3] = 0 * intensity / 100;
    rgb[91][1][3] = 0 * intensity / 100;
    rgb[91][2][3] = 0 * intensity / 100; 
    
    rgb[92][0][3] = 0 * intensity / 100;
    rgb[92][1][3] = 0 * intensity / 100;
    rgb[92][2][3] = 0 * intensity / 100; 
    
    rgb[93][0][3] = 0 * intensity / 100;
    rgb[93][1][3] = 0 * intensity / 100;
    rgb[93][2][3] = 0 * intensity / 100; 
    
    rgb[94][0][3] = 215 * intensity / 100;
    rgb[94][1][3] = 80 * intensity / 100;
    rgb[94][2][3] = 156 * intensity / 100; 
    
    rgb[95][0][3] = 0 * intensity / 100;
    rgb[95][1][3] = 0 * intensity / 100;
    rgb[95][2][3] = 0 * intensity / 100; 
    
    rgb[96][0][3] = 0 * intensity / 100;
    rgb[96][1][3] = 0 * intensity / 100;
    rgb[96][2][3] = 0 * intensity / 100; 
    
    rgb[97][0][3] = 0 * intensity / 100;
    rgb[97][1][3] = 0 * intensity / 100;
    rgb[97][2][3] = 0 * intensity / 100; 
    
    rgb[98][0][3] = 215 * intensity / 100;
    rgb[98][1][3] = 80 * intensity / 100;
    rgb[98][2][3] = 156 * intensity / 100; 
    
    rgb[99][0][3] = 215 * intensity / 100;
    rgb[99][1][3] = 80 * intensity / 100;
    rgb[99][2][3] = 156 * intensity / 100; 
    
    rgb[100][0][3] = 215 * intensity / 100;
    rgb[100][1][3] = 80 * intensity / 100;
    rgb[100][2][3] = 156 * intensity / 100; 
    
    rgb[101][0][3] = 215 * intensity / 100;
    rgb[101][1][3] = 80 * intensity / 100;
    rgb[101][2][3] = 156 * intensity / 100; 
    
    rgb[102][0][3] = 0 * intensity / 100;
    rgb[102][1][3] = 0 * intensity / 100;
    rgb[102][2][3] = 0 * intensity / 100; 
    
    rgb[103][0][3] = 0 * intensity / 100;
    rgb[103][1][3] = 0 * intensity / 100;
    rgb[103][2][3] = 0 * intensity / 100; 
    
    rgb[104][0][3] = 0 * intensity / 100;
    rgb[104][1][3] = 0 * intensity / 100;
    rgb[104][2][3] = 0 * intensity / 100; 
    
    rgb[105][0][3] = 0 * intensity / 100;
    rgb[105][1][3] = 0 * intensity / 100;
    rgb[105][2][3] = 0 * intensity / 100; 
    
    rgb[106][0][3] = 215 * intensity / 100;
    rgb[106][1][3] = 80 * intensity / 100;
    rgb[106][2][3] = 156 * intensity / 100; 
    
    rgb[107][0][3] = 215 * intensity / 100;
    rgb[107][1][3] = 80 * intensity / 100;
    rgb[107][2][3] = 156 * intensity / 100; 
    
    rgb[108][0][3] = 215 * intensity / 100;
    rgb[108][1][3] = 80 * intensity / 100;
    rgb[108][2][3] = 156 * intensity / 100; 
    
    rgb[109][0][3] = 0 * intensity / 100;
    rgb[109][1][3] = 0 * intensity / 100;
    rgb[109][2][3] = 0 * intensity / 100; 
    
    rgb[110][0][3] = 0 * intensity / 100;
    rgb[110][1][3] = 0 * intensity / 100;
    rgb[110][2][3] = 0 * intensity / 100; 
    
    rgb[111][0][3] = 0 * intensity / 100;
    rgb[111][1][3] = 0 * intensity / 100;
    rgb[111][2][3] = 0 * intensity / 100; 
    
    rgb[112][0][3] = 0 * intensity / 100;
    rgb[112][1][3] = 0 * intensity / 100;
    rgb[112][2][3] = 0 * intensity / 100; 
    
    rgb[113][0][3] = 0 * intensity / 100;
    rgb[113][1][3] = 0 * intensity / 100;
    rgb[113][2][3] = 0 * intensity / 100; 
    
    rgb[114][0][3] = 0 * intensity / 100;
    rgb[114][1][3] = 0 * intensity / 100;
    rgb[114][2][3] = 0 * intensity / 100; 
    
    rgb[115][0][3] = 0 * intensity / 100;
    rgb[115][1][3] = 0 * intensity / 100;
    rgb[115][2][3] = 0 * intensity / 100; 
    
    rgb[116][0][3] = 0 * intensity / 100;
    rgb[116][1][3] = 0 * intensity / 100;
    rgb[116][2][3] = 0 * intensity / 100; 
    
    rgb[117][0][3] = 0 * intensity / 100;
    rgb[117][1][3] = 0 * intensity / 100;
    rgb[117][2][3] = 0 * intensity / 100; 
    
    rgb[118][0][3] = 0 * intensity / 100;
    rgb[118][1][3] = 0 * intensity / 100;
    rgb[118][2][3] = 0 * intensity / 100; 
    
    rgb[119][0][3] = 0 * intensity / 100;
    rgb[119][1][3] = 0 * intensity / 100;
    rgb[119][2][3] = 0 * intensity / 100; 
    
    rgb[120][0][3] = 0 * intensity / 100;
    rgb[120][1][3] = 0 * intensity / 100;
    rgb[120][2][3] = 0 * intensity / 100; 
    
    rgb[121][0][3] = 0 * intensity / 100;
    rgb[121][1][3] = 0 * intensity / 100;
    rgb[121][2][3] = 0 * intensity / 100; 
    
    rgb[122][0][3] = 0 * intensity / 100;
    rgb[122][1][3] = 0 * intensity / 100;
    rgb[122][2][3] = 0 * intensity / 100; 
    
    rgb[123][0][3] = 0 * intensity / 100;
    rgb[123][1][3] = 0 * intensity / 100;
    rgb[123][2][3] = 0 * intensity / 100; 
    
    rgb[124][0][3] = 0 * intensity / 100;
    rgb[124][1][3] = 0 * intensity / 100;
    rgb[124][2][3] = 0 * intensity / 100; 
    
    rgb[125][0][3] = 0 * intensity / 100;
    rgb[125][1][3] = 0 * intensity / 100;
    rgb[125][2][3] = 0 * intensity / 100; 
    
    rgb[126][0][3] = 0 * intensity / 100;
    rgb[126][1][3] = 0 * intensity / 100;
    rgb[126][2][3] = 0 * intensity / 100; 
    
    rgb[127][0][3] = 0 * intensity / 100;
    rgb[127][1][3] = 0 * intensity / 100;
    rgb[127][2][3] = 0 * intensity / 100; 
    

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
    
    rgb[33][0][4] = 215 * intensity / 100;
    rgb[33][1][4] = 80 * intensity / 100;
    rgb[33][2][4] = 156 * intensity / 100; 
    
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
    
    rgb[42][0][4] = 215 * intensity / 100;
    rgb[42][1][4] = 80 * intensity / 100;
    rgb[42][2][4] = 156 * intensity / 100; 
    
    rgb[43][0][4] = 215 * intensity / 100;
    rgb[43][1][4] = 80 * intensity / 100;
    rgb[43][2][4] = 156 * intensity / 100; 
    
    rgb[44][0][4] = 215 * intensity / 100;
    rgb[44][1][4] = 80 * intensity / 100;
    rgb[44][2][4] = 156 * intensity / 100; 
    
    rgb[45][0][4] = 215 * intensity / 100;
    rgb[45][1][4] = 80 * intensity / 100;
    rgb[45][2][4] = 156 * intensity / 100; 
    
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

    
    rgb[64][0][4] = 0 * intensity / 100;
    rgb[64][1][4] = 0 * intensity / 100;
    rgb[64][2][4] = 0 * intensity / 100; 
    
    rgb[65][0][4] = 0 * intensity / 100;
    rgb[65][1][4] = 0 * intensity / 100;
    rgb[65][2][4] = 0 * intensity / 100; 
    
    rgb[66][0][4] = 0 * intensity / 100;
    rgb[66][1][4] = 0 * intensity / 100;
    rgb[66][2][4] = 0 * intensity / 100; 
    
    rgb[67][0][4] = 0 * intensity / 100;
    rgb[67][1][4] = 0 * intensity / 100;
    rgb[67][2][4] = 0 * intensity / 100; 
    
    rgb[68][0][4] = 0 * intensity / 100;
    rgb[68][1][4] = 0 * intensity / 100;
    rgb[68][2][4] = 0 * intensity / 100; 
    
    rgb[69][0][4] = 0 * intensity / 100;
    rgb[69][1][4] = 0 * intensity / 100;
    rgb[69][2][4] = 0 * intensity / 100; 
    
    rgb[70][0][4] = 0 * intensity / 100;
    rgb[70][1][4] = 0 * intensity / 100;
    rgb[70][2][4] = 0 * intensity / 100; 
    
    rgb[71][0][4] = 0 * intensity / 100;
    rgb[71][1][4] = 0 * intensity / 100;
    rgb[71][2][4] = 0 * intensity / 100; 
    
    rgb[72][0][4] = 0 * intensity / 100;
    rgb[72][1][4] = 0 * intensity / 100;
    rgb[72][2][4] = 0 * intensity / 100; 
    
    rgb[73][0][4] = 0 * intensity / 100;
    rgb[73][1][4] = 0 * intensity / 100;
    rgb[73][2][4] = 0 * intensity / 100; 
    
    rgb[74][0][4] = 0 * intensity / 100;
    rgb[74][1][4] = 0 * intensity / 100;
    rgb[74][2][4] = 0 * intensity / 100; 
    
    rgb[75][0][4] = 0 * intensity / 100;
    rgb[75][1][4] = 0 * intensity / 100;
    rgb[75][2][4] = 0 * intensity / 100; 
    
    rgb[76][0][4] = 0 * intensity / 100;
    rgb[76][1][4] = 0 * intensity / 100;
    rgb[76][2][4] = 0 * intensity / 100; 
    
    rgb[77][0][4] = 0 * intensity / 100;
    rgb[77][1][4] = 0 * intensity / 100;
    rgb[77][2][4] = 0 * intensity / 100; 
    
    rgb[78][0][4] = 0 * intensity / 100;
    rgb[78][1][4] = 0 * intensity / 100;
    rgb[78][2][4] = 0 * intensity / 100; 
    
    rgb[79][0][4] = 0 * intensity / 100;
    rgb[79][1][4] = 0 * intensity / 100;
    rgb[79][2][4] = 0 * intensity / 100; 
    
    rgb[80][0][4] = 0 * intensity / 100;
    rgb[80][1][4] = 0 * intensity / 100;
    rgb[80][2][4] = 0 * intensity / 100; 
    
    rgb[81][0][4] = 0 * intensity / 100;
    rgb[81][1][4] = 0 * intensity / 100;
    rgb[81][2][4] = 0 * intensity / 100; 
    
    rgb[82][0][4] = 0 * intensity / 100;
    rgb[82][1][4] = 0 * intensity / 100;
    rgb[82][2][4] = 0 * intensity / 100; 
    
    rgb[83][0][4] = 0 * intensity / 100;
    rgb[83][1][4] = 0 * intensity / 100;
    rgb[83][2][4] = 0 * intensity / 100; 
    
    rgb[84][0][4] = 0 * intensity / 100;
    rgb[84][1][4] = 0 * intensity / 100;
    rgb[84][2][4] = 0 * intensity / 100; 
    
    rgb[85][0][4] = 0 * intensity / 100;
    rgb[85][1][4] = 0 * intensity / 100;
    rgb[85][2][4] = 0 * intensity / 100; 
    
    rgb[86][0][4] = 0 * intensity / 100;
    rgb[86][1][4] = 0 * intensity / 100;
    rgb[86][2][4] = 0 * intensity / 100; 
    
    rgb[87][0][4] = 0 * intensity / 100;
    rgb[87][1][4] = 0 * intensity / 100;
    rgb[87][2][4] = 0 * intensity / 100; 
    
    rgb[88][0][4] = 0 * intensity / 100;
    rgb[88][1][4] = 0 * intensity / 100;
    rgb[88][2][4] = 0 * intensity / 100; 
    
    rgb[89][0][4] = 0 * intensity / 100;
    rgb[89][1][4] = 0 * intensity / 100;
    rgb[89][2][4] = 0 * intensity / 100; 
    
    rgb[90][0][4] = 0 * intensity / 100;
    rgb[90][1][4] = 0 * intensity / 100;
    rgb[90][2][4] = 0 * intensity / 100; 
    
    rgb[91][0][4] = 0 * intensity / 100;
    rgb[91][1][4] = 0 * intensity / 100;
    rgb[91][2][4] = 0 * intensity / 100; 
    
    rgb[92][0][4] = 0 * intensity / 100;
    rgb[92][1][4] = 0 * intensity / 100;
    rgb[92][2][4] = 0 * intensity / 100; 
    
    rgb[93][0][4] = 0 * intensity / 100;
    rgb[93][1][4] = 0 * intensity / 100;
    rgb[93][2][4] = 0 * intensity / 100; 
    
    rgb[94][0][4] = 0 * intensity / 100;
    rgb[94][1][4] = 0 * intensity / 100;
    rgb[94][2][4] = 0 * intensity / 100; 
    
    rgb[95][0][4] = 0 * intensity / 100;
    rgb[95][1][4] = 0 * intensity / 100;
    rgb[95][2][4] = 0 * intensity / 100; 
    
    rgb[96][0][4] = 0 * intensity / 100;
    rgb[96][1][4] = 0 * intensity / 100;
    rgb[96][2][4] = 0 * intensity / 100; 
    
    rgb[97][0][4] = 0 * intensity / 100;
    rgb[97][1][4] = 0 * intensity / 100;
    rgb[97][2][4] = 0 * intensity / 100; 
    
    rgb[98][0][4] = 0 * intensity / 100;
    rgb[98][1][4] = 0 * intensity / 100;
    rgb[98][2][4] = 0 * intensity / 100; 
    
    rgb[99][0][4] = 0 * intensity / 100;
    rgb[99][1][4] = 0 * intensity / 100;
    rgb[99][2][4] = 0 * intensity / 100; 
    
    rgb[100][0][4] = 0 * intensity / 100;
    rgb[100][1][4] = 0 * intensity / 100;
    rgb[100][2][4] = 0 * intensity / 100; 
    
    rgb[101][0][4] = 0 * intensity / 100;
    rgb[101][1][4] = 0 * intensity / 100;
    rgb[101][2][4] = 0 * intensity / 100; 
    
    rgb[102][0][4] = 215 * intensity / 100;
    rgb[102][1][4] = 80 * intensity / 100;
    rgb[102][2][4] = 156 * intensity / 100; 
    
    rgb[103][0][4] = 0 * intensity / 100;
    rgb[103][1][4] = 0 * intensity / 100;
    rgb[103][2][4] = 0 * intensity / 100; 
    
    rgb[104][0][4] = 0 * intensity / 100;
    rgb[104][1][4] = 0 * intensity / 100;
    rgb[104][2][4] = 0 * intensity / 100; 
    
    rgb[105][0][4] = 0 * intensity / 100;
    rgb[105][1][4] = 0 * intensity / 100;
    rgb[105][2][4] = 0 * intensity / 100; 
    
    rgb[106][0][4] = 215 * intensity / 100;
    rgb[106][1][4] = 80 * intensity / 100;
    rgb[106][2][4] = 156 * intensity / 100; 
    
    rgb[107][0][4] = 215 * intensity / 100;
    rgb[107][1][4] = 80 * intensity / 100;
    rgb[107][2][4] = 156 * intensity / 100; 
    
    rgb[108][0][4] = 215 * intensity / 100;
    rgb[108][1][4] = 80 * intensity / 100;
    rgb[108][2][4] = 156 * intensity / 100; 
    
    rgb[109][0][4] = 215 * intensity / 100;
    rgb[109][1][4] = 80 * intensity / 100;
    rgb[109][2][4] = 156 * intensity / 100; 
    
    rgb[110][0][4] = 0 * intensity / 100;
    rgb[110][1][4] = 0 * intensity / 100;
    rgb[110][2][4] = 0 * intensity / 100; 
    
    rgb[111][0][4] = 0 * intensity / 100;
    rgb[111][1][4] = 0 * intensity / 100;
    rgb[111][2][4] = 0 * intensity / 100; 
    
    rgb[112][0][4] = 0 * intensity / 100;
    rgb[112][1][4] = 0 * intensity / 100;
    rgb[112][2][4] = 0 * intensity / 100; 
    
    rgb[113][0][4] = 0 * intensity / 100;
    rgb[113][1][4] = 0 * intensity / 100;
    rgb[113][2][4] = 0 * intensity / 100; 
    
    rgb[114][0][4] = 0 * intensity / 100;
    rgb[114][1][4] = 0 * intensity / 100;
    rgb[114][2][4] = 0 * intensity / 100; 
    
    rgb[115][0][4] = 0 * intensity / 100;
    rgb[115][1][4] = 0 * intensity / 100;
    rgb[115][2][4] = 0 * intensity / 100; 
    
    rgb[116][0][4] = 0 * intensity / 100;
    rgb[116][1][4] = 0 * intensity / 100;
    rgb[116][2][4] = 0 * intensity / 100; 
    
    rgb[117][0][4] = 0 * intensity / 100;
    rgb[117][1][4] = 0 * intensity / 100;
    rgb[117][2][4] = 0 * intensity / 100; 
    
    rgb[118][0][4] = 0 * intensity / 100;
    rgb[118][1][4] = 0 * intensity / 100;
    rgb[118][2][4] = 0 * intensity / 100; 
    
    rgb[119][0][4] = 0 * intensity / 100;
    rgb[119][1][4] = 0 * intensity / 100;
    rgb[119][2][4] = 0 * intensity / 100; 
    
    rgb[120][0][4] = 0 * intensity / 100;
    rgb[120][1][4] = 0 * intensity / 100;
    rgb[120][2][4] = 0 * intensity / 100; 
    
    rgb[121][0][4] = 0 * intensity / 100;
    rgb[121][1][4] = 0 * intensity / 100;
    rgb[121][2][4] = 0 * intensity / 100; 
    
    rgb[122][0][4] = 0 * intensity / 100;
    rgb[122][1][4] = 0 * intensity / 100;
    rgb[122][2][4] = 0 * intensity / 100; 
    
    rgb[123][0][4] = 0 * intensity / 100;
    rgb[123][1][4] = 0 * intensity / 100;
    rgb[123][2][4] = 0 * intensity / 100; 
    
    rgb[124][0][4] = 0 * intensity / 100;
    rgb[124][1][4] = 0 * intensity / 100;
    rgb[124][2][4] = 0 * intensity / 100; 
    
    rgb[125][0][4] = 0 * intensity / 100;
    rgb[125][1][4] = 0 * intensity / 100;
    rgb[125][2][4] = 0 * intensity / 100; 
    
    rgb[126][0][4] = 0 * intensity / 100;
    rgb[126][1][4] = 0 * intensity / 100;
    rgb[126][2][4] = 0 * intensity / 100; 
    
    rgb[127][0][4] = 0 * intensity / 100;
    rgb[127][1][4] = 0 * intensity / 100;
    rgb[127][2][4] = 0 * intensity / 100; 
    

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
    
    rgb[33][0][5] = 215 * intensity / 100;
    rgb[33][1][5] = 80 * intensity / 100;
    rgb[33][2][5] = 156 * intensity / 100; 
    
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
    
    rgb[42][0][5] = 215 * intensity / 100;
    rgb[42][1][5] = 80 * intensity / 100;
    rgb[42][2][5] = 156 * intensity / 100; 
    
    rgb[43][0][5] = 215 * intensity / 100;
    rgb[43][1][5] = 80 * intensity / 100;
    rgb[43][2][5] = 156 * intensity / 100; 
    
    rgb[44][0][5] = 215 * intensity / 100;
    rgb[44][1][5] = 80 * intensity / 100;
    rgb[44][2][5] = 156 * intensity / 100; 
    
    rgb[45][0][5] = 215 * intensity / 100;
    rgb[45][1][5] = 80 * intensity / 100;
    rgb[45][2][5] = 156 * intensity / 100; 
    
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

    
    rgb[64][0][5] = 0 * intensity / 100;
    rgb[64][1][5] = 0 * intensity / 100;
    rgb[64][2][5] = 0 * intensity / 100; 
    
    rgb[65][0][5] = 0 * intensity / 100;
    rgb[65][1][5] = 0 * intensity / 100;
    rgb[65][2][5] = 0 * intensity / 100; 
    
    rgb[66][0][5] = 0 * intensity / 100;
    rgb[66][1][5] = 0 * intensity / 100;
    rgb[66][2][5] = 0 * intensity / 100; 
    
    rgb[67][0][5] = 0 * intensity / 100;
    rgb[67][1][5] = 0 * intensity / 100;
    rgb[67][2][5] = 0 * intensity / 100; 
    
    rgb[68][0][5] = 0 * intensity / 100;
    rgb[68][1][5] = 0 * intensity / 100;
    rgb[68][2][5] = 0 * intensity / 100; 
    
    rgb[69][0][5] = 0 * intensity / 100;
    rgb[69][1][5] = 0 * intensity / 100;
    rgb[69][2][5] = 0 * intensity / 100; 
    
    rgb[70][0][5] = 0 * intensity / 100;
    rgb[70][1][5] = 0 * intensity / 100;
    rgb[70][2][5] = 0 * intensity / 100; 
    
    rgb[71][0][5] = 0 * intensity / 100;
    rgb[71][1][5] = 0 * intensity / 100;
    rgb[71][2][5] = 0 * intensity / 100; 
    
    rgb[72][0][5] = 0 * intensity / 100;
    rgb[72][1][5] = 0 * intensity / 100;
    rgb[72][2][5] = 0 * intensity / 100; 
    
    rgb[73][0][5] = 0 * intensity / 100;
    rgb[73][1][5] = 0 * intensity / 100;
    rgb[73][2][5] = 0 * intensity / 100; 
    
    rgb[74][0][5] = 0 * intensity / 100;
    rgb[74][1][5] = 0 * intensity / 100;
    rgb[74][2][5] = 0 * intensity / 100; 
    
    rgb[75][0][5] = 0 * intensity / 100;
    rgb[75][1][5] = 0 * intensity / 100;
    rgb[75][2][5] = 0 * intensity / 100; 
    
    rgb[76][0][5] = 0 * intensity / 100;
    rgb[76][1][5] = 0 * intensity / 100;
    rgb[76][2][5] = 0 * intensity / 100; 
    
    rgb[77][0][5] = 0 * intensity / 100;
    rgb[77][1][5] = 0 * intensity / 100;
    rgb[77][2][5] = 0 * intensity / 100; 
    
    rgb[78][0][5] = 0 * intensity / 100;
    rgb[78][1][5] = 0 * intensity / 100;
    rgb[78][2][5] = 0 * intensity / 100; 
    
    rgb[79][0][5] = 0 * intensity / 100;
    rgb[79][1][5] = 0 * intensity / 100;
    rgb[79][2][5] = 0 * intensity / 100; 
    
    rgb[80][0][5] = 0 * intensity / 100;
    rgb[80][1][5] = 0 * intensity / 100;
    rgb[80][2][5] = 0 * intensity / 100; 
    
    rgb[81][0][5] = 0 * intensity / 100;
    rgb[81][1][5] = 0 * intensity / 100;
    rgb[81][2][5] = 0 * intensity / 100; 
    
    rgb[82][0][5] = 0 * intensity / 100;
    rgb[82][1][5] = 0 * intensity / 100;
    rgb[82][2][5] = 0 * intensity / 100; 
    
    rgb[83][0][5] = 0 * intensity / 100;
    rgb[83][1][5] = 0 * intensity / 100;
    rgb[83][2][5] = 0 * intensity / 100; 
    
    rgb[84][0][5] = 0 * intensity / 100;
    rgb[84][1][5] = 0 * intensity / 100;
    rgb[84][2][5] = 0 * intensity / 100; 
    
    rgb[85][0][5] = 0 * intensity / 100;
    rgb[85][1][5] = 0 * intensity / 100;
    rgb[85][2][5] = 0 * intensity / 100; 
    
    rgb[86][0][5] = 0 * intensity / 100;
    rgb[86][1][5] = 0 * intensity / 100;
    rgb[86][2][5] = 0 * intensity / 100; 
    
    rgb[87][0][5] = 0 * intensity / 100;
    rgb[87][1][5] = 0 * intensity / 100;
    rgb[87][2][5] = 0 * intensity / 100; 
    
    rgb[88][0][5] = 0 * intensity / 100;
    rgb[88][1][5] = 0 * intensity / 100;
    rgb[88][2][5] = 0 * intensity / 100; 
    
    rgb[89][0][5] = 0 * intensity / 100;
    rgb[89][1][5] = 0 * intensity / 100;
    rgb[89][2][5] = 0 * intensity / 100; 
    
    rgb[90][0][5] = 0 * intensity / 100;
    rgb[90][1][5] = 0 * intensity / 100;
    rgb[90][2][5] = 0 * intensity / 100; 
    
    rgb[91][0][5] = 0 * intensity / 100;
    rgb[91][1][5] = 0 * intensity / 100;
    rgb[91][2][5] = 0 * intensity / 100; 
    
    rgb[92][0][5] = 0 * intensity / 100;
    rgb[92][1][5] = 0 * intensity / 100;
    rgb[92][2][5] = 0 * intensity / 100; 
    
    rgb[93][0][5] = 0 * intensity / 100;
    rgb[93][1][5] = 0 * intensity / 100;
    rgb[93][2][5] = 0 * intensity / 100; 
    
    rgb[94][0][5] = 0 * intensity / 100;
    rgb[94][1][5] = 0 * intensity / 100;
    rgb[94][2][5] = 0 * intensity / 100; 
    
    rgb[95][0][5] = 0 * intensity / 100;
    rgb[95][1][5] = 0 * intensity / 100;
    rgb[95][2][5] = 0 * intensity / 100; 
    
    rgb[96][0][5] = 0 * intensity / 100;
    rgb[96][1][5] = 0 * intensity / 100;
    rgb[96][2][5] = 0 * intensity / 100; 
    
    rgb[97][0][5] = 0 * intensity / 100;
    rgb[97][1][5] = 0 * intensity / 100;
    rgb[97][2][5] = 0 * intensity / 100; 
    
    rgb[98][0][5] = 0 * intensity / 100;
    rgb[98][1][5] = 0 * intensity / 100;
    rgb[98][2][5] = 0 * intensity / 100; 
    
    rgb[99][0][5] = 0 * intensity / 100;
    rgb[99][1][5] = 0 * intensity / 100;
    rgb[99][2][5] = 0 * intensity / 100; 
    
    rgb[100][0][5] = 0 * intensity / 100;
    rgb[100][1][5] = 0 * intensity / 100;
    rgb[100][2][5] = 0 * intensity / 100; 
    
    rgb[101][0][5] = 0 * intensity / 100;
    rgb[101][1][5] = 0 * intensity / 100;
    rgb[101][2][5] = 0 * intensity / 100; 
    
    rgb[102][0][5] = 215 * intensity / 100;
    rgb[102][1][5] = 80 * intensity / 100;
    rgb[102][2][5] = 156 * intensity / 100; 
    
    rgb[103][0][5] = 0 * intensity / 100;
    rgb[103][1][5] = 0 * intensity / 100;
    rgb[103][2][5] = 0 * intensity / 100; 
    
    rgb[104][0][5] = 0 * intensity / 100;
    rgb[104][1][5] = 0 * intensity / 100;
    rgb[104][2][5] = 0 * intensity / 100; 
    
    rgb[105][0][5] = 0 * intensity / 100;
    rgb[105][1][5] = 0 * intensity / 100;
    rgb[105][2][5] = 0 * intensity / 100; 
    
    rgb[106][0][5] = 215 * intensity / 100;
    rgb[106][1][5] = 80 * intensity / 100;
    rgb[106][2][5] = 156 * intensity / 100; 
    
    rgb[107][0][5] = 215 * intensity / 100;
    rgb[107][1][5] = 80 * intensity / 100;
    rgb[107][2][5] = 156 * intensity / 100; 
    
    rgb[108][0][5] = 215 * intensity / 100;
    rgb[108][1][5] = 80 * intensity / 100;
    rgb[108][2][5] = 156 * intensity / 100; 
    
    rgb[109][0][5] = 215 * intensity / 100;
    rgb[109][1][5] = 80 * intensity / 100;
    rgb[109][2][5] = 156 * intensity / 100; 
    
    rgb[110][0][5] = 0 * intensity / 100;
    rgb[110][1][5] = 0 * intensity / 100;
    rgb[110][2][5] = 0 * intensity / 100; 
    
    rgb[111][0][5] = 0 * intensity / 100;
    rgb[111][1][5] = 0 * intensity / 100;
    rgb[111][2][5] = 0 * intensity / 100; 
    
    rgb[112][0][5] = 0 * intensity / 100;
    rgb[112][1][5] = 0 * intensity / 100;
    rgb[112][2][5] = 0 * intensity / 100; 
    
    rgb[113][0][5] = 0 * intensity / 100;
    rgb[113][1][5] = 0 * intensity / 100;
    rgb[113][2][5] = 0 * intensity / 100; 
    
    rgb[114][0][5] = 0 * intensity / 100;
    rgb[114][1][5] = 0 * intensity / 100;
    rgb[114][2][5] = 0 * intensity / 100; 
    
    rgb[115][0][5] = 0 * intensity / 100;
    rgb[115][1][5] = 0 * intensity / 100;
    rgb[115][2][5] = 0 * intensity / 100; 
    
    rgb[116][0][5] = 0 * intensity / 100;
    rgb[116][1][5] = 0 * intensity / 100;
    rgb[116][2][5] = 0 * intensity / 100; 
    
    rgb[117][0][5] = 0 * intensity / 100;
    rgb[117][1][5] = 0 * intensity / 100;
    rgb[117][2][5] = 0 * intensity / 100; 
    
    rgb[118][0][5] = 0 * intensity / 100;
    rgb[118][1][5] = 0 * intensity / 100;
    rgb[118][2][5] = 0 * intensity / 100; 
    
    rgb[119][0][5] = 0 * intensity / 100;
    rgb[119][1][5] = 0 * intensity / 100;
    rgb[119][2][5] = 0 * intensity / 100; 
    
    rgb[120][0][5] = 0 * intensity / 100;
    rgb[120][1][5] = 0 * intensity / 100;
    rgb[120][2][5] = 0 * intensity / 100; 
    
    rgb[121][0][5] = 0 * intensity / 100;
    rgb[121][1][5] = 0 * intensity / 100;
    rgb[121][2][5] = 0 * intensity / 100; 
    
    rgb[122][0][5] = 0 * intensity / 100;
    rgb[122][1][5] = 0 * intensity / 100;
    rgb[122][2][5] = 0 * intensity / 100; 
    
    rgb[123][0][5] = 0 * intensity / 100;
    rgb[123][1][5] = 0 * intensity / 100;
    rgb[123][2][5] = 0 * intensity / 100; 
    
    rgb[124][0][5] = 0 * intensity / 100;
    rgb[124][1][5] = 0 * intensity / 100;
    rgb[124][2][5] = 0 * intensity / 100; 
    
    rgb[125][0][5] = 0 * intensity / 100;
    rgb[125][1][5] = 0 * intensity / 100;
    rgb[125][2][5] = 0 * intensity / 100; 
    
    rgb[126][0][5] = 0 * intensity / 100;
    rgb[126][1][5] = 0 * intensity / 100;
    rgb[126][2][5] = 0 * intensity / 100; 
    
    rgb[127][0][5] = 0 * intensity / 100;
    rgb[127][1][5] = 0 * intensity / 100;
    rgb[127][2][5] = 0 * intensity / 100; 
    

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
    
    rgb[25][0][6] = 215 * intensity / 100;
    rgb[25][1][6] = 80 * intensity / 100;
    rgb[25][2][6] = 156 * intensity / 100; 
    
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
    
    rgb[34][0][6] = 215 * intensity / 100;
    rgb[34][1][6] = 80 * intensity / 100;
    rgb[34][2][6] = 156 * intensity / 100; 
    
    rgb[35][0][6] = 215 * intensity / 100;
    rgb[35][1][6] = 80 * intensity / 100;
    rgb[35][2][6] = 156 * intensity / 100; 
    
    rgb[36][0][6] = 215 * intensity / 100;
    rgb[36][1][6] = 80 * intensity / 100;
    rgb[36][2][6] = 156 * intensity / 100; 
    
    rgb[37][0][6] = 215 * intensity / 100;
    rgb[37][1][6] = 80 * intensity / 100;
    rgb[37][2][6] = 156 * intensity / 100; 
    
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
    
    rgb[43][0][6] = 215 * intensity / 100;
    rgb[43][1][6] = 80 * intensity / 100;
    rgb[43][2][6] = 156 * intensity / 100; 
    
    rgb[44][0][6] = 215 * intensity / 100;
    rgb[44][1][6] = 80 * intensity / 100;
    rgb[44][2][6] = 156 * intensity / 100; 
    
    rgb[45][0][6] = 215 * intensity / 100;
    rgb[45][1][6] = 80 * intensity / 100;
    rgb[45][2][6] = 156 * intensity / 100; 
    
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

    
    rgb[64][0][6] = 0 * intensity / 100;
    rgb[64][1][6] = 0 * intensity / 100;
    rgb[64][2][6] = 0 * intensity / 100; 
    
    rgb[65][0][6] = 0 * intensity / 100;
    rgb[65][1][6] = 0 * intensity / 100;
    rgb[65][2][6] = 0 * intensity / 100; 
    
    rgb[66][0][6] = 0 * intensity / 100;
    rgb[66][1][6] = 0 * intensity / 100;
    rgb[66][2][6] = 0 * intensity / 100; 
    
    rgb[67][0][6] = 0 * intensity / 100;
    rgb[67][1][6] = 0 * intensity / 100;
    rgb[67][2][6] = 0 * intensity / 100; 
    
    rgb[68][0][6] = 0 * intensity / 100;
    rgb[68][1][6] = 0 * intensity / 100;
    rgb[68][2][6] = 0 * intensity / 100; 
    
    rgb[69][0][6] = 0 * intensity / 100;
    rgb[69][1][6] = 0 * intensity / 100;
    rgb[69][2][6] = 0 * intensity / 100; 
    
    rgb[70][0][6] = 0 * intensity / 100;
    rgb[70][1][6] = 0 * intensity / 100;
    rgb[70][2][6] = 0 * intensity / 100; 
    
    rgb[71][0][6] = 0 * intensity / 100;
    rgb[71][1][6] = 0 * intensity / 100;
    rgb[71][2][6] = 0 * intensity / 100; 
    
    rgb[72][0][6] = 0 * intensity / 100;
    rgb[72][1][6] = 0 * intensity / 100;
    rgb[72][2][6] = 0 * intensity / 100; 
    
    rgb[73][0][6] = 0 * intensity / 100;
    rgb[73][1][6] = 0 * intensity / 100;
    rgb[73][2][6] = 0 * intensity / 100; 
    
    rgb[74][0][6] = 0 * intensity / 100;
    rgb[74][1][6] = 0 * intensity / 100;
    rgb[74][2][6] = 0 * intensity / 100; 
    
    rgb[75][0][6] = 0 * intensity / 100;
    rgb[75][1][6] = 0 * intensity / 100;
    rgb[75][2][6] = 0 * intensity / 100; 
    
    rgb[76][0][6] = 0 * intensity / 100;
    rgb[76][1][6] = 0 * intensity / 100;
    rgb[76][2][6] = 0 * intensity / 100; 
    
    rgb[77][0][6] = 0 * intensity / 100;
    rgb[77][1][6] = 0 * intensity / 100;
    rgb[77][2][6] = 0 * intensity / 100; 
    
    rgb[78][0][6] = 0 * intensity / 100;
    rgb[78][1][6] = 0 * intensity / 100;
    rgb[78][2][6] = 0 * intensity / 100; 
    
    rgb[79][0][6] = 0 * intensity / 100;
    rgb[79][1][6] = 0 * intensity / 100;
    rgb[79][2][6] = 0 * intensity / 100; 
    
    rgb[80][0][6] = 0 * intensity / 100;
    rgb[80][1][6] = 0 * intensity / 100;
    rgb[80][2][6] = 0 * intensity / 100; 
    
    rgb[81][0][6] = 0 * intensity / 100;
    rgb[81][1][6] = 0 * intensity / 100;
    rgb[81][2][6] = 0 * intensity / 100; 
    
    rgb[82][0][6] = 0 * intensity / 100;
    rgb[82][1][6] = 0 * intensity / 100;
    rgb[82][2][6] = 0 * intensity / 100; 
    
    rgb[83][0][6] = 0 * intensity / 100;
    rgb[83][1][6] = 0 * intensity / 100;
    rgb[83][2][6] = 0 * intensity / 100; 
    
    rgb[84][0][6] = 0 * intensity / 100;
    rgb[84][1][6] = 0 * intensity / 100;
    rgb[84][2][6] = 0 * intensity / 100; 
    
    rgb[85][0][6] = 0 * intensity / 100;
    rgb[85][1][6] = 0 * intensity / 100;
    rgb[85][2][6] = 0 * intensity / 100; 
    
    rgb[86][0][6] = 0 * intensity / 100;
    rgb[86][1][6] = 0 * intensity / 100;
    rgb[86][2][6] = 0 * intensity / 100; 
    
    rgb[87][0][6] = 0 * intensity / 100;
    rgb[87][1][6] = 0 * intensity / 100;
    rgb[87][2][6] = 0 * intensity / 100; 
    
    rgb[88][0][6] = 0 * intensity / 100;
    rgb[88][1][6] = 0 * intensity / 100;
    rgb[88][2][6] = 0 * intensity / 100; 
    
    rgb[89][0][6] = 0 * intensity / 100;
    rgb[89][1][6] = 0 * intensity / 100;
    rgb[89][2][6] = 0 * intensity / 100; 
    
    rgb[90][0][6] = 0 * intensity / 100;
    rgb[90][1][6] = 0 * intensity / 100;
    rgb[90][2][6] = 0 * intensity / 100; 
    
    rgb[91][0][6] = 0 * intensity / 100;
    rgb[91][1][6] = 0 * intensity / 100;
    rgb[91][2][6] = 0 * intensity / 100; 
    
    rgb[92][0][6] = 0 * intensity / 100;
    rgb[92][1][6] = 0 * intensity / 100;
    rgb[92][2][6] = 0 * intensity / 100; 
    
    rgb[93][0][6] = 0 * intensity / 100;
    rgb[93][1][6] = 0 * intensity / 100;
    rgb[93][2][6] = 0 * intensity / 100; 
    
    rgb[94][0][6] = 215 * intensity / 100;
    rgb[94][1][6] = 80 * intensity / 100;
    rgb[94][2][6] = 156 * intensity / 100; 
    
    rgb[95][0][6] = 0 * intensity / 100;
    rgb[95][1][6] = 0 * intensity / 100;
    rgb[95][2][6] = 0 * intensity / 100; 
    
    rgb[96][0][6] = 0 * intensity / 100;
    rgb[96][1][6] = 0 * intensity / 100;
    rgb[96][2][6] = 0 * intensity / 100; 
    
    rgb[97][0][6] = 0 * intensity / 100;
    rgb[97][1][6] = 0 * intensity / 100;
    rgb[97][2][6] = 0 * intensity / 100; 
    
    rgb[98][0][6] = 215 * intensity / 100;
    rgb[98][1][6] = 80 * intensity / 100;
    rgb[98][2][6] = 156 * intensity / 100; 
    
    rgb[99][0][6] = 215 * intensity / 100;
    rgb[99][1][6] = 80 * intensity / 100;
    rgb[99][2][6] = 156 * intensity / 100; 
    
    rgb[100][0][6] = 215 * intensity / 100;
    rgb[100][1][6] = 80 * intensity / 100;
    rgb[100][2][6] = 156 * intensity / 100; 
    
    rgb[101][0][6] = 215 * intensity / 100;
    rgb[101][1][6] = 80 * intensity / 100;
    rgb[101][2][6] = 156 * intensity / 100; 
    
    rgb[102][0][6] = 0 * intensity / 100;
    rgb[102][1][6] = 0 * intensity / 100;
    rgb[102][2][6] = 0 * intensity / 100; 
    
    rgb[103][0][6] = 0 * intensity / 100;
    rgb[103][1][6] = 0 * intensity / 100;
    rgb[103][2][6] = 0 * intensity / 100; 
    
    rgb[104][0][6] = 0 * intensity / 100;
    rgb[104][1][6] = 0 * intensity / 100;
    rgb[104][2][6] = 0 * intensity / 100; 
    
    rgb[105][0][6] = 0 * intensity / 100;
    rgb[105][1][6] = 0 * intensity / 100;
    rgb[105][2][6] = 0 * intensity / 100; 
    
    rgb[106][0][6] = 215 * intensity / 100;
    rgb[106][1][6] = 80 * intensity / 100;
    rgb[106][2][6] = 156 * intensity / 100; 
    
    rgb[107][0][6] = 215 * intensity / 100;
    rgb[107][1][6] = 80 * intensity / 100;
    rgb[107][2][6] = 156 * intensity / 100; 
    
    rgb[108][0][6] = 215 * intensity / 100;
    rgb[108][1][6] = 80 * intensity / 100;
    rgb[108][2][6] = 156 * intensity / 100; 
    
    rgb[109][0][6] = 0 * intensity / 100;
    rgb[109][1][6] = 0 * intensity / 100;
    rgb[109][2][6] = 0 * intensity / 100; 
    
    rgb[110][0][6] = 0 * intensity / 100;
    rgb[110][1][6] = 0 * intensity / 100;
    rgb[110][2][6] = 0 * intensity / 100; 
    
    rgb[111][0][6] = 0 * intensity / 100;
    rgb[111][1][6] = 0 * intensity / 100;
    rgb[111][2][6] = 0 * intensity / 100; 
    
    rgb[112][0][6] = 0 * intensity / 100;
    rgb[112][1][6] = 0 * intensity / 100;
    rgb[112][2][6] = 0 * intensity / 100; 
    
    rgb[113][0][6] = 0 * intensity / 100;
    rgb[113][1][6] = 0 * intensity / 100;
    rgb[113][2][6] = 0 * intensity / 100; 
    
    rgb[114][0][6] = 0 * intensity / 100;
    rgb[114][1][6] = 0 * intensity / 100;
    rgb[114][2][6] = 0 * intensity / 100; 
    
    rgb[115][0][6] = 0 * intensity / 100;
    rgb[115][1][6] = 0 * intensity / 100;
    rgb[115][2][6] = 0 * intensity / 100; 
    
    rgb[116][0][6] = 0 * intensity / 100;
    rgb[116][1][6] = 0 * intensity / 100;
    rgb[116][2][6] = 0 * intensity / 100; 
    
    rgb[117][0][6] = 0 * intensity / 100;
    rgb[117][1][6] = 0 * intensity / 100;
    rgb[117][2][6] = 0 * intensity / 100; 
    
    rgb[118][0][6] = 0 * intensity / 100;
    rgb[118][1][6] = 0 * intensity / 100;
    rgb[118][2][6] = 0 * intensity / 100; 
    
    rgb[119][0][6] = 0 * intensity / 100;
    rgb[119][1][6] = 0 * intensity / 100;
    rgb[119][2][6] = 0 * intensity / 100; 
    
    rgb[120][0][6] = 0 * intensity / 100;
    rgb[120][1][6] = 0 * intensity / 100;
    rgb[120][2][6] = 0 * intensity / 100; 
    
    rgb[121][0][6] = 0 * intensity / 100;
    rgb[121][1][6] = 0 * intensity / 100;
    rgb[121][2][6] = 0 * intensity / 100; 
    
    rgb[122][0][6] = 0 * intensity / 100;
    rgb[122][1][6] = 0 * intensity / 100;
    rgb[122][2][6] = 0 * intensity / 100; 
    
    rgb[123][0][6] = 0 * intensity / 100;
    rgb[123][1][6] = 0 * intensity / 100;
    rgb[123][2][6] = 0 * intensity / 100; 
    
    rgb[124][0][6] = 0 * intensity / 100;
    rgb[124][1][6] = 0 * intensity / 100;
    rgb[124][2][6] = 0 * intensity / 100; 
    
    rgb[125][0][6] = 0 * intensity / 100;
    rgb[125][1][6] = 0 * intensity / 100;
    rgb[125][2][6] = 0 * intensity / 100; 
    
    rgb[126][0][6] = 0 * intensity / 100;
    rgb[126][1][6] = 0 * intensity / 100;
    rgb[126][2][6] = 0 * intensity / 100; 
    
    rgb[127][0][6] = 0 * intensity / 100;
    rgb[127][1][6] = 0 * intensity / 100;
    rgb[127][2][6] = 0 * intensity / 100; 
    

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
    
    rgb[17][0][7] = 215 * intensity / 100;
    rgb[17][1][7] = 80 * intensity / 100;
    rgb[17][2][7] = 156 * intensity / 100; 
    
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
    
    rgb[26][0][7] = 215 * intensity / 100;
    rgb[26][1][7] = 80 * intensity / 100;
    rgb[26][2][7] = 156 * intensity / 100; 
    
    rgb[27][0][7] = 215 * intensity / 100;
    rgb[27][1][7] = 80 * intensity / 100;
    rgb[27][2][7] = 156 * intensity / 100; 
    
    rgb[28][0][7] = 215 * intensity / 100;
    rgb[28][1][7] = 80 * intensity / 100;
    rgb[28][2][7] = 156 * intensity / 100; 
    
    rgb[29][0][7] = 215 * intensity / 100;
    rgb[29][1][7] = 80 * intensity / 100;
    rgb[29][2][7] = 156 * intensity / 100; 
    
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
    
    rgb[42][0][7] = 0 * intensity / 100;
    rgb[42][1][7] = 0 * intensity / 100;
    rgb[42][2][7] = 0 * intensity / 100; 
    
    rgb[43][0][7] = 215 * intensity / 100;
    rgb[43][1][7] = 80 * intensity / 100;
    rgb[43][2][7] = 156 * intensity / 100; 
    
    rgb[44][0][7] = 215 * intensity / 100;
    rgb[44][1][7] = 80 * intensity / 100;
    rgb[44][2][7] = 156 * intensity / 100; 
    
    rgb[45][0][7] = 215 * intensity / 100;
    rgb[45][1][7] = 80 * intensity / 100;
    rgb[45][2][7] = 156 * intensity / 100; 
    
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

    
    rgb[64][0][7] = 0 * intensity / 100;
    rgb[64][1][7] = 0 * intensity / 100;
    rgb[64][2][7] = 0 * intensity / 100; 
    
    rgb[65][0][7] = 0 * intensity / 100;
    rgb[65][1][7] = 0 * intensity / 100;
    rgb[65][2][7] = 0 * intensity / 100; 
    
    rgb[66][0][7] = 0 * intensity / 100;
    rgb[66][1][7] = 0 * intensity / 100;
    rgb[66][2][7] = 0 * intensity / 100; 
    
    rgb[67][0][7] = 0 * intensity / 100;
    rgb[67][1][7] = 0 * intensity / 100;
    rgb[67][2][7] = 0 * intensity / 100; 
    
    rgb[68][0][7] = 0 * intensity / 100;
    rgb[68][1][7] = 0 * intensity / 100;
    rgb[68][2][7] = 0 * intensity / 100; 
    
    rgb[69][0][7] = 0 * intensity / 100;
    rgb[69][1][7] = 0 * intensity / 100;
    rgb[69][2][7] = 0 * intensity / 100; 
    
    rgb[70][0][7] = 0 * intensity / 100;
    rgb[70][1][7] = 0 * intensity / 100;
    rgb[70][2][7] = 0 * intensity / 100; 
    
    rgb[71][0][7] = 0 * intensity / 100;
    rgb[71][1][7] = 0 * intensity / 100;
    rgb[71][2][7] = 0 * intensity / 100; 
    
    rgb[72][0][7] = 0 * intensity / 100;
    rgb[72][1][7] = 0 * intensity / 100;
    rgb[72][2][7] = 0 * intensity / 100; 
    
    rgb[73][0][7] = 0 * intensity / 100;
    rgb[73][1][7] = 0 * intensity / 100;
    rgb[73][2][7] = 0 * intensity / 100; 
    
    rgb[74][0][7] = 0 * intensity / 100;
    rgb[74][1][7] = 0 * intensity / 100;
    rgb[74][2][7] = 0 * intensity / 100; 
    
    rgb[75][0][7] = 0 * intensity / 100;
    rgb[75][1][7] = 0 * intensity / 100;
    rgb[75][2][7] = 0 * intensity / 100; 
    
    rgb[76][0][7] = 0 * intensity / 100;
    rgb[76][1][7] = 0 * intensity / 100;
    rgb[76][2][7] = 0 * intensity / 100; 
    
    rgb[77][0][7] = 0 * intensity / 100;
    rgb[77][1][7] = 0 * intensity / 100;
    rgb[77][2][7] = 0 * intensity / 100; 
    
    rgb[78][0][7] = 0 * intensity / 100;
    rgb[78][1][7] = 0 * intensity / 100;
    rgb[78][2][7] = 0 * intensity / 100; 
    
    rgb[79][0][7] = 0 * intensity / 100;
    rgb[79][1][7] = 0 * intensity / 100;
    rgb[79][2][7] = 0 * intensity / 100; 
    
    rgb[80][0][7] = 0 * intensity / 100;
    rgb[80][1][7] = 0 * intensity / 100;
    rgb[80][2][7] = 0 * intensity / 100; 
    
    rgb[81][0][7] = 0 * intensity / 100;
    rgb[81][1][7] = 0 * intensity / 100;
    rgb[81][2][7] = 0 * intensity / 100; 
    
    rgb[82][0][7] = 0 * intensity / 100;
    rgb[82][1][7] = 0 * intensity / 100;
    rgb[82][2][7] = 0 * intensity / 100; 
    
    rgb[83][0][7] = 0 * intensity / 100;
    rgb[83][1][7] = 0 * intensity / 100;
    rgb[83][2][7] = 0 * intensity / 100; 
    
    rgb[84][0][7] = 0 * intensity / 100;
    rgb[84][1][7] = 0 * intensity / 100;
    rgb[84][2][7] = 0 * intensity / 100; 
    
    rgb[85][0][7] = 0 * intensity / 100;
    rgb[85][1][7] = 0 * intensity / 100;
    rgb[85][2][7] = 0 * intensity / 100; 
    
    rgb[86][0][7] = 215 * intensity / 100;
    rgb[86][1][7] = 80 * intensity / 100;
    rgb[86][2][7] = 156 * intensity / 100; 
    
    rgb[87][0][7] = 0 * intensity / 100;
    rgb[87][1][7] = 0 * intensity / 100;
    rgb[87][2][7] = 0 * intensity / 100; 
    
    rgb[88][0][7] = 0 * intensity / 100;
    rgb[88][1][7] = 0 * intensity / 100;
    rgb[88][2][7] = 0 * intensity / 100; 
    
    rgb[89][0][7] = 0 * intensity / 100;
    rgb[89][1][7] = 0 * intensity / 100;
    rgb[89][2][7] = 0 * intensity / 100; 
    
    rgb[90][0][7] = 215 * intensity / 100;
    rgb[90][1][7] = 80 * intensity / 100;
    rgb[90][2][7] = 156 * intensity / 100; 
    
    rgb[91][0][7] = 215 * intensity / 100;
    rgb[91][1][7] = 80 * intensity / 100;
    rgb[91][2][7] = 156 * intensity / 100; 
    
    rgb[92][0][7] = 215 * intensity / 100;
    rgb[92][1][7] = 80 * intensity / 100;
    rgb[92][2][7] = 156 * intensity / 100; 
    
    rgb[93][0][7] = 215 * intensity / 100;
    rgb[93][1][7] = 80 * intensity / 100;
    rgb[93][2][7] = 156 * intensity / 100; 
    
    rgb[94][0][7] = 0 * intensity / 100;
    rgb[94][1][7] = 0 * intensity / 100;
    rgb[94][2][7] = 0 * intensity / 100; 
    
    rgb[95][0][7] = 0 * intensity / 100;
    rgb[95][1][7] = 0 * intensity / 100;
    rgb[95][2][7] = 0 * intensity / 100; 
    
    rgb[96][0][7] = 0 * intensity / 100;
    rgb[96][1][7] = 0 * intensity / 100;
    rgb[96][2][7] = 0 * intensity / 100; 
    
    rgb[97][0][7] = 0 * intensity / 100;
    rgb[97][1][7] = 0 * intensity / 100;
    rgb[97][2][7] = 0 * intensity / 100; 
    
    rgb[98][0][7] = 215 * intensity / 100;
    rgb[98][1][7] = 80 * intensity / 100;
    rgb[98][2][7] = 156 * intensity / 100; 
    
    rgb[99][0][7] = 215 * intensity / 100;
    rgb[99][1][7] = 80 * intensity / 100;
    rgb[99][2][7] = 156 * intensity / 100; 
    
    rgb[100][0][7] = 215 * intensity / 100;
    rgb[100][1][7] = 80 * intensity / 100;
    rgb[100][2][7] = 156 * intensity / 100; 
    
    rgb[101][0][7] = 0 * intensity / 100;
    rgb[101][1][7] = 0 * intensity / 100;
    rgb[101][2][7] = 0 * intensity / 100; 
    
    rgb[102][0][7] = 0 * intensity / 100;
    rgb[102][1][7] = 0 * intensity / 100;
    rgb[102][2][7] = 0 * intensity / 100; 
    
    rgb[103][0][7] = 0 * intensity / 100;
    rgb[103][1][7] = 0 * intensity / 100;
    rgb[103][2][7] = 0 * intensity / 100; 
    
    rgb[104][0][7] = 0 * intensity / 100;
    rgb[104][1][7] = 0 * intensity / 100;
    rgb[104][2][7] = 0 * intensity / 100; 
    
    rgb[105][0][7] = 0 * intensity / 100;
    rgb[105][1][7] = 0 * intensity / 100;
    rgb[105][2][7] = 0 * intensity / 100; 
    
    rgb[106][0][7] = 215 * intensity / 100;
    rgb[106][1][7] = 80 * intensity / 100;
    rgb[106][2][7] = 156 * intensity / 100; 
    
    rgb[107][0][7] = 215 * intensity / 100;
    rgb[107][1][7] = 80 * intensity / 100;
    rgb[107][2][7] = 156 * intensity / 100; 
    
    rgb[108][0][7] = 215 * intensity / 100;
    rgb[108][1][7] = 80 * intensity / 100;
    rgb[108][2][7] = 156 * intensity / 100; 
    
    rgb[109][0][7] = 0 * intensity / 100;
    rgb[109][1][7] = 0 * intensity / 100;
    rgb[109][2][7] = 0 * intensity / 100; 
    
    rgb[110][0][7] = 0 * intensity / 100;
    rgb[110][1][7] = 0 * intensity / 100;
    rgb[110][2][7] = 0 * intensity / 100; 
    
    rgb[111][0][7] = 0 * intensity / 100;
    rgb[111][1][7] = 0 * intensity / 100;
    rgb[111][2][7] = 0 * intensity / 100; 
    
    rgb[112][0][7] = 0 * intensity / 100;
    rgb[112][1][7] = 0 * intensity / 100;
    rgb[112][2][7] = 0 * intensity / 100; 
    
    rgb[113][0][7] = 0 * intensity / 100;
    rgb[113][1][7] = 0 * intensity / 100;
    rgb[113][2][7] = 0 * intensity / 100; 
    
    rgb[114][0][7] = 215 * intensity / 100;
    rgb[114][1][7] = 80 * intensity / 100;
    rgb[114][2][7] = 156 * intensity / 100; 
    
    rgb[115][0][7] = 215 * intensity / 100;
    rgb[115][1][7] = 80 * intensity / 100;
    rgb[115][2][7] = 156 * intensity / 100; 
    
    rgb[116][0][7] = 215 * intensity / 100;
    rgb[116][1][7] = 80 * intensity / 100;
    rgb[116][2][7] = 156 * intensity / 100; 
    
    rgb[117][0][7] = 0 * intensity / 100;
    rgb[117][1][7] = 0 * intensity / 100;
    rgb[117][2][7] = 0 * intensity / 100; 
    
    rgb[118][0][7] = 0 * intensity / 100;
    rgb[118][1][7] = 0 * intensity / 100;
    rgb[118][2][7] = 0 * intensity / 100; 
    
    rgb[119][0][7] = 0 * intensity / 100;
    rgb[119][1][7] = 0 * intensity / 100;
    rgb[119][2][7] = 0 * intensity / 100; 
    
    rgb[120][0][7] = 0 * intensity / 100;
    rgb[120][1][7] = 0 * intensity / 100;
    rgb[120][2][7] = 0 * intensity / 100; 
    
    rgb[121][0][7] = 0 * intensity / 100;
    rgb[121][1][7] = 0 * intensity / 100;
    rgb[121][2][7] = 0 * intensity / 100; 
    
    rgb[122][0][7] = 0 * intensity / 100;
    rgb[122][1][7] = 0 * intensity / 100;
    rgb[122][2][7] = 0 * intensity / 100; 
    
    rgb[123][0][7] = 0 * intensity / 100;
    rgb[123][1][7] = 0 * intensity / 100;
    rgb[123][2][7] = 0 * intensity / 100; 
    
    rgb[124][0][7] = 0 * intensity / 100;
    rgb[124][1][7] = 0 * intensity / 100;
    rgb[124][2][7] = 0 * intensity / 100; 
    
    rgb[125][0][7] = 0 * intensity / 100;
    rgb[125][1][7] = 0 * intensity / 100;
    rgb[125][2][7] = 0 * intensity / 100; 
    
    rgb[126][0][7] = 0 * intensity / 100;
    rgb[126][1][7] = 0 * intensity / 100;
    rgb[126][2][7] = 0 * intensity / 100; 
    
    rgb[127][0][7] = 0 * intensity / 100;
    rgb[127][1][7] = 0 * intensity / 100;
    rgb[127][2][7] = 0 * intensity / 100; 
    

            frameTime[7] = 50;

    

} 
void loop() {
    int nFrames = 8;
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
        