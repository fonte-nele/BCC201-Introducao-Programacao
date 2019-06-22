#include <iostream>
using namespace std;
int main()
{
    int num,fatc,fat=1;
    cout<<"Digite um numero:\n";
    cin>>num;
    fatc = fat;

    while (num > 1)
    {
        while (num>0)
        {
        fat = fat *num;
        num--;
        }
        cout<<"O fatorial desse numero eh: "<<fat<<endl;
        fat= 1;
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"Numero para calculo do fatorial invalido.";
    return 0;
}
