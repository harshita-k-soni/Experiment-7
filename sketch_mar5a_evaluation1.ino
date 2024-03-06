#define fastButton 8
#define slowButton 9
#define led 4
int slow;
int fast;
int time1=500;
int time2=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(fastButton,INPUT);
  pinMode(slowButton,INPUT);
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  fast=digitalRead(fastButton);
  slow=digitalRead(slowButton);
  if(fast==0){
    blink_fast();
  }
  else if(slow==0){
    blink_slow();
  }
  
}

void blink_fast(){
  while(1){
    slow=digitalRead(slowButton);
  if(slow==0){
    blink_slow();
  }
  digitalWrite(led,HIGH);
  delay(time1);
  digitalWrite(led,LOW);
  delay(time1);
  
  }
}

void blink_slow(){
  while(1){
    fast=digitalRead(fastButton);
  if(fast==0){
    blink_fast();
  }
  digitalWrite(led,HIGH);
  delay(time2);
  digitalWrite(led,LOW);
  delay(time2);
  
}
}
