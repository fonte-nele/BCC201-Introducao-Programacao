#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double num;
    cout << "Digite um numero:\n ";
    cin >> num;
    if (num >=0)
    {
        cout << "A raiz quadrada desse numero e: ";
        cout << sqrt(num);
    }
    else
    {
        cout << "O quadrado do numero e: ";
        cout << pow(num,2);
    }
    return 0;
}
