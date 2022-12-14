// C++ code
//
/*
	liga led por chave memorizável
    Lucas Lopes
    19/09/22
    v1.0
*/
#define ledVm	13
#define chave	8  
#define ON		HIGH
#define OFF		LOW

int Memo_chave; //memoria da chave

void setup() //INICIALIZAÇÃO
{
  pinMode(ledVm, OUTPUT);	//led saida
  pinMode(chave, INPUT);	//chave entrada
  Memo_chave=false;   		//inicializei a memoria
}

void loop()
{		
  if(digitalRead(chave))
  {
    delay(10);
     while(digitalRead(chave)){
     };  
    if(Memo_chave==false){	
        Memo_chave=true;
        }
  else{
    Memo_chave=false;
    }
  }
  if(Memo_chave){
    digitalWrite (ledVm, ON);
    }
  else {
    digitalWrite (ledVm, OFF);
    }
}