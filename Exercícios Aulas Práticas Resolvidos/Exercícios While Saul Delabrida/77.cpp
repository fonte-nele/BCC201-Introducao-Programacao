#include <iostream>
using namespace std;
int main()
{
    int num,maior,menor,i=0;
    double soma=0;
    cout<<"Digite um numero (0 para finalizar):\n";
    cin>>num;
    maior = 0;
    menor = 99999999;

    while(num!=0)
    {
        if (num>maior)
        {
            maior = num;
        }
        if (num<menor)
        {
            menor = num;
        }
        i = i+1;
        soma = soma +num;
        cout<<"Digite um numero (0 para finalizar):\n";
        cin>>num;
    }
    cout<<"A media aritmetica dos numeros digitados eh: "<<soma/i<<endl;
    cout<<"O numero maior digitado foi: "<<maior<<endl;
    cout<<"O numero menor digitado foi: "<<menor;
    return 0;
}
