#define pinX A0
#define pinY A1
#define SW 4

int valX = 0;
int valY = 0;

void setup() {
  // put your setup code here, to run once:  

  //pinMode(pinX, INPUT_PULLUP);
  //pinMode(pinY, INPUT_PULLUP);

  pinMode(SW, INPUT);
  digitalWrite(SW, HIGH);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  valX = analogRead(pinX);
  valY = analogRead(pinY);

  Serial.print("X: ");
  Serial.print(valX);
  Serial.print(" Y: ");
  Serial.println(valY);
  
  delay (200);
}
