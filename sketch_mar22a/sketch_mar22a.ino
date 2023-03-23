//Programmer : JoJo Malik
//Program : Blind Spot Monitor


int trigPin = 7;
int echoPin = 6;
int LEDlampRed = 9;
int  LEDlampWhite = 10;
int LEDlampBlue = 11;
int soundbuzzer = 3;
int sound  = 500;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin,  OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDlampRed, OUTPUT);
  pinMode(LEDlampWhite,  OUTPUT);
  pinMode(LEDlampBlue, OUTPUT);
  pinMode(soundbuzzer, OUTPUT);
}
void  loop() {
  long durationindigit, distanceinft;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  durationindigit = pulseIn(echoPin, HIGH);
  distanceinft = (durationindigit/5) / 29.1;

  if (distanceinft > 10){
    Serial.println("We have not detected any cars. Change lanes if you want.");
   
  }


  if (distanceinft <= 10 && distanceinft >= 7) {
    digitalWrite(LEDlampRed, HIGH); 
    Serial.println("There is another car within");
    Serial.print(distanceinft); 
    Serial.println(" feet from your blind spot \nGetting close - change lanes with caution\n");
  
  }

  else {
    digitalWrite(LEDlampRed, LOW);
  }





  
  delay(1000);
}
