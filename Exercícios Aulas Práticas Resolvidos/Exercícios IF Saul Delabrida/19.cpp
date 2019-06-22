#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Digite um numero:\n";
    cin>>num;

    if (num==5 || num==200 || num==400 || num>500 || num<1000)
    {
        if (num==5)
            cout<<"O numero "<<num<<" eh igual a 5."<<endl;

        if (num==200)
            cout<<"O numero "<<num<<" eh igual a 200."<<endl;

        if (num==400)
            cout<<"O numero "<<num<<" eh igual a 400."<<endl;

        if (num>500 && num <1000)
            cout<<"O numero "<<num<<" esta compreendido entre 500 e 1000."<<endl;

        else
            cout<<"O numero "<<num<<" esta fora dos parametros anteriores."<<endl;
    }
    return 0;
}
