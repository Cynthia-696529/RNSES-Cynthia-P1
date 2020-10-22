
const int potPin= 36;// valor del pin
int t = 10000000; //perioricidad 10s
int sensorValue = 0;
hw_timer_t * timer = NULL;
bool interrup;

void IRAM_ATTR onTimer() {
  sensorValue = analogRead(potPin);
  interrup = true;
}

void setup() {
 
  Serial.begin(115200); // ojo con la velocidad a la que me comunico y con la que leo
 
  timer = timerBegin(0, 80, true);
  timerAttachInterrupt(timer, &onTimer, true);
  timerAlarmWrite(timer, t, true);//valor en el que se generará la interrupción
  timerAlarmEnable(timer);
  
}

//main loop
void loop() {
 if(interrup){
  Serial.println("Valor ADC:");
  Serial.println(sensorValue);
   interrup = false;
 }
}
