/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

GIOVANNI-MOSCARDINI-30/03/2023
*/

# include <iostream>
using namespace std;
int main()
{
  int i=0 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (i<n)
  {
   cout<<"Bada come la fuma"<<endl; 
   n=n-1;
  }
  system("pause");
}
