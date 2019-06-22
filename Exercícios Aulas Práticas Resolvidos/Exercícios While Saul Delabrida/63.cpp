#include <iostream>
using namespace std;
int main()
{
    int i;
    double num, soma,media;
    cout<<"Digite um numero:\n";
    cin>>num;
    i = 0;
    soma = 0;

    while (num>0)
    {
        i = i +1;
        soma = soma + num;
        cout<<"Digite um numero:\n";
        cin>>num;

    }
    media = soma / i;
    cout<<"A media dos valores digitados eh: "<<media;
    return 0;
}
