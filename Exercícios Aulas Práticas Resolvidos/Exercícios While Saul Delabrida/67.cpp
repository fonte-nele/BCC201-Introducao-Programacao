#include <iostream>
using namespace std;
int main()
{
    int num,soma;
    cout<<"Digite um numero:\n";
    cin>>num;
    soma = 0;

    while (num !=-1)
    {
        if (num>0)
        {
            soma = soma + num;
        }
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"A soma total eh: "<<soma;
    return 0;
}
