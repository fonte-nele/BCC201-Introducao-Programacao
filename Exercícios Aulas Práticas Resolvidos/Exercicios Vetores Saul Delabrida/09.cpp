#include <iostream>
using namespace std;
int main()
{
    int vet[10],i,y=-1,quad;
    for(i=0;i<10;i++)
    {
        y = y+2;
        quad = y*y;
        vet[i] = quad;
    }
    cout<<"O vetor com o quadrado dos numeros impares de 01 a 20:\n";
    for(i=0;i<10;i++)
    {
        cout<<vet[i]<<endl;
    }
    return 0;
}
