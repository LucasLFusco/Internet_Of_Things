// C++ code
//
/*
	Alarme de duas zonas
    Lucas Lopes
    19/09/22
    v1.0
*/
#define ledVm	13
#define chave	8  
#define Sensor1	11
#define Sensor2	6
#define Buzina 	3
#define ON		HIGH
#define OFF		LOW

int Memo_chave; //memoria da chave

void setup() //INICIALIZAÇÃO
{
  pinMode(ledVm, OUTPUT);	//led saida
  pinMode(Buzina, OUTPUT);
  pinMode(chave, INPUT);	//chave entrada
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  Memo_chave=false;   		//inicializei a memoria
}

void loop()
{		
  if(digitalRead(chave)){ //le a chave apertada
    delay(10);
     while(digitalRead(chave)){
     };  
    if(Memo_chave==false)	Memo_chave=true;
  else						Memo_chave=false;
  }
  if(Memo_chave){// ALARME LIGADO	
    digitalWrite (ledVm, ON);
    	if(digitalRead(Sensor1)||digitalRead(Sensor2)){	
     	 digitalWrite(Buzina, ON);}
    	else						
     	 digitalWrite(Buzina, OFF);
   		 }
  else {
    digitalWrite (ledVm, OFF);
    digitalWrite (Buzina, OFF);
  }
}