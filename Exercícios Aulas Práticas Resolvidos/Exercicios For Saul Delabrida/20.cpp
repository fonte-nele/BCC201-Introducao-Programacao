#include <iostream>
using namespace std;
int main()
{
    int i,soma=0;
    cout<<"Numeros de 01 a 100:\n";
    for (i=1;i<=100;i++)
    {
        soma = soma +i;
        cout<<i<<endl;
    }
    cout<<"A media desses numeros eh: "<<soma/100;
    return 0;
}
