#include <bits/stdc++.h>
using namespace std;

 
class Elevador
{

private:
int andar;
  
int maxAndar;
  
int pessoas;
  
int maxPessoas;

public:
 
Elevador (int capPessoas, int qntAndar)
  {
    
maxAndar = qntAndar;
    
maxPessoas = capPessoas;
    
andar = 0;
    
pessoas = 0;
  
} 
 
 
void entra ()
  {
    
if (maxPessoas > pessoas)
      pessoas += 1;
  
}
  
void sai ()
  {
    
if (pessoas > 0)
      pessoas -= 1;
  
}
  
void sobe ()
  {
    
if (maxAndar > andar)
      andar += 1;
  
}
  
void desce ()
  {
    
if (andar > 0)
      andar -= 1;
  
}
  
void imprime ()
  {
    
cout << "Situacao atual: \nAndar do Elevador: " << andar <<
      " Quantidade de Pessoas: " << pessoas << "\n";

} 
};


 
int
main ()
{
  
int capPessoas, numAndares;
  
cout << "Inicializando elevador... \n";
  
cout << "Capacidade: \n";
  
cin >> capPessoas;
  
cout << "Andar maximo: \n";
  
cin >> numAndares;
  
 
Elevador elev (capPessoas, numAndares);
  
 
cout <<
    "Por favor, entre com uma das opcoes:\nI: Entrar\nO: Sair\nU: Subir\nD: Descer\nP: Imprimir\nS: Parar o programa.";
  
 
while (1)
    {
      
cout << "Comando: ";
      
char opcao;
      
cin >> opcao;
      
bool flag = 0;
      
switch (opcao)
	{
	
case 'I':
	  
elev.entra ();
	  
break;
	
case 'O':
	  
elev.sai ();
	  
break;
	
case 'U':
	  
elev.sobe ();
	  
break;
	
case 'D':
	  
elev.desce ();
	  
break;
	
case 'P':
	  
elev.imprime ();
	  
break;
	
case 'S':
	  
 
flag = 1;
	  
break;
	
default:
	  
cout << "Comando invalido!\n";
	
}
      
if (flag)
	break;
    
}

}
