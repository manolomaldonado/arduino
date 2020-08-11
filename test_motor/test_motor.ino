
//written by David Yu 
//Array overflow spotted by Yobi Gochida 09/12/2014
//For Rubus NZ Ltd
 
//The only two functions you need to know how to use is in the "void loop" function
// 1) turnFDegree(degree) : turns the stepper motor in the positive direction by
//                          (ROUGHLY!!!) by "degree" degrees, so turnFDegree(90) 
//                          will turn the stepper motor by 90 degree.
// 2) turnBDegree(degree) : turns the stepper motor in the negative direction by
//                          (ROUGHLY!!!) by "degree" degrees, so turnBDegree(90) 
//                          will turn the stepper motor by 90 degree.
 
 
 
int Pin0 = 10; 
int Pin1 = 11; 
int Pin2 = 12; 
int Pin3 = 13; 
 
void setup() 
{ 
 pinMode(Pin0, OUTPUT);  
 pinMode(Pin1, OUTPUT);  
 pinMode(Pin2, OUTPUT);  
 pinMode(Pin3, OUTPUT);  
} 
 
 
int stepSequence[8][4] = {
 
  {0,0,0,1},
  {0,0,1,1},
  {0,0,1,0},
  {0,1,1,0},
  {0,1,0,0},
  {1,1,0,0},
  {1,0,0,0},
  {1,0,0,1},
};
 
  
void loop(){
  
  
  turnFDegree(180); //As discussed above
  delay(1000);
  
  turnBDegree(180);//As discussed above
  delay(1000);  
}
 
void turnFDegree(int deg){
  
  int DEG =  deg * (90);
  DEG = DEG/(127);
  DEG = 2*DEG;
  for (int i=0; i <DEG; i++){
    turnForward();
    nullTurn();
  }
 
}
 
 
void turnBDegree(int deg){
  
  int DEG =  deg * (90);
  DEG = DEG/(127);
  DEG = 2*DEG;
  for (int i=0; i <DEG; i++){
    turnBackward();
    nullTurn();
  }
 
}
 
 
void turnForward(){
    for (int i = 0; i <= 7; i++){
 
      digitalWrite(Pin0, stepSequence[i][0]);  
      digitalWrite(Pin1, stepSequence[i][1]); 
      digitalWrite(Pin2, stepSequence[i][2]); 
      digitalWrite(Pin3, stepSequence[i][3]); 
      delay(1);
    }
}
void turnBackward(){
    for (int i = 7; i >= 0; i--){
 
     digitalWrite(Pin0, stepSequence[i][0]);  
     digitalWrite(Pin1, stepSequence[i][1]); 
     digitalWrite(Pin2, stepSequence[i][2]); 
     digitalWrite(Pin3, stepSequence[i][3]); 
     delay(1);
    }
}
 
void nullTurn(){
  digitalWrite(Pin0, 0);  
  digitalWrite(Pin1, 0); 
  digitalWrite(Pin2, 0); 
  digitalWrite(Pin3, 0); 
}
