#include <iostream>
using namespace std;
int main()
{
    double saldo,credito;
    cout<<"Qual eh o saldo medio do cliente?\n";
    cin>>saldo;

    if (saldo>0 && saldo <= 500){
        cout<<"Nenhum credito";
    }
    if (saldo>500 && saldo <=1000){
        credito = saldo * 0.3;
        cout<<"30% de credito, resultando em: "<<credito;
    }
    if (saldo>1000 && saldo <=3000){
        credito = saldo * 0.4;
        cout<<"40% de credito, resultando em: "<<credito;
    }
    if (saldo>3000){
        credito = saldo * 0.5;
        cout<<"50% de credito, resultando em: "<<credito;
    }

    return 0;
}
