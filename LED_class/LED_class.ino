/*The goal of this program is to use create a LED class

Classes, functions, LED class*/ 

#include "ledclass.h" //include the LED class

//Create an object for a LED
LED test(13);

void setup() {
  //Initialize LED defining it as an Output
test.init();
}

void loop() {
  
test.on(); //Turn on LED
delay(1000); //Keep LED on during 1 second
test.off(); //Turn off LED
delay(1000) //Keep LED off during 1 second
}
