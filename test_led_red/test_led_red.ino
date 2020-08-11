
const int redLed1 = 2;
const int redLed2 = 3;
const int redLed3 = 4;
const int redLed4 = 5;
const int switchPin = 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLed1, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(redLed3, OUTPUT);
  pinMode(redLed4, OUTPUT);
  pinMode(switchPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    int sec = 50;
    int switchState;
    switchState = digitalRead(switchPin);
    
    if(switchState==LOW){
      sec = 50;
    }else{
      sec = 1000;
    }
    digitalWrite(redLed1,HIGH);
    digitalWrite(redLed2,LOW);
    digitalWrite(redLed3,LOW);
    digitalWrite(redLed4,LOW);
    delay(sec);
    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, HIGH);
    digitalWrite(redLed3,LOW);
    digitalWrite(redLed4,LOW);
    delay(sec);
    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(redLed3,HIGH);
    digitalWrite(redLed4,LOW);
    delay(sec);
    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(redLed3,LOW);
    digitalWrite(redLed4,HIGH);
    delay(sec);

}
