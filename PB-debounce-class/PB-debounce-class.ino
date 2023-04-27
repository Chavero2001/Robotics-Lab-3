/*The goal of this program is to create a class for a Push button.
The class must also contain a debounce that doesn´t relay on Delay

Class, functions*/ 
#include "pushbutton.h" //include the header file

PushButton myButton(2); // create a new button object with pin 2

int State; //Variable that stores the state of the PB 

void setup() {
  myButton.init(); //Initialize Push button
  Serial.begin(9600); //Initialize Serial communication
}

void loop() {
  State = myButton.updateState(); //Read the PB using a method of the class
  //Store the value in the variable State
  if (State==1){ //If State is equal to 1, it means that the PB is pressed
    Serial.println("Button is pressed"); //Print that the button is pressed
  }
}