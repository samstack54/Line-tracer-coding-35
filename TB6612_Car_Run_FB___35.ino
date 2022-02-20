
 #define PWMA  10 
 #define AIN2  9 
 #define AIN1  8
 #define STBY  7
 #define BIN1  5 
 #define BIN2  4 
 #define PWMB  3  

 void setup() {

  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);  
  pinMode(STBY, OUTPUT); 
  digitalWrite(STBY, HIGH);     
 }

 void loop() {

 Forward(200) ; 
 delay(2000) ;

 Stop(0) ;
 delay(2000) ;
 
 Backward(100) ; 
 delay(4000) ; 

 Stop(0) ;
 delay(2000) ;                                
 }

 void Forward(int Speed) {
  analogWrite(PWMA, Speed) ;
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);  
  analogWrite(PWMB, Speed) ;
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
 }

 void Backward(int Speed) {
  analogWrite(PWMA, Speed) ;
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);  
  analogWrite(PWMB, Speed) ;
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
 }

 void Stop(int Speed) {
  analogWrite(PWMA, Speed) ;
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);  
  analogWrite(PWMB, Speed) ;
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, LOW);
 }
