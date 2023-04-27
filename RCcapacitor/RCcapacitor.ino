/*The goal of this program is to read the voltage accross a capacitor

Capacitor, analogRead*/

int val; //Variable in which the value will be store

void setup() {

Serial.begin(9600); //Initialize serial monitor to use the Serial Plotter

}

void loop() {

val = analogRead(A0); //Read the voltage accross the capacitor
Serial.println(val); //Print the value in bits

}