#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Digite um numero: \n";
    cin >> a;

    if (a%3==0 )
       cout << "O numero "<< a<< " e multiplo de 3.";
    else
        cout << "O numero "<<a<< " nao e multiplo de 3.";

    return 0;
}
