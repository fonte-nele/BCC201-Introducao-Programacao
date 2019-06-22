#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    double num, raiz,vet[15];
    for(i=0;i<15;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if (num<0)
        {
            vet[i] = -1;
        }
        else
        {
            raiz = sqrt(num);
            vet[i] = raiz;
        }
    }
    cout<<"O vetor com a raiz quadrada dos numeros digitados eh:\n";
    for(i=0;i<15;i++)
    {
        cout<<vet[i]<<endl;
    }
    return 0;
}
