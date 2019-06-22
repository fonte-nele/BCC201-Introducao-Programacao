#include <iostream>
using namespace std;
int main()
{
    int a,b,mod;
    cout<<"Digite um numero inteiro A:\n";
    cin>>a;
    cout<<"Digite um numero inteiro B:\n";
    cin>>b;
    mod = a;

    while(mod>=b)
    {
        mod = mod - b;
    }
    cout<<"O resto da divisao A por B eh: "<<mod;
    return 0;
}
