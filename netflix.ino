#include <IRremote.h>

# define SMART_HUB 0xE0E09E61
# define ENTER     0xE0E016E9
# define UP        0xE0E006F9
# define DOWN      0xE0E08679
# define LEFT      0xE0E0A659
# define RIGHT     0xE0E046B9 

IRsend irsend;
boolean has_send = false;

void setup(){
  Serial.begin(9600);
}

void loop(){
  if(!has_send){
    irsend.sendSAMSUNG(SMART_HUB, 32);
    delay(3000);
    irsend.sendSAMSUNG(ENTER, 32);
    delay(10000);
    irsend.sendSAMSUNG(ENTER, 32);
    delay(1000);
    irsend.sendSAMSUNG(DOWN, 32);
    delay(1000);
    irsend.sendSAMSUNG(ENTER, 32);
    delay(1000);
    irsend.sendSAMSUNG(ENTER, 32);
    has_send=true;
  }
} 


