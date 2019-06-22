#include <iostream>
using namespace std;
int main()
{
    int i,j,n,nvezes=1;
    double anterior,vet[1000],vets[1000];
    cout<<"Digite o valor de N:\n";
    cin>>n;
    cout<<"Digite os numeros em ordem crescente:\n";
    for(i=1;i<=n;i++)
    {
        cin>>vet[i];
    }
    anterior=vet[1];
    vets[1]=vet[1];
    j=1;
    for(i=2;i<=n;i++)
    {
        if(vet[i] == anterior)
        {
            nvezes++;
        }
        else
        {
            cout<<"O numero "<<anterior<<" se repete "<<nvezes<<" vezes."<<endl;
            j=j+1;
            vets[j] = vet[i];
            anterior = vet[i];
            nvezes = 1;
        }
    }
    cout<<"O numero "<<anterior<<" se repete "<<nvezes<<" vezes."<<endl;
    cout<<"O vetor sem numeros repetidos eh:\n";
    for(i=1;i<=j;i++)
    {
        cout<<vets[i]<<endl;
    }
    return 0;
}
