#include <bits/stdc++.h>
using namespace std;

 
void
imprime (int matriz[2][2], int qtdLinhas, int qtdColunas)
{
  
 
cout << "{";
  
for (int i = 0; i < qtdLinhas; i++)
    {
      
cout << "{";
      
for (int j = 0; j < qtdColunas - 1; j++)
	{
	  
int elemento = matriz[i][j];
	  
cout << elemento;
	  
cout << ",";
	
} 
cout << matriz[i][qtdColunas - 1];
      
cout << "}";
    
} 
cout << "}";

} 
 
int

main ()
{
  
 
int qtdLinhas = 2;
  
int qtdColunas = 2;
  
int m[2][2];
  
 
for (int i = 0; i < qtdLinhas; i++)
    {
      
for (int j = 0; j < qtdColunas; j++)
	{
	  
cin >> m[i][j];
    
} 
} 
 
imprime (m, qtdLinhas, qtdColunas);
  
 
return 0;

}
