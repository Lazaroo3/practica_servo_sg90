#include <Servo.h>  
//Incluir la biblioteca

Servo servoMotor;  //Declarar la variable para controlar el Servo

void ajuste_inicial(){

servoMotor.write(0);  //Desplazar a la posicion 0
delay(1000);
  
}

void setup(){
	Serial.begin(9600);
  	servoMotor.attach(9);  //El servomotor trabajara con el pin 9
  	ajuste_inicial();
}

void tres_angulos(){
	servoMotor.write(0);
  	delay(1000);
  	servoMotor.write(90);
  	delay(4000);
  	servoMotor.write(180);
  	delay(5000);
}

void vigilancia(){
  for(int i=0 ; i<=180 ; i++){
  	servoMotor.write(i);
    delay(10);
  }
  
  for(int i=179 ; i>0 ; i--){
  	servoMotor.write(i);
    delay(10);
  }
}

void loop(){
	
	//tres_angulos();
	//vigilancia();
}
