#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    double num;
    for (i=1;i<=8;i++)
    {
        cout<<"Digite um numero para calculo do logaritmo na base 10:\n";
        cin>>num;
        cout<<"O logaritmo eh: "<<log10(num)<<endl;
    }
    return 0;
}
