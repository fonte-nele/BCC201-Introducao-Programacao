#include<iostream>
using namespace std;
int main()
{
    int i,soma=0,quad;
    cout<<"Numeros de 01 a 100:\n";
    for(i=1;i<=100;i++)
    {
        quad = i * i;
        soma = soma + quad;
        cout<<i<<endl;

    }
    cout<<"A soma dos quadrados dos numeros de 01 ate 100 da: "<<soma<<endl;
    return 0;
}
