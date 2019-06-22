#include <iostream>
using namespace std;
int main()
{
    int i;
    double x,vara[30],varb[30];
    cout<<"Digite os valores da variavel A:\n";
    for(i=0;i<30;i++)
    {
        cin>>vara[i];
    }
    cout<<"Digite os valores da variavel B:\n";
    for(i=0;i<30;i++)
    {
        cin>>varb[i];
    }
    cout<<"Digite o valor de X:\n";
    cin>>x;
    for(i=0;i<30;i++)
    {
        if (vara[i] == x)
        {
            cout<<"O elemento de B eh: "<<varb[i]<<endl;
            i = 30;
        }
        else
            if(i==30)
        {
            cout<<"Nao ha elemento de A igual a X."<<endl;
        }
    }
    return 0;
}
