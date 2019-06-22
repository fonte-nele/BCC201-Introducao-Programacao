#include <iostream>
using namespace std;
int main()
{
    int i;
    double altura,vet[10],soma=0;
    for(i=0;i<10;i++)
    {
        cout<<"Digite a altura do atleta:\n";
        cin>>altura;
        vet[i]=altura;
    }
    for(i=0;i<10;i++)
    {
        soma = soma + vet[i];
    }
    cout<<"As alturas maiores que a media sao:\n";
    for(i=0;i<10;i++)
    {
        if(vet[i]>soma/10)
        {
            cout<<vet[i]<<endl;
        }
    }
    return 0;
}
