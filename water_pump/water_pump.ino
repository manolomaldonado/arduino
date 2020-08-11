const int ledPin = 6;
const int switchPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);

}

void loop() {
        if (digitalRead(switchPin)==LOW){
          digitalWrite(ledPin,HIGH);
        }else{
          digitalWrite(ledPin,LOW);
        }
}
