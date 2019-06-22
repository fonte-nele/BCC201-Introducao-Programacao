#include <iostream>
using namespace std;
int main()
{
    int prato, sobremesa, bebida, cal1,cal2,cal3;
    cout<<"Qual o codigo do prato desejado? 1-VEGETARIANO, 2-PEIXE, 3-FRANGO, 4-CARNE.\n";
    cin>>prato;

    if (prato>=1 && prato<=4){
        switch(prato)
        {
            case 1:
                cal1 = 180;break;
            case 2:
                cal1 = 230;break;
            case 3:
                cal1 = 250;break;
            case 4:
                cal1 = 350;break;
        }
        cout<<"Qual o codigo da sobremesa desejada? 1-ABACAXI, 2-SORVETE DIET, 3-MOUSE DIET, 4-MOUSE CHOCOLATE.\n";
        cin>>sobremesa;
            if (sobremesa>=1 && sobremesa<=4){
                switch(sobremesa)
                {
                    case 1:
                        cal2= 75;break;
                    case 2:
                        cal2= 110;break;
                    case 3:
                        cal2=170;break;
                    case 4:
                        cal2=200;break;
                }
                cout<<"Qual o codigo da bebida desejada? 1-CHA, 2-SUCO DE LARANJA, 3-SUCO DE MELAO, 4-REFRIGERANTE DIET.\n";
                cin>>bebida;
                    if(bebida>=1 && bebida<=4){
                        switch(bebida)
                        {
                            case 1:
                                cal3=20;break;
                            case 2:
                                cal3=70;break;
                            case 3:
                                cal3=100;break;
                            case 4:
                                cal3=65;break;
                        }
                        cout<<"De acordo com as opcoes escolhidas, as calorias seriam para o prato: "<<cal1<<" , sobremesa: "<<cal2<<" e bebida: "<<cal3<<" totalizando assim: "<<cal1+cal2+cal3<<" calorias.";

                    }
                    else{
                        cout<<"Codigo bebida inexistente.FAVOR TENTAR NOVAMENTE.";
                    }
            }
            else{
                cout<<"Codigo sobremesa inexiste.FAVOR TENTAR NOVAMENTE.";
            }
    }
    else{
        cout<<"Codigo prato inexistente.FAVOR TENTAR NOVAMENTE.";
    }
    return 0;
}
