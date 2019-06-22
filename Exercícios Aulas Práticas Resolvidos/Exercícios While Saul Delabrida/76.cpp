#include <iostream>
using namespace std;
int main()
{
    int num,prod=1,soma=0;
    cout<<"Digite um numero:\n";
    cin>>num;

    while (num>0)
    {
        if (num%2!=0)
        {
            prod = prod * num;
        }
        if (num%2==0)
        {
            soma = soma + num;
        }

        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"A soma dos numeros pares digitados eh: "<<soma<<endl;
    cout<<"O produto dos numeros impares digitados eh: "<<prod;
    return 0;
}
