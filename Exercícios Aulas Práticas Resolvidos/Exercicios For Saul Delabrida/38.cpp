#include <iostream>
using namespace std;
int main()
{
    int num,i,cont=0;
    cout<<"Digite um numero:\n";
    cin>>num;
    for (i=2;i<num;i++)
    {
        if (num%i==0)
        {
            cont++;
        }
    }
    if(cont==0)
    {
        cout<<"Numero eh primo.";
    }
    else
    {
        cout<<"Numero nao eh primo.";
    }
    return 0;
}
