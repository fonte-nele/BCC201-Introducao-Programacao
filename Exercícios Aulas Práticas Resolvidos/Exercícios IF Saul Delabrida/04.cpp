#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Digite um numero:"<<endl;
    cin >> num;
    if (num >0)
        cout << "O numero "<<num<<" e POSITIVO";
    else
    {
        if (num <0)
            cout << "O numero "<<num<< " e NEGATIVO";
        else
            cout << "O numero "<<num<<" e NULO";
    }
    return 0;
}
