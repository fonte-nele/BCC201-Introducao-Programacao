#include <iostream>
using namespace std;
int main()
{
    int i,cubo,soma=0;
    cout<<"Numeros de 01 a 100:\n";
    for(i=1;i<=100;i++)
    {
        cubo = i*i*i;
        soma = soma + cubo;
        cout<<i<<endl;
    }
    cout<<"A soma do cubo desses numeros resulta em: "<<soma;
    return 0;
}
