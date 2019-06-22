#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Digite dois numeros:\n";
    cin >> a>>b;

    if (a %b==0)
        cout << "O numero "<<a<<" eh divisivel por "<<b;

    else
        cout << "Os numeros nao sao divisiveis.";

    return 0;
}
