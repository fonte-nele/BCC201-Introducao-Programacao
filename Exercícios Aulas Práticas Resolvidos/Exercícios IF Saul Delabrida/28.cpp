#include <iostream>
using namespace std;
int main()
{
    double compra,venda;
    cout<<"Digite o valor da compra:\n";
    cin>>compra;

    if(compra<10){
        venda = compra + (compra * 0.7);
        cout<<"O valor da venda eh: "<<venda;
    }
    if (compra>=10 && compra <30){
        venda = compra + (compra * 0.5);
        cout<<"O valor da venda eh: "<<venda;
    }
    if (compra>=30 && compra<50){
        venda = compra + (compra * 0.4);
        cout<<"O valor da venda eh: "<<venda;
    }
    if (compra>=50){
        venda = compra + (compra *0.3);
        cout<<"O valor da venda eh: "<<venda;
    }
    return 0;
}
