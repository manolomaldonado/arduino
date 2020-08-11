
int led1 = 2;
int led2 = 3;
int switchPin = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(switchPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState;
  switchState = digitalRead(switchPin);
  if(switchState==LOW){
    digitalWrite(led1,HIGH);
    digitalWrite(led2, LOW);
    delay(100);
  }else{
    digitalWrite(led2,HIGH);
    digitalWrite(led1, LOW);
    delay(1000);
  }

}
