#include<iostream>
using namespace std;
int main()
{
    int i, quant;
    double faturamento=0, preco[100];
    for(i=0;i<100;i++)
    {
        cout<<"Digite o preco da venda da mercadoria:\n";
        cin>>preco[i];
    }
    for(i=0;i<100;i++)
    {
        cout<<"Digite a quantidade vendida da mercadoria:\n";
        cin>>quant;
        faturamento = faturamento + quant * preco[i];
    }
    cout<<"O faturamento eh: "<<faturamento;
    return 0;
}
