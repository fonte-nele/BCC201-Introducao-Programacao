#include <iostream>
using namespace std;
int main()
{
    int mes, placa,digito;
    cout<<"Digite o codigo do mes atual: 1-JANEIRO, 2-FEVEREIRO, 3-MARCO, 4-ABRIL, 5-MAIO, 6-JUNHO, 7-JULHO, 8-AGOSTO, 9-SETEMBRO, 10-OUTUBRO\n";
    cin>>mes;

    if (mes>=1 && mes<=10){

    cout<<"Digite os quatro numeros da placa do veiculo.\n";
    cin>>placa;
    digito = (placa %10);

    if (digito ==mes ){
        cout<<"Neste mes vence o IPVA do veiculo.";
    }
    else{
        cout<<"O IPVA do veiculo nao vence este mes.";
    }
    }
    else{
        cout<<"Codigo do mes inexistente, favor tentar novamente.";
    }
    return 0;

}
