#include <iostream>
using namespace std;
int main()
{
    int numpedido,data;
    double total,preco,quant;
    cout<<"Qual eh o numero do pedido?\n";
    cin>>numpedido;

    while (numpedido !=0)
    {
        cout<<"Para qual data eh o pedido? (Dia, mes, ano)\n";
        cin>>data;
        cout<<"Qual eh o preco unitario?\n";
        cin>>preco;
        cout<<"Qual a quantidade?\n";
        cin>>quant;
        total = preco * quant;
        cout<<"O pedido "<<numpedido<<" esta agendado para data "<<data<<" totalizando "<<total<<endl;

        cout<<"Qual eh o numero do pedido?\n";
        cin>>numpedido;
    }

    cout<<"Numero de pedido invalido.";
    return 0;
}
