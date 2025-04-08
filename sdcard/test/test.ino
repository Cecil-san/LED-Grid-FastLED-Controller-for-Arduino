#include <SPI.h>
#include <SD.h>

#define PIN_CS 53

File testFile;

  void setup() {

     testFile = SD.open("graph-sd.txt");

    pinMode(53, OUTPUT);
    pinMode(4, OUTPUT);

    Serial.begin(9600);
    while (!Serial) {
        ;  //Initialize Serial and wait until it's ready to not lose any logs
    }

    if (!SD.begin(PIN_CS)) {
      Serial.println("Card failed, or not present.");
      return; //Inilialize SD card - If it gives false output, then it was not initilized correctly and terminates
    }

    Serial.println("SD card initialized.");
  

    //No argument needed for reading
      testFile = SD.open("graph-sd.txt");

      if (testFile) {
          Serial.println("Reading test.txt:");
         // while (testFile.available()) {  //available() returns how many bytes are still available in the file
              Serial.write(testFile.read());  // read() returns bytes (file's characters in this case) always starting from the first one - next time
                                              // it's run, it will return next byte and so on.
          //}
          //testFile.close();  // Close file
      } else {
          Serial.println("Error opening file for reading.");
      }

}

void loop() {
        if (testFile) {
          Serial.println("Reading test.txt:");
          while (testFile.available()) {  //available() returns how many bytes are still available in the file
              Serial.write(testFile.read());  // read() returns bytes (file's characters in this case) always starting from the first one - next time
                                              // it's run, it will return next byte and so on.
          }
          //testFile.close();  // Close file
      } else {
          Serial.println("Error opening file for reading.");
      }

}
