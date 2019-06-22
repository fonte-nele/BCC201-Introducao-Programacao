#include <iostream>
using namespace std;
int main()
{
    int num,i,soma,atual,ant1,ant2;
    cout<<"Digite o numero de termos da serie:\n";
    cin>>num;
    cout<<"Qual sao os dois primeiros numeros da serie:\n";
    cin>>ant1>>ant2;

    cout<<"A serie de Ricci eh:\n";
    cout<<ant1<<endl;
    cout<<ant2<<endl;
    soma = ant1 + ant2;

    for(i=3;i<=num;i++)
    {
        atual = ant1 + ant2;
        cout<<atual<<endl;
        soma = soma+atual;
        ant2 = ant1;
        ant1 = atual;
    }
    cout<<"A soma dos termos da serie resulta em: "<<soma;
    return 0;
}
