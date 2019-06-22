#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Digite um numero:\n";
    cin >> num;

    if (num %3==0 && num %7==0)
        cout<< "O numero "<<num<<" eh divisivel por 3 e 7.";
    else
        cout<<"O numero "<<num<<" nao eh divisivel por 3 e 7.";

    return 0;
}
