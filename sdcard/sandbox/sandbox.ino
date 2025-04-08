#include <SPI.h>
#include <SD.h>

#define PIN_CS 53

File testFile;

void setup() {

  pinMode(53, OUTPUT);
  pinMode(4, OUTPUT);

  Serial.begin(9600);

  char txtBuffer;

  while (!Serial) {
    ;  //Initialize Serial and wait until it's ready to not lose any logs
  }

  if (!SD.begin(PIN_CS)) {  //Initialize SD card - If it returns false, then it was not initilized correctly and terminates
    Serial.println("Card failed, or not present.");
    return; 
  }

  Serial.println("SD card initialized.");

  testFile = SD.open("graph-sd.txt");

  if (testFile) {
    Serial.println("Reading graph-sd.txt:");
    while (testFile.available()) {  //available() returns how many bytes are still available in the file

    txtBuffer = testFile.read();

      if (txtBuffer == '\n') {

        Serial.println("#newline#");
      }

      Serial.write(txtBuffer);

    }
  }else {
      Serial.println("Error opening file for reading.");
    }

    testFile.close();  // Close file
  
}

void loop() {


}