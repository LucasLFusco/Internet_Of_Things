// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/
#define LedVm	  13
#define LedAm 	11
#define	LedVd	  9
#define LedVm2	7
#define	LedAm2	4
#define	LedVd2	2
#define ON  HIGH
#define OFF LOW

int tempo_Vm = 3000;		//tempo vermelho
int tempo_Am = 500;			//tempo amarelo
int tempo_Vd = 3000;		//tempo verde
int tempo_Vm2 =	3000;		//tempo vermelho 2
int tempo_Am2 = 500;		//tempo amarelo 2
int tempo_Vd2 = 3000;		//tempo verde 2

void setup()
{
  pinMode(LedVm, OUTPUT);
  pinMode(LedAm, OUTPUT);
  pinMode(LedVd, OUTPUT);
  pinMode(LedVm2, OUTPUT);
  pinMode(LedAm2, OUTPUT);
  pinMode(LedVd2, OUTPUT);
}

void loop()
{
 	//Acender Led Vermelho 1   Acender Led Verde 2
  digitalWrite(LedVm, ON);
  digitalWrite(LedAm, OFF);
  digitalWrite(LedVd, OFF);
  digitalWrite(LedVd2, ON);
  delay(tempo_Vm); 
  	
  	//Acender Led amarelo2  apagar Led verde 2
  digitalWrite(LedAm2, ON);		
  digitalWrite(LedVd2, OFF);
  delay(tempo_Am2);
  
  	//Acender Led Verde 1  Acender Led Vermelho 2
  digitalWrite(LedVm, OFF);
  digitalWrite(LedAm, OFF);
  digitalWrite(LedVd, ON);
  digitalWrite(LedVm2, ON);
  digitalWrite(LedAm2, OFF);
  delay(tempo_Vd);
  
  	//Acender Led Amarelo 1 e Apagar Led Verde 1
   
  digitalWrite(LedAm, ON);		
  digitalWrite(LedVd, OFF);
  delay(tempo_Am2);
  
  	//Apagar Led Vermelho 2 para voltar o loop
  digitalWrite(LedVm2, OFF);
  
}