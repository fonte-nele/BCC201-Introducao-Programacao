#include <iostream>
using namespace std;
int main()
{
    int numc,quant,tipo,totkwh3=0;
    double media1=0,media2=0,custo,totkwh1=0,totkwh2=0;
    cout<<"Qual o numero do consumidor?\n";
    cin>>numc;

    while (numc != 0)
    {
        cout<<"Qual a quantidade de KWh consumidos durante o mes?\n";
        cin>>quant;
        cout<<"Qual o tipo(codigo) do consumidor? 1-Residencial; 2-Comercial; 3-Industrial.\n";
        cin>>tipo;
        switch (tipo)
        {
            case 1:
                media1++;
                totkwh1 = totkwh1 + quant;
                custo = 0.3 * quant;
                cout<<"O consumidor eh RESIDENCIAL com custo total de: "<<custo<<" reais.\n";break;
            case 2:
                media2++;
                totkwh2 = totkwh2 + quant;
                custo = 0.5 * quant;
                cout<<"O consumidor eh COMERCIAL com custo total de: "<<custo<<" reais.\n";break;
            case 3:
                totkwh3 = totkwh3 + quant;
                custo = 0.7 * quant;
                cout<<"O consumidor eh INDUSTRIAL com custo total de: "<<custo<<" reais.\n";break;
            default:
                cout<<"Codigo consumidor invalido. FAVOR TENTAR NOVAMENTE.\n";break;
        }
        cout<<"Qual o numero do consumidor?\n";
        cin>>numc;
    }
    cout<<"O total de consumo para os tres tipos de consumidor eh de: "<<totkwh1 + totkwh2 + totkwh3<<" KWh."<<endl;
    cout<<"A media de consumo dos tipos 1 eh: "<<totkwh1/media1 <<" KWh."<<endl;
    cout<<"A media de consumo dos tipos 2 eh: "<<totkwh2/media2 <<" KWh."<<endl;
    return 0;
}
