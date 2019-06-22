#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,j,fat;
    double x,xe,seno=0,vet[15];
    cout<<"Digite o valor de X:\n";
    cin>>x;
    x= x * M_PI/180;
    xe =x;
    for(i=0;i<15;i++)
    {
        fat= 1;
        for(j=2; j<=2*i-1;j++)
        {
            fat=fat*j;
        }
        if ( i%2==0)
        {
            seno = seno-xe/fat;
            vet[i]=-xe/fat;
        }
        else
        {
            seno = seno+xe/fat;
            vet[i]=+xe/fat;
        }
        xe = xe*x*x;
    }
    cout<<"Seno de X eh: "<<seno;
    return 0;
}
