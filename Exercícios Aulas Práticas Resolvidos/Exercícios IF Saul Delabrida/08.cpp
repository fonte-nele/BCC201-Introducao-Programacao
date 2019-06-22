#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Entre com um numero:\n";
    cin >> num;

    if (num %5 ==0)
        cout << "O numero "<<num<<" eh divisivel por 5.";
    else
        cout << "O numero "<<num<<" nao eh divisivel por 5.";

    return 0;
}
