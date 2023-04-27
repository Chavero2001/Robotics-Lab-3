#ifndef ledclass_H
#define ledclass_H
//define if is not defined yet

#include<Arduino.h> //include Arduino library

class LED { //create a class for LED
  private: //hide and protect the variables here
    int pin; //variable in which the pin number in use will be saved

  public:
    LED(){}; //default costructor
    LED(int pinNumber); //constructor that receives the pin number
    
    void init(); //method to initialize the LED

    void ON();//turn ON the LED

    void OFF();//turn OFF the LED

};

#endif