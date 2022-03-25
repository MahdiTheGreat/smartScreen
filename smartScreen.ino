const int ledOutput = 4;// Initialize Pin11 for connecting LED
const int ldrInput = A0;// Initialize PIN A0 LDR PIN
void setup() {
  Serial.begin(9600);
  pinMode(ledOutput, OUTPUT);// Define LED pin as output
  pinMode(ldrInput, INPUT);// Define LDR pin as input 
}
void loop() {

  int ldrStatus = analogRead(ldrInput); // read LDR lignt intensity as analog value
  analogWrite(ledOutput,map(ldrStatus,0,1023,0,255));
  delay(100);
}
