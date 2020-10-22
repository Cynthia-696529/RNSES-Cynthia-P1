
//f=5Khz
const int potPin= 36;// valor del pin
int duty = 0; 
int PWM_FREQUENCY = 5000; //Hz
int PWM_CHANNEL = 0; 
int PWM_RESOUTION = 12; //2^12 
int GPIOPIN = 5 ; 

void setup(){
  
ledcSetup(PWM_CHANNEL, PWM_FREQUENCY, PWM_RESOUTION); //set the frequency,  resolution, and channel of the PWM controller 
ledcAttachPin(GPIOPIN, PWM_CHANNEL); // set the PIN with the channel

}

void loop() {
duty = analogRead(potPin);
ledcWrite(PWM_CHANNEL, duty);// generate the signal with a specified duty cycle
delay(100)
}
