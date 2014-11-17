int pin1=12,pin2=13;
int motor1=9,motor2=10;
int mode=-1;
int prevmode=0;
void setup(){
  Serial.begin(9600);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  digitalWrite(pin2,HIGH);
}
void loop(){
  if(Serial.available()==1){
     char inChar = (char)Serial.read(); 
     if(inChar=='1'){
       digitalWrite(pin1,HIGH);
       digitalWrite(pin2,LOW);
       mode=1;
     }
     if(inChar=='2'){
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      mode=2;
     } 
}
if(prevmode!=0){
  if(prevmode!=mode){
    if(mode==1){
      digitalWrite(motor1,HIGH);
      digitalWrite(motor2,LOW);
      delay(100);
    }
    if(mode==2){
      digitalWrite(motor1,LOW);
      digitalWrite(motor2,HIGH);
      delay(100);
    }
  }
}
digitalWrite(motor1,LOW);
digitalWrite(motor2,LOW);
prevmode=mode;
}
