#include <iostream>
using namespace std;
int main()
{
    int b,i;
    double a,pot=1;
    cout<<"Digite um numero real A:\n";
    cin>>a;
    cout<<"Digite um numero inteiro B:\n";
    cin>>b;

    for(i=1;i<=b;i++)
    {
        pot = pot * a;
    }
    cout<<"A potencia de A por B eh: "<<pot;
    return 0;
}
