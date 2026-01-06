Obstacle Detection Code
int ultrasonicPin = 7;
//RGB LED pins
int redPin=4;
int greenPin =5;
//int bluePin =3

long duration;
int distance;
int safeDistance=20;

void setup()
{
  pinMode(ultrasonicPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(ultrasonicPin, LOW);
  delayMicroseconds(2); 
  digitalWrite(ultrasonicPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonicPin, LOW);
  
  //Switch pin to input to receive echo
  pinMode(ultrasonicPin, INPUT);
  duration = pulseIn(ultrasonicPin, HIGH);
  
 
Obstacle Detection Code
 //Convert to distance
  distance = duration*0.01723;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if(distance<20) {
    Serial.println("Obstacle detected: STOP");
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }else{
    Serial.println("Path Clear: MOVE FORWARD");
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
  
  delay(500);
  
  //Set back to output for next pulse
  pinMode(ultrasonicPin, OUTPUT);
}
