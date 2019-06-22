#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Digite um numero:\n";
    cin>>num;
    i = 0;

    while (num>0)
    {
        i = i +1;
        cout<<"Digite um numero:\n";
        cin>>num;
    }
        cout<<"A quantidade de numeros positivos digitados foi: "<<i;
    return 0;
}
