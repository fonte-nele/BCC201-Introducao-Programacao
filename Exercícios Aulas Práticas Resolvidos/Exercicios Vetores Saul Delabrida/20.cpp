#include <iostream>
using namespace std;
int main()
{
    int i,num,somapar=0,somaimpar=0,maiorp=0,menori=999999,
        vet[50],cpar=0,cimpar=0;
    double mediapar,mediaimpar;
    for(i=0;i<50;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        vet[i]=num;
        if(vet[i]%2==0)
        {
            cpar++;
            somapar=somapar+vet[i];
            if (vet[i]>maiorp)
            {
                maiorp = vet[i];
            }
        }
        else
        {
            cimpar++;
            somaimpar = somaimpar+vet[i];
            if(vet[i]<menori)
            {
                menori = vet[i];
            }
        }
    }
    if (cpar !=0)
    {
        cout<<"Maior par digitado foi: "<<maiorp<<endl;
        mediapar = somapar / cpar;
        cout<<"A media dos valores pares digitados foi: "<<mediapar<<endl;
        cout<<"Valores pares maiores que a media PAR:\n";
    }
    for (i=0;i<50;i++)
    {
        if (vet[i]%2==0 && vet[i]>mediapar)
        {
            cout<<vet[i]<<endl;
        }
    }
    if (cimpar!=0)
    {
        cout<<"Menor impar digitado foi: "<<menori<<endl;
        mediaimpar = somaimpar / cimpar;
        cout<<"A media dos valores impares digitado foi: "<<mediaimpar<<endl;
        cout<<"Valores impares menores que a media IMPAR:\n";
    }
    for(i=0;i<50;i++)
    {
        if (vet[i]%2==1 && vet[i]<mediaimpar)
        {
            cout<<vet[i]<<endl;
        }
    }
    return 0;
}
