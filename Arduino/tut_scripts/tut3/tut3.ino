//tut3: analog inputs, reading V of a potato

//-----------------------------------
//inputs will take in values from 0-5V,
//and display as value of 0-1023

//pin 13 is a PWM pin, and we can use this for an analog o/p
//(BUT if im reading this right, THIS only goes 0-255).
//correct. pins 3,5,6,9,10,11,13 are all PWM pins/channels.

//to read analog i/p, use analogRead(analogPin);
//to output an analog value, use analogWrite (PWMPin, val_0_255);
//can also map/ scale values between input & output to represent
//real-world scales. use function:
// mappedValue = map(value, low_input, high_input, low_OP, high_OP);

//project sets int potatoPin=A0; int LEDPin=13;
// -> note that A0 is located on the ANALOG IN secN of board.

//project lists that it req's TWENTY FIVE wires/ paperclips....
//EDIT: nvm, he chains them. only need 3 wires

 // initialize pins int potatoPin = A0; int LEDPin = 13;

// initialize values int PotatoVal = 0; int MappedPotatoVal = 0;

int potatoPin = A0; int LEDPin = 13; 
int PotatoVal = 0; int MappedPotatoVal = 0; 

void setup() {
 // begin serial communication
 Serial.begin(9600); 
 // setup the inputs and outputs
 pinMode(potatoPin, INPUT);
 pinMode(LEDPin, OUTPUT);
}

void loop() {

 // set PotatoVal to the reading on A0
 PotatoVal = analogRead(potatoPin);   
 // set the values read on A0 tto 0 to 255
 // then save that value in MappedPotatoVal
 MappedPotatoVal = map(PotatoVal, 0, 1023, 0, 5000);  
 // write a value of 0 to 255 to pin 13 on the Arduino Leonardo
 analogWrite(LEDPin, MappedPotatoVal); 
 // write MappedPotatoVal to serial port.
 Serial.println(MappedPotatoVal);          
 // stop for 100ms
 delay(100);                     

} 


