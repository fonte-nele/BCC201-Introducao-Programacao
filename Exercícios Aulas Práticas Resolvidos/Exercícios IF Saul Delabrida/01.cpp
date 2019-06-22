#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num > 20)
        cout << "O numero "<<num<<" e maior que 20!!";
    else
        cout <<"Este numero " << num << " e menor que 20!!";

    return 0;
}
