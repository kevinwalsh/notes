void setup () {
// turns serial communication on
Serial.begin(9600); 

}void loop () {
  // writes "Hello, World" to the Serial port
 Serial.println("Hello, World");
 // small delay to give Arduino time to process
 delay(1000);
}

