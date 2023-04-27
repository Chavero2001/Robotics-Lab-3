#include "ledclass.h" //Include the header file of the class

LED::LED(int pinNumber){ //When the constructor is used, store the value to the variable pin
  pin=pinNumber;

};

void LED::init(){
  pinMode(pin,OUTPUT); //Define pin as Output
};

void LED::ON(){
  digitalWrite(pin,1);
};//function to digitalWrite 1 to the pin, turning on the LED

void LED::OFF(){
  digitalWrite(pin,0);
};//function to digitalWrite 0 to the pin, turning off the LED