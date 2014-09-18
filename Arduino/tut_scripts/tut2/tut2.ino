int LEDPin = 13;
int buttonPin=3;
int buttonVal = 0;

void setup() {

 // set digital pin 13 to an output
 pinMode(LEDPin, OUTPUT);
 // set digital pin 3 to an input
 pinMode(buttonPin, INPUT); 
 
 // turn on Arduino's internal pull-up resistor.
 digitalWrite(buttonPin, HIGH);

}
void loop() {
 // buttonVal is equal to HIGH if the switch is not connected
 // and LOW if the switch is connected
 buttonVal = digitalRead(buttonPin);
 
 // if the switch is connected execute this If Statement
 if (buttonVal == LOW)
 {  // turn LED on
   digitalWrite(LEDPin, HIGH); 
 }
 // if the switch is not connected or has any other value 
 // execute this Else Statement
 else
 {   // turn LED off
   digitalWrite(LEDPin, LOW); 
 }

} 
