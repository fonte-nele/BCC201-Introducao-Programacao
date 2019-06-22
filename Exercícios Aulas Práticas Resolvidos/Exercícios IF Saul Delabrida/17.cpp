#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Digite um numero:\n";
    cin>>num;

    if (num%10==0 || num%5==0 || num%2==0)
    {
    if (num%10==0)
        cout<<"O numero "<<num<<" eh divisivel por 10."<<endl;

    if (num%5==0)

        cout<<"O numero "<<num<<" eh divisivel por 5."<<endl;

    if (num%2==0)

        cout<<"O numero "<<num<<" eh divisivel por 2."<<endl;
    }
    else
    {
        cout<<"O numero "<<num<<" nao eh divisivel por 2, 5 e 10."<<endl;
    }
    return 0;
}
