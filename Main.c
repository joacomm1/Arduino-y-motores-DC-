// C++ code
//
// Acá se definen los pinesdel H-Bridge 
#define PIN_IN1 2
#define PIN_IN2 5
#define PIN_ENABLE1 3
#define PIN_IN3 8
#define PIN_IN4 9
#define PIN_ENABLE2 10

//Acá se definen los pines de los botones
#define PIN_IZQ 12
#define PIN_ADELANTE 11
#define PIN_ATRAS 7
#define PIN_DER 6

//Acá se definen los valores de los botones iniciales.
int buttonState_IZQ = 0;
int buttonState_ADELANTE = 0;
int buttonState_ATRAS = 0;
int buttonState_DER = 0;

//Acá se declara las valiables speed1 y speed2 las cuales mas adelante se utilizarán para poder girar, avanzar
int speed1;
int speed2;

void setup() {
  // Acá se configuran los pines y se define si es que son output o input
  pinMode(PIN_IN1, OUTPUT);
  pinMode(PIN_IN2, OUTPUT);
  pinMode(PIN_ENABLE1, OUTPUT);
  pinMode(PIN_IN3, OUTPUT);
  pinMode(PIN_IN4, OUTPUT);
  pinMode(PIN_ENABLE2, OUTPUT);
  pinMode(PIN_IZQ, INPUT);
  pinMode(PIN_ADELANTE, INPUT);
  pinMode(PIN_ATRAS, INPUT);
  pinMode(PIN_DER, INPUT);
}

void loop() {
  //Acá se le asigna el valor del boton, HIGH si es que ha sido apretado el boton
  buttonState_IZQ = digitalRead(PIN_IZQ);
  buttonState_ADELANTE = digitalRead(PIN_ADELANTE);
  buttonState_ATRAS = digitalRead(PIN_ATRAS);
  buttonState_DER = digitalRead(PIN_DER);
//En el primer if si es que el botton izquiero fue apretado, girará el motor derecho a 
//la velocidad maxima y el izquierdo a 100 de 255, por lo que girara a la izquierda
  
if(buttonState_IZQ == HIGH){
    speed1 = 100;
    speed2 = 255;

//Acá se le asigna al Pin Enable del H-Bridge las velocidades 
    analogWrite(PIN_ENABLE1, speed1);
    analogWrite(PIN_ENABLE2, speed2);
//Se le asigna los valores LOW y HIGH a los pines del H-Bridge para que giren a la derecha 
    digitalWrite(PIN_IN1, LOW);
  	digitalWrite(PIN_IN2, HIGH);
  	digitalWrite(PIN_IN3, LOW);
  	digitalWrite(PIN_IN4, HIGH);
    delay(200);
  	
  }


//En el segundo if si es que el segundo botton de izquierda a derecha fue apretado, 
//girará el motor derecho e izquierdo a la velocidad maxima, los dos giran hacia la derecha 

if(buttonState_ADELANTE == HIGH){
    speed1 = 255;
    speed2 = 255;
 //Acá se le asigna al Pin Enable del H-Bridge las velocidades 
   
    analogWrite(PIN_ENABLE1, speed1);
    analogWrite(PIN_ENABLE2, speed2);

 //Se le asigna los valores LOW y HIGH a los pines del H-Bridge para que giren a la derecha 
   
    digitalWrite(PIN_IN1, LOW);
  	digitalWrite(PIN_IN2, HIGH);
  	digitalWrite(PIN_IN3, LOW);
  	digitalWrite(PIN_IN4, HIGH);
    delay(200);
  	
  }


//En el tercer if si es que el tercer botton de izquierda a derecha fue apretado, 
//girará el motor derecho e izquierdo a la velocidad maxima, los dos giran hacia la izquierda 


  if(buttonState_ATRAS == HIGH){
    speed1 = 255;
    speed2 = 255;

 //Acá se le asigna al Pin Enable del H-Bridge las velocidades 


    analogWrite(PIN_ENABLE1, speed1);
    analogWrite(PIN_ENABLE2, speed2);


 //Se le asigna los valores LOW y HIGH a los pines del H-Bridge para que giren a la izquierda 

    digitalWrite(PIN_IN1, HIGH);
  	digitalWrite(PIN_IN2, LOW);
  	digitalWrite(PIN_IN3, HIGH);
  	digitalWrite(PIN_IN4, LOW);
    delay(200);
  	
  }



//En el cuarto if si es que el botton de derecha fue apretado, girara el motor izquierdo
//a la velocidad maxima y el derecho a 100 de 255, por lo que girara a la izquierda
  if(buttonState_DER == HIGH){
    speed1 = 255;
    speed2 = 100;


 //Acá se le asigna al Pin Enable del H-Bridge las velocidades 

    analogWrite(PIN_ENABLE1, speed1);
    analogWrite(PIN_ENABLE2, speed2);


 //Se le asigna los valores LOW y HIGH a los pines del H-Bridge para que giren a la derecha 


    digitalWrite(PIN_IN1, LOW);
  	digitalWrite(PIN_IN2, HIGH);
  	digitalWrite(PIN_IN3, LOW);
  	digitalWrite(PIN_IN4, HIGH);
    delay(200);
  	
  }

//Acá si es que ningun boton es apretado entonces todos los pines del input del H-Bridge
//Estaran en LOW por lo que se detendran los motores
  else{
    digitalWrite(PIN_IN1, LOW);
  	digitalWrite(PIN_IN2, LOW);
  	digitalWrite(PIN_IN3, LOW);
  	digitalWrite(PIN_IN4, LOW);
  }
  
  
}
