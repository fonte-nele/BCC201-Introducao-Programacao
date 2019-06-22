#include <iostream>
using namespace std;
int main()
{
    int i,ndias=0;
    double menortemp=40,maiortemp=15,soma=0,media,vet[121];
    for(i=0;i<121;i++)
    {
        cout<<"Digite a temperatura:\n";
        cin>>vet[i];
        soma = soma + vet[i];
        if(vet[i]>maiortemp)
        {
            maiortemp = vet[i];
        }
        if(vet[i]<menortemp)
        {
            menortemp = vet[i];
        }
    }
    media = soma /121;
    for(i=0;i<121;i++)
    {
        if(vet[i]<media)
        {
            ndias++;
        }
    }
    cout<<"A menor temperatura ocorrida eh: "<<menortemp<<endl;
    cout<<"A maior temperatura ocorrida eh: "<<maiortemp<<endl;
    cout<<"A temperatura media eh: "<<media<<endl;
    cout<<"Numero de dias que a temperatura foi inferior a media: "<<ndias;
    return 0;
}
