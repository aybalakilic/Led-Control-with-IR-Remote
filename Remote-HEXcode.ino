#include <IRremote.h>

int receiver_pin = 2;         
IRrecv irrecv(receiver_pin);  

decode_results results;     

void setup()
{
  Serial.begin(9600);         
  irrecv.enableIRIn();        
}

void loop() {
  if (irrecv.decode(&results)) {
    
    Serial.println(value);    
    irrecv.resume();         
    delay(10);                 
  }