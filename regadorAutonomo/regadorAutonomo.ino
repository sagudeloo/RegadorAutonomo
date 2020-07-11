#define SENSOR A0
#define SENSORPOWER 7
#define BOMBA 8

int humedad = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(SENSORPOWER, OUTPUT);
  pinMode(BOMBA, OUTPUT);
  digitalWrite(BOMBA,LOW);
  digitalWrite(SENSORPOWER, LOW);
  Serial.begin(9600);
  delay(1000);  
  digitalWrite(SENSORPOWER, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //delay(10000);
  humedad = analogRead(SENSOR);
  Serial.println(humedad);
  if (humedad > 700){
    digitalWrite(BOMBA, HIGH);
  }
  delay(2000);
  digitalWrite(BOMBA, LOW);
  
  delay(1000);
  //digitalWrite(SENSORPOWER, LOW);
}
