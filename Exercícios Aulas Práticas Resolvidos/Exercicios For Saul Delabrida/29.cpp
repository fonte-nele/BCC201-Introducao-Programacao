#include <iostream>
using namespace std;
int main()
{
    int i,num,maior=0;
    for(i=1;i<=15;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if(num>30)
        {
            maior++;
        }
    }
    cout<<"A quantidade de numeros maiores de 30 foi: "<<maior;
    return 0;
}
