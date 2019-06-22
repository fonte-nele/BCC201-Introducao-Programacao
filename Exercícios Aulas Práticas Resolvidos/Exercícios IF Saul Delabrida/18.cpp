#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Entre com um numero:\n";
    cin>>num;

    if (num>20 && num<90)
    {
        cout<<"O numero "<<num<<" esta compreendido entre 20 e 90.";
    }
    else
    {
        cout<<"O numero "<<num<<" nao esta compreendido entre 20 e 90.";
    }
    return 0;
}
