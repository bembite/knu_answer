#include <SimpleTimer.h> //simple timer library

const int buttonPin = 7;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
bool pressed=false;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
// the timer object
SimpleTimer timer;

void button_turn_off() {
    pressed=false;
}



void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
     if(pressed)
     {
     Serial.println("---------------- Double click performed! ----------------");


     }
     else
     {
        pressed=true;
        //  digitalWrite(ledPin, LOW);
        Serial.println("---------------- ----------------");
        timer.setInterval(1000, button_turn_off);



     }
  } 
}

