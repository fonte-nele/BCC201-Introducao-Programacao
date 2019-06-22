#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Entre com dois numeros:\n";
    cin >>a>>b;

    if (a>b)
        cout << "O numero maior digitado foi "<<a<<" e o menor numero digitado foi "<<b;

    else
        cout << "O numero maior digitado foi "<<b<<" e o menor numero digitado foi "<<a;

    return 0;
}
