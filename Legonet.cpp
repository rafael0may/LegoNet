int a=0;
int n=0;
int r=0;
int  z=7;
void setup() { 
 Serial.begin(9600);
  for (int i=2;i<=7;i++){
    pinMode(i,OUTPUT);
    }
   for(int i=8;i<=13;i++){
    pinMode(i,INPUT);
    }
}

void loop() {
  int n=2;
      for(int i=8;i<=13;i++){
        a=digitalRead(i);
        if(a==1){
          digitalWrite(n,HIGH);
          }else{
            digitalWrite(n,LOW);
            }
            n++;
        }
        BinarioDecimal();
        delay(500);
      }
void BinarioDecimal(){
     int d=0; 
     a=digitalRead(13);
     if(a==1){
      d=d+1;
      }
     a=digitalRead(12);
     if(a==1){
      d=d+2;
      }
     a=digitalRead(11);
     if(a==1){
      d=d+4;
      }
     a=digitalRead(10);
     if(a==1){
      d=d+8;
      }
     a=digitalRead(9);
     if(a==1){
      d=d+16;
      }
     a=digitalRead(8);
     if(a==1){
      d=d+32;
      }
      Serial.println(d);
  }

  void DecimalBinario(){
    if(z==6){
      for (int i=2;i<=6;i++){
      digitalWrite(i,LOW);
      }
    }
    if(z==5){
      for (int i=2;i<=5;i++){
      digitalWrite(i,LOW);
     }
   }
   if(z==4){
      for (int i=2;i<=4;i++){
      digitalWrite(i,LOW);
      }
   }
       if(z==3){
      for (int i=2;i<=3;i++){
      digitalWrite(i,LOW);
     }
   }
       if(z==2){
      for (int i=2;i<=2;i++){
      digitalWrite(i,LOW);
     }
   }
   }