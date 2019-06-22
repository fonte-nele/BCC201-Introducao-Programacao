#include<iostream>
using namespace std;
int main()
{
    int vet[100],i,y=-1;
    for(i=0;i<100;i++)
    {
        vet[i] = y+2;
        y=y+2;
    }
    cout<<"Vetor 100 primeiros numeros impares:\n";
    for(i=0;i<100;i++)
    {
        cout<<vet[i]<<endl;
    }
    return 0;
}
