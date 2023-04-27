/*The goal of this program is to use two classes, a Push Button class and a Led class.
Pressing the buttons alternates the LED that is on. Keeping the button pressed doesn't chage the LED that is on

Classes, functions, LED class, PB class*/ 
#include "pushbutton.h" //include the PB class
#include "ledclass.h" //include the LED class
//#include <Timer.h> //Optinal Timer class to replace the delay

PushButton PBtest(2); // create a new button object with pin 2

//Create LED objects and assign them a pin
LED red(13); 
LED blue(12);
LED green(11);
LED white(10);

int state; //Variable that stores the state of the PB 
int Case=0; //Variable responsible for changeing the swithc case. It starts at Case 0

void setup() {

  Serial.begin(9600); //Initialize Serial monitor to check the correct operation of the program
  PBtest.init(); //Initialize Push button

  //initialize all the LEDs
  red.init();
  blue.init();
  green.init();
  white.init();
}

void loop() {


  state=PBtest.updateState(); //Retrive the value of the PB by using a method from the PB class

  Serial.print(state); //Print the value to see that everything is working as expected
  Serial.print("  ");

  if(state>0){ //If there is a change in the state, it means that the button was pressed, thus, changing the LED that is on
    Case=Case+1; //When the button is pressed, 1 is added to case, thus changing the case    
  }

  Serial.println(Case); //print the case to be able to check if it is properly working

  switch (Case){ //Switch case based on the variable Case
    case 0: //When the program starts the variable is equal to 0, being this the case
          red.ON(); //The first LED is on 
          blue.OFF(); //The rest of the LEDs remain off
          green.OFF() ;
          white.OFF(); 
          
    break; //Break the case and continue 
    case 1: //If the PB is pressed, now Case is equal to 1
          red.OFF(); //The first LED turns off
          blue.ON(); //The second is now ON
          green.OFF() ; //The rest remain off
          white.OFF();  
    break; 
    case 2: //If the PB is pressed again, the case will change to 2
          red.OFF(); //First LED OFF
          blue.OFF(); //Second OFF
          green.ON(); //Third ON
          white.OFF(); //Fourth OFF
    break;
    case 3: //If the PB is pressed again, 1 will be added to Case, being now 3
      red.OFF();//First LED OFF
      blue.OFF();//Second OFF
      green.OFF();//Third OFF
      white.ON(); //Fourth ON
    break;
    default:
      Case=0;   //If the Case reaches 4, the value resets to 0, starting the loop again
    break;    
  };
  
  
}