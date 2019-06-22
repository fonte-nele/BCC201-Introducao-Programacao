#include <iostream>
using namespace std;
int main()
{
    int num,i=0;
    double soma;
    cout<<"Digite um numero:\n";
    cin>>num;
    soma =0;

    while (num !=-1)
    {
        if (num>0)
        {
            soma = soma+ num;
            i++;
        }
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"A media dos valores digitados eh: "<<soma/i;
    return 0;
}
