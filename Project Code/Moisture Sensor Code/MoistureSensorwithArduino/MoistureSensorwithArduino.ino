


int led1 = 8;

int led2 = 9;

int led3 = 10;

int led4 = 11;

int led5 = 12;



int mostureSensor = A0;



void setup() {

  // Serial Begin so we can see the data from the mosture sensor in our serial input window. 

  Serial.begin(9600);

  // setting the led pins to outputs

  pinMode(led1, OUTPUT);

  pinMode(led2, OUTPUT);

  pinMode(led3, OUTPUT);

  pinMode(led4, OUTPUT);

  pinMode(led5, OUTPUT);

}

void loop() {

 
  int sensorValue = analogRead(mostureSensor);

  


  Serial.println(sensorValue);

  

 if (sensorValue >= 820)

 {

 digitalWrite(led1, HIGH);

 digitalWrite(led2, HIGH);

 digitalWrite(led3, HIGH);

 digitalWrite(led4, HIGH);

 digitalWrite(led5, LOW);

}

else if (sensorValue >= 615  && sensorValue < 820)

 {

 digitalWrite(led1, HIGH);

 digitalWrite(led2, HIGH);

 digitalWrite(led3, HIGH);

 digitalWrite(led4, LOW);

 digitalWrite(led5, LOW);

}  

else if (sensorValue >= 410 && sensorValue < 615)

 {

 digitalWrite(led1, HIGH);

 digitalWrite(led2, HIGH);

 digitalWrite(led3, LOW);

 digitalWrite(led4, LOW);

 digitalWrite(led5, LOW);

}    

else if (sensorValue >= 250 && sensorValue < 410)

 {

 digitalWrite(led1, HIGH);

 digitalWrite(led2, LOW);

 digitalWrite(led3, LOW);

 digitalWrite(led4, LOW);

 digitalWrite(led5, LOW);

}

else if (sensorValue >= 0 && sensorValue < 250)

 {

 digitalWrite(led1, LOW);

 digitalWrite(led2, LOW);

 digitalWrite(led3, LOW);

 digitalWrite(led4, LOW);

 digitalWrite(led5, LOW);

}

  delay(100);        
}
