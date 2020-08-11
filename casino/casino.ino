
const int ledPin1 = 2;
const int ledPin2 = 3;
const int ledPin3 = 4;
const int ledPin4 = 5;
const int ledPin5 = 6;
const int switchPin = 7;
int turn = 1;
boolean flag;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);

}

void loop() {
  int mode = 1;
  int level = 50;
  if (mode == 1){
    for( int a = 2; a < 7; a++){
        digitalWrite(a,HIGH);
        if (digitalRead(switchPin)==LOW){
          
          turn++;
          Serial.print(turn);
          Serial.println();
          trap();
          delay(1000);
        }else{
          delay(level);
        }
        digitalWrite(a,LOW);
    }
   }else{
      int a = (rand()%(7-2))+2;
      digitalWrite(a,HIGH);
      if (digitalRead(switchPin)==LOW){
        delay(1000);
      }else{
        delay(level);
      }
      digitalWrite(a,LOW);
    }
}

void trap(){
  if (turn == 4){
    Serial.print("Trampa");
    digitalWrite(5,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    turn = 1;
  }else{
    digitalWrite(6,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  
  
}
