#include <iostream>
using namespace std;
int main()
{
    int conta,saldo,totc=0,totn=0,saldoag=0;
    string nome;
    cout<<"Digite o numero da conta:\n";
    cin>>conta;

    while (conta != -999 && totc<=10000)
    {
        totc++;
        cout<<"Digite o nome do cliente:\n";
        cin>>nome;
        cout<<"Digite o saldo:\n";
        cin>>saldo;

        if (saldo == 0)
        {
            cout<<"O cliente "<<nome<<" tem numero da conta: "<<conta<<" com saldo NULO."<<endl;
        }
        if(saldo>0)
        {
            saldoag= saldoag + saldo;
            cout<<"O cliente "<<nome<<" tem numero da conta: "<<conta<<" com saldo "<<saldo<<" ,POSITIVO."<<endl;
        }
        if (saldo<0)
        {
            saldoag= saldoag + saldo;
            totn++;
            cout<<"O cliente "<<nome<<" tem numero da conta: "<<conta<<" com saldo "<<saldo<<" ,NEGATIVO."<<endl;
        }

        cout<<"Digite o numero da conta:\n";
        cin>>conta;
    }
    cout<<"O total de clientes da agencia eh: "<<totc<<endl;
    cout<<"O total de clientes com saldo negativo eh: "<<totn<<endl;
    cout<<"O saldo da agencia eh de: "<<saldoag;
    return 0;
}
