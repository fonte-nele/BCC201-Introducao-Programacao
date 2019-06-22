#include<iostream>
using namespace std;
int main()
{
    int num,i,vet[10],quad;
    for(i=0;i<10;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        quad = num * num;
        vet[i] = quad;
    }
    cout<<"O vetor com o quadrado dos numeros digitados eh:\n";
    for(i=0;i<10;i++)
    {
        cout<<vet[i]<<endl;
    }
    return 0;
}
