#include <iostream>
using namespace std;
int main()
{
    int a,b,c,cont=0;
    cout<<"Digite um numero A:\n";
    cin>>a;
    cout<<"Digite um numero B:\n";
    cin>>b;

    for(c=2;c<b;c++)
    {
        if (a%b==0 || b%a==0)
        {
            cont++;
        }
    }
    if (cont==0)
    {
        cout<<"Os numeros "<<a<<" e "<<b<<" sao primos entre si.";
    }
    else
    {
        cout<<"Os numeros "<<a<<" e "<<b<<" nao sao primos entre si.";
    }
    return 0;
}
