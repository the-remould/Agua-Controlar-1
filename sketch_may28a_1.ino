int LED1 =3;
int LED2 =5;
int LED3 =6;
void setup() {
Serial.begin(9600);
//declare pin 3, 5,6 to be out put:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
digitalWrite(LED1,1);
digitalWrite(LED2,2);
digitalWrite(LED3,3);
}
void loop() {
int sensorValue=analogRead(A0);
Serial.println(sensorValue);
if (sensorValue>=250){
digitalWrite(LED1, HIGH);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);
}
else if(sensorValue>=200 && sensorValue<250){
digitalWrite(LED2, HIGH);
digitalWrite(LED1, LOW);
digitalWrite(LED3, LOW);
}
else if(sensorValue>=0 && sensorValue <200){
digitalWrite(LED3, HIGH);
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
}
delay(2000);
}
