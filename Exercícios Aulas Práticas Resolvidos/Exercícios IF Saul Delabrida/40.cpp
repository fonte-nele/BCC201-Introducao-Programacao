#include <iostream>
using namespace std;
int main()
{
    int destino, retorno;
    cout<<"Qual o codigo do destino da viagem? 1-REGIAO NORTE, 2-REGIAO NORDESTE, 3-REGIAO CENTRO-OESTE, 4-SUL\n";
    cin>>destino;

    if (destino>=1 && destino<=4){
        cout<<"A passagem inclui retorno(ida e volta)? Caso afirmativo, digite 1 e para negativo digite 2.\n";
        cin>>retorno;
            if(retorno==1 || retorno==2){
                if(retorno==1){
                    switch (destino)
                        {
                        case 1:
                            cout<<"A viagem ida e volta para REGIAO NORTE custa R$900,00.";break;
                        case 2:
                            cout<<"A viagem ida e volta para REGIAO NORDESTE custa R$650,00.";break;
                        case 3:
                            cout<<"A viagem ida e volta para REGIAO CENTRO-OESTE custa R$600,00.";break;
                        case 4:
                            cout<<"A viagem ida e volta para REGIAO SUL custa R$550,00.";break;
                        }
                }
                if(retorno==2){
                    switch (destino)
                        {
                        case 1:
                            cout<<"A viagem ida para REGIAO NORTE custa R$500,00.";break;
                        case 2:
                            cout<<"A viagem ida para REGIAO NORDESTE custa R$350,00.";break;
                        case 3:
                            cout<<"A viagem ida para REGIAO CENTRO-OESTE custa R$350,00.";break;
                        case 4:
                            cout<<"A viagem ida para REGIAO SUL custa R$300,00.";break;
                        }
                            }
            }
            else{
                cout<<"Codigo invalido para retorno, FAVOR TENTAR NOVAMENTE.";
            }
    }
    else{
        cout<<"Codigo de destino inexistente, FAVOR TENTAR NOVAMENTE.";
    }
    return 0;
}
