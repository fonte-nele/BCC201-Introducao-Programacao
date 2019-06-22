#include <iostream>
using namespace std;
int main()
{
    int i;
    double soma=0,vet[100];
    for(i=0;i<100;i++)
    {
        cout<<"Digite o valor numerico:\n";
        cin>>vet[i];
    }
    for(i=0;i<50;i++)
    {
        soma = soma + (vet[i]-vet[101-i])*(vet[i] - vet[101-i])*(vet[i]-vet[101-i]);
    }
    cout<<"O valor do somatorio eh: "<<soma;
    return 0;
}
