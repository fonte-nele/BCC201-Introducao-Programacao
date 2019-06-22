#include<iostream>
using namespace std;
int main()
{
    int i;
    double soma=0,metade;
    cout<<"Numeros de 01 a 100:\n";
    for(i=1;i<=100;i++)
    {
        metade = i/2;
        soma = soma + metade;
        cout<<i<<endl;
    }
    cout<<"A soma da metade desses numeros resulta em: "<<soma;
    return 0;
}
