#include <iostream>
using namespace std;
int main()
{
    int b,i;
    double a,mult=0;
    cout<<"Digite um numero real:\n";
    cin>>a;
    cout<<"Digite um numero inteiro:\n";
    cin>>b;

    for(i=1;i<=b;i++)
    {
        mult = mult + a;
    }
    cout<<"O produto de A por B eh: "<<mult;
    return 0;
}
