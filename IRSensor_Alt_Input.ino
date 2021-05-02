/* We'll be adding lines, similar to barcode but a little thicker, where number 0 is the thinnest and number 9 is the thickest.
Basically the page number is written as a combination of these lines...
First, we scan this particular code of each page using this method
The code will display values based on the thickness of the barcode lines...
So we take some training data, where we obtain the thickness of the lines and corresponding output.  
Since we dont't have the IR sensor, we couldn't do this training part...
Then, we take the pages and start scanning, using the training data, we obtain the page numbers for the corresponding barcode lines...
 */

int analog_ip = A0;   // select the input pin Photo Diode.
int inputVal = 0;     // to store photo diode input


void setup() {
  Serial.begin(9600);   // Setup Serial Communication.               
}

void loop(){
  inputVal = analogRead(analog_ip); // Reading and storing analog input value.
  Serial.print("Input Value:");
  Serial.print(inputVal);       // Printing Analog input value of Photo Diode.
  Serial.print("\n");           // moving to new line
  delay(500);                   // Waiting for a while.
}
