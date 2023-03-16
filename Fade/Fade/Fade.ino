//programmer: jojo malik
//date 3.14.23
//program: fade



/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade
*/

int ledTen = 10;        // pin 10 using PWM
int ledEleven = 11;    // pin 11 using PWM

//int brightness = 0;    // how bright the LED is
//int fadeAmount = 5;    // how many points to fade the LED by


// the setup routine runs once when you press reset:
void setup() {
  // declare pin 10 to be an output:
  pinMode(ledTen, OUTPUT);
  pinMode(ledEleven, OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledTen, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledTen, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
// fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledEleven, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledEleven, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }


}
