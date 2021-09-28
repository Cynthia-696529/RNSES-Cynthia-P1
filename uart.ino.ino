bool bueno =  false;
bool espacio = false;
bool coincide = false;
char dato [10];
char datADC[] = "ADC("
char datPWM[] = "PWM("
/*inicializacion parametros*/
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0){
  dato =  Serial.read();
  for (int i = 0; i = 5; i++){
     if (dato(i) = " "){
       espacio =  true;
     }else {
      if (dato(i) == datADC(i)){
          coinciden = true;
          if( i == datADC.lenght() && coinciden){
            if ( dato(i+1) == "("){
              //ADC(x)
              t = (int)dato(i+2);
               //aplicar el periodo
            }else{
              //ADC
            }
          }
       }else{
         if(dato == "P"){
          if (dato(i) == datPMW(i)){
          coinciden = true;
          if(i == datPWM.lenght()&& coinciden){
            duty = (int) datPMW(i+1)
            //generar PWM
          }
          }
      }//caso PWM
    }
  }//seleccion
  }//for
  if(coinciden){
    // mensaje de error datos erroneos 
  }
   
  }
}
