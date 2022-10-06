// C++ code
//
/*
	liga led por chave
    Lucas Lopes
    19/09/22
    v1.0
*/
#define ledVm	13
#define chave	8  
#define ON		HIGH
#define OFF		LOW

void setup() //INICIALIZAÇÃO
{
  pinMode(ledVm, OUTPUT);	//led saida
  pinMode(chave, INPUT);	//chave entrada
}

void loop()
{		
  if(digitalRead(chave)==HIGH) 	digitalWrite(ledVm,ON);
  else							digitalWrite(ledVm, OFF);
}