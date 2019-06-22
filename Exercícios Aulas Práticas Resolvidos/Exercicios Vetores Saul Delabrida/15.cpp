#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    double num,vet[8],loga;
    for(i=0;i<8;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if(num<0)
        {
            vet[i] = -1;
        }
        else
        {
            loga = log10(num);
            vet[i] = loga;
        }
    }
    cout<<"O vetor com logaritmo na base 10 dos numeros digitados eh:\n";
    for(i=0;i<8;i++)
    {
        cout<<vet[i]<<endl;
    }
    return 0;
}
