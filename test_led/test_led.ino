
const int pin1 = 3;
const int pin2 = 4;
const int pin3 = 5;
const int pin4 = 6;
const int pin5 = 7;
const int switchPin = 2;
int seconds = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState;
  switchState = digitalRead(switchPin);
  seconds = 100;
  for (int thisPin = 3; thisPin < 8; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(seconds);
    digitalWrite(thisPin, LOW);
    if(switchState==LOW){
      digitalWrite(thisPin, HIGH);
    }else{
      seconds = 100;
    }
  }
  
  
}
