const int aka = 13; //red
const int midori = 12; //green 
const int kiiro = 11; //yellow


void setup() {
  pinMode(aka, OUTPUT);
  pinMode(midori, OUTPUT);
  pinMode(kiiro, OUTPUT);
}

void loop() {
  digitalWrite(aka, HIGH);
  digitalWrite(midori, LOW);
  digitalWrite(kiiro, LOW);
  delay(5000); 

  digitalWrite(aka, LOW);
  digitalWrite(kiiro, LOW);
  digitalWrite(midori, HIGH);
  delay(5000); 

  digitalWrite(aka, LOW);
  digitalWrite(kiiro, HIGH);
  digitalWrite(midori, LOW);
  delay(2000); 
}
