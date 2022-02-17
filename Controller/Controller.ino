//Pins
const byte pot     =    A1;
const byte servo   =    1;

//Constants
int pot_Val = 0;
int pw = 1000;

void setup() {                
  pinMode(servo, OUTPUT);     
}

void loop() {
  pot_Val = analogRead(pot); 
  pw = map(pot_Val, 0, 1023, 1000,2200); 
  digitalWrite(servo, HIGH);
  delayMicroseconds(pw); 
  digitalWrite(servo,LOW);
  delayMicroseconds(20000-pw);
}
