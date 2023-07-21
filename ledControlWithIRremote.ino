#include <IRremote.h> 
int yellow=3, red=4, green=5, white=6, blue=7;
int IRdatapin=2;

IRrecv IR0(IRdatapin);      
decode_results results;     

#define keyOkay 16726215
#define key0 16750695
#define key1 16753245
#define key2 16736925
#define key3 16769565
#define key4 16720605
#define key5 16712445
#define key6 16761405
#define key7 16769055
#define key8 16754775
#define key9 16748655
#define keyRight 16734885
#define keyLeft 16716015
#define keyStar 16738455
#define keyDiez 16756815 


void setup(){
  Serial.begin(9600);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(white,OUTPUT);
  pinMode(blue,OUTPUT);
  IR0.enableIRIn();              

}

void loop()
{
  if(IR0.decode(&results))
  {           
      Serial.println(results.value);   
      IR0.resume(); 
      if(results.value == key0) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW);
          digitalWrite(blue,LOW);
      }     
      else if(results.value == key1) 
      {
          digitalWrite(white,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(red,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(blue,HIGH);
      }

      else if(results.value == key2) 
      {
          digitalWrite(white,!digitalRead(white));
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW);  
          digitalWrite(blue,LOW);   
      }
      else if(results.value == key3) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,!digitalRead(green));
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW);
          digitalWrite(blue,LOW);     
      }
       else if(results.value == key4) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,!digitalRead(red));
          digitalWrite(yellow,LOW); 
          digitalWrite(blue,LOW);    
      }
      else if(results.value == key5) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,!digitalRead(yellow)); 
          digitalWrite(blue,LOW);
      }
      else if(results.value == key6) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW); 
          digitalWrite(blue,!digitalRead(blue));
      }
      else if(results.value == keyRight) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW); 
          digitalWrite(blue,LOW);
          digitalWrite(white,HIGH);   
          delay(100);
          digitalWrite(green,HIGH);   
          delay(100);
          digitalWrite(red,HIGH);     
          delay(100);
          digitalWrite(yellow,HIGH);  
          delay(100);
          digitalWrite(blue,HIGH);    
          delay(100);
      }
      else if(results.value == keyLeft) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW); 
          digitalWrite(blue,LOW);
          digitalWrite(blue,HIGH);   
          delay(100);
          digitalWrite(yellow,HIGH);   
          delay(100);
          digitalWrite(red,HIGH);     
          delay(100);
          digitalWrite(green,HIGH);  
          delay(100);
          digitalWrite(white,HIGH);    
          delay(100);
      }
      else if(results.value == keyStar) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW); 
          digitalWrite(blue,LOW);
          for(int i=0;i<=30;i++)
          {
            digitalWrite(white,HIGH);
            digitalWrite(green,HIGH);
            digitalWrite(red,HIGH);
            digitalWrite(yellow,HIGH);
            digitalWrite(blue,HIGH);
            delay(100);
            digitalWrite(white,LOW);
            digitalWrite(green,LOW);
            digitalWrite(red,LOW);
            digitalWrite(yellow,LOW);
            digitalWrite(blue,LOW);
            delay(100);
          }
      }        
      else if(results.value == keyDiez) 
      {
          digitalWrite(white,LOW);
          digitalWrite(green,LOW);
          digitalWrite(red,LOW);
          digitalWrite(yellow,LOW); 
          digitalWrite(blue,LOW);
          digitalWrite(white,HIGH);   
          delay(100);
          digitalWrite(green,HIGH);   
          delay(100);
          digitalWrite(red,HIGH);     
          delay(100);
          digitalWrite(yellow,HIGH);  
          delay(100);
          digitalWrite(blue,HIGH);    
          delay(100);
          digitalWrite(blue,LOW);   
          delay(100);
          digitalWrite(yellow,LOW);   
          delay(100);
          digitalWrite(red,LOW);     
          delay(100);
          digitalWrite(green,LOW);  
          delay(100);
          digitalWrite(white,LOW);    
          delay(100);
      }
      delay(100);  
  }

 

}




















