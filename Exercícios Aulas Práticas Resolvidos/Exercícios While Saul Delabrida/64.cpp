#include <iostream>
using namespace std;
int main()
{
   int num,i,j;
   cout<<"Digite um numero:\n";
   cin>>num;
   i = 0;
   j = 0;

   while (num!=0)
   {
       i = i+1;
       if (num>100 && num <200)
       {
           j = j+1;
       }
       cout<<"Digite um numero:\n";
       cin>>num;
   }
    cout<<"A quantidade de numeros digitados foi "<<i<<" sendo "<<j<<" numero(s) entre 100 e 200.";
    return 0;
}
