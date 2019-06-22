#include <iostream>
using namespace std;
int main()
{
    int num, i=0,j=0;
    double par,impar;
    cout<<"Digite um numero:\n";
    cin>>num;
    par =0;
    impar =0;

    while(num>0)
    {
        if (num%2==0)
        {
            par=par+num;
            i++;
        }
        else
        {
            impar=impar+num;
            j++;
        }
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"A media dos valores pares digitados eh: "<<par/i<<" .E a media dos valores impares digitados eh: "<<impar/j;
    return 0;
}
