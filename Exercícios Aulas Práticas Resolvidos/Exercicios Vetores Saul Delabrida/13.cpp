#include <iostream>
using namespace std;
int main()
{
    int num,i,vet[10],cubo;
    for(i=0;i<10;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        cubo = num*num*num;
        vet[i] = cubo;
    }
    cout<<"O vetor com o cubo dos numeros digitados eh:\n";
    for(i=0;i<10;i++)
    {
        cout<<vet[i]<<endl;
    }
    return 0;
}
