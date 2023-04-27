#ifndef pushbutton_H
#define pushbutton_H
//define if is not defined yet

#include<Arduino.h> //include Arduino library

class PushButton { //create a class for push buttons
  private: //hide and protect the variables 
    int pin; //variable in which the pin number in use will be saved

    int buttonState;            // the current reading from the input pin
    int lastButtonState = LOW;  // the previous reading from the input pin. It is for default LOW
    unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
    unsigned long debounceDelay = 50;    // the debounce time in milliseconds
    
    bool buttonPressed; //Variable that indicates that the Button is being pressed

  public:
    PushButton(){}; //default costructor
    PushButton(int pinNumber); //constructor that receives the pin number
    
    void init(); //Initialize Push Button 

    int updateState();//function to digitalRead the pin to see the state of the button 

};

#endif