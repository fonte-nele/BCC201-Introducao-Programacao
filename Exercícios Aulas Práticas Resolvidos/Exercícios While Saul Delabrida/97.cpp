#include <iostream>
using namespace std;
int main()
{
    int conta;
    double saldo,por=0,tot=0;
    cout<<"Digite o numero da conta:\n";
    cin>>conta;

    while (conta>=0)
    {
        cout<<"Digite o saldo:\n";
        cin>>saldo;
        tot++;
        if (saldo>0)
        {
            cout<<"O numero da conta eh: "<<conta<<" com saldo "<<saldo<<" ,POSITIVO."<<endl;
        }
        if (saldo<0)
        {
            por++;
            cout<<"O numero da conta eh: "<<conta<<" com saldo "<<saldo<<" ,NEGATIVO."<<endl;
        }
        cout<<"Digite o numero da conta:\n";
        cin>>conta;
    }
    cout<<"O percentual de pessoas com saldo negativo eh: "<<(por/ tot) * 100<<" %.";

    return 0;
}
