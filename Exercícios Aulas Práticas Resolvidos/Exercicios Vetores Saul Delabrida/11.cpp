#include <iostream>
using namespace std;
int main()
{
    int i;
    double num,metade,vet[10];
    for(i=0;i<10;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        metade = num /2;
        vet[i]=metade;
    }
    cout<<"O vetor com a metade dos numeros digitados eh:\n";
    for(i=0;i<10;i++)
    {
        cout<<vet[i]<<endl;
    }
    return 0;
}
