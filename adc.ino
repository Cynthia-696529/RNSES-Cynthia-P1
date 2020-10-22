
const int potPin= 36;// valor del pin
int t = 0; //perioricidad s
int sensorValue = 0; 

void setup() {
Serial.begin(9600); //velocidad de transmisión de datos
t=1000;
}

void loop() {
  //leer adc
  sensorValue = analogRead(potPin);
  Serial.println("Valor ADC:");
  Serial.println(sensorValue);
delay(t);
} 
