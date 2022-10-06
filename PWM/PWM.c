// C++ code
//
/*
	Controle de Velocidade do motor por PWM
    Lucas Lopes
    05/10/2022
    v1.0
*/
#define Motor 	11
#define Velocidade 	A0

int LeituraA0;		//variaveis do programa
int SaidaPWM;


void setup()
{
  pinMode(Motor, OUTPUT);
}

void loop()
{
  LeituraA0=analogRead(Velocidade);		//leio o potenciometro
  //relação para saida
  SaidaPWM = LeituraA0/4;
  analogWrite(Motor,SaidaPWM);
    
}