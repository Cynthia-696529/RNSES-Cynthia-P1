# RNSES_Cynthia_P1

## Tabla de contenidos 
* [Información](#info)
* [Tarea 1. Lectura ADC](#technologies)
* [Tarea 2. Generación interrupción lectura ADC](#setup)
* [Tarea 3. Generación salida PWM - ADC](#set)
* [Tarea 4. Comunicación UART - ADC](#sp)
## Informacion
Familiarización con el sistema de desarrollo ESP32, implementación en el entorno de desarrollo IDE. Se realizan tareas para la configuración y control de diferentes módulos hardware, módulo ADC, módulo PWM, comando UART. 
## Tarea 1
Leer valor módulo ADC y mostrarlo por pantalla(Monitor serie). 
Nota: la velocidad de transmisión que se establece en el código debe de ser la misma que aparece en la ventana del monitor serie sino no aparecerá ningún dato.

* https://github.com/Cynthia-696529/RNSES_Cynthia_P1/blob/8f9715e3c8107f534491f495e7dce7eef6a4bbb7/adc.ino
## Tarea 2
Generar una interrupción cada 10s mediante timers para que lea el ADC y lo muestre por pantalla.

* https://github.com/Cynthia-696529/RNSES_Cynthia_P1/blob/c17fd9a4ae4114f4c6f10904c90400713ded6335/timer_adc.ino
## Tarea 3
Generar una salida PWM a 5kHz proporcional a la lectura del ADC, con un duty de 5.

*https://github.com/Cynthia-696529/RNSES_Cynthia_P1/blob/c17fd9a4ae4114f4c6f10904c90400713ded6335/timer_adc.ino
##Tarea 4
Comunicación UART. Si se manda:
* "ADC" se envíe la lectura del ADC
* "ADC(x)" se envíe el valor del ADC cada x seg. Si x = 0 no se envíe más datos.
* "PWM(x)" se cambia el valor de duty, x toma valores enteros entre 0-9.

https://github.com/Cynthia-696529/RNSES_Cynthia_P1/blob/c17fd9a4ae4114f4c6f10904c90400713ded6335/uart.ino.ino
