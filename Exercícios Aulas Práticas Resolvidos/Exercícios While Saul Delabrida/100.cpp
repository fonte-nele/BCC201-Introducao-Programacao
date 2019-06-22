#include <iostream>
using namespace std;
int main()
{
    int quantp,quantv,estoque,maior=0;
    string nome,nomem;
    cout<<"Digite um nome para o produto:\n";
    cin>>nome;

    while (nome != "@")
    {
        cout<<"Digite a quantidade produzida do produto:\n";
        cin>>quantp;
        cout<<"Digite a quantidade vendida do produto:\n";
        cin>>quantv;
        estoque = quantp - quantv;
        if(estoque<50)
        {
            cout<<"Este produto tem menos de 50 itens no estoque."<<endl;
        }
        if (maior < estoque)
        {
            nomem=nome;
            maior = estoque;
        }
        cout<<"Digite um nome para o produto:\n";
        cin>>nome;
    }
    cout<<"O produto "<<nomem<<" tem maior quantidade no estoque com "<<maior<<" produtos.";
    return 0;
}
