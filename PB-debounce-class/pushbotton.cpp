#include "pushbutton.h" //include the header file

PushButton::PushButton(int pinNumber) { //the constructor receives the pin number connected to the push button
      pin = pinNumber; //pin variable receives the pin number
    };

void PushButton::init (){
   pinMode(pin, INPUT); //define pin as input
   //*This PB is dessinged to be connected wit a Pull down ressitor <--------------------
};
  
int PushButton:: updateState() { //function to get the state of the PB
       int reading = digitalRead(pin); //digital read the pin 
      
      if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis(); //The last Debounce is now equal to the milliseconds of the clock 
  }

   if ((millis() - lastDebounceTime) > debounceDelay) { //If the current millis and millis in the last debounce are bigger than the delay, do the following
    if (reading != buttonState) { //If the reading is different from the buttonState, update the buttonState with the reading 
      buttonState = reading;

      // Check if button is pressed
      if (buttonState == HIGH) {
        //If the button is pressed
        
        if (!buttonPressed) {// Return 1 when button is first pressed
          buttonPressed = true;
          return 1; 
        } else {
          return 0; //return 0 when button is continuously pressed
        }
      } else {
        buttonPressed = false;
      }
    }
  }
  
  lastButtonState = reading; //Update the last State of the PB with the previous reading
  return 0; // Return 0 if button is not pressed
     
        };

