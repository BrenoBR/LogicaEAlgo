#include <bits/stdc++.h>
using namespace std;

 
void
imprimirVetor (int v[], int n)
{
  
cout << "{";
  
for (int i = 0; i < n - 1; i++)
    {
      
cout << v[i] << ",";
    
} 
cout << v[n - 1] << "}";

} 
 
int

main ()
{
  
int n = 10;
  
cin >> n;
  
int v[n];
  
for (int i = 0; i < n; i++)
    {
      
cin >> v[i];
    
} 
imprimirVetor (v, n);
  
 
return 0;

}
