#include <iostream>
using namespace std;
int main()
{
    int c,i,n,nvezes;
    double aux,anterior,vet[1000];
    cout<<"Digite o valor N:\n";
    cin>>n;
    cout<<"Digite os numeros da variavel composta:\n";
    for(c=1;c<=n;c++)
    {
        cin>>vet[c];
    }
    for(c=1;c<=n-1;c++)
    {
        for(i=1;i<=n-c;i++)
        {
            if(vet[i]>vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }
    cout<<"O valor ordenado eh:\n";
    for(c=1;c<=n;c++)
    {
        cout<<vet[c]<<endl;
    }
    anterior = vet[1];
    nvezes = 1;
    for(c=2;c<=n;c++)
    {
        if (vet[c] == anterior)
        {
            nvezes = nvezes +1;
        }
        else
        {
            cout<<"O numero "<<anterior<<" se repete "<<nvezes<<" vezes."<<endl;
            anterior = vet[c];
            nvezes = 1;
        }
    }
    cout<<"O numero "<<anterior<<" se repete "<<nvezes<<" vezes."<<endl;
    return 0;
}
