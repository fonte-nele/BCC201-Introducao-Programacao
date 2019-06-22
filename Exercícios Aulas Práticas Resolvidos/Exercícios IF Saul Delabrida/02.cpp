#include <iostream>
using namespace std;
int main()
{
    int i,j,soma;
    cout << "Digite dois numeros inteiros: \n" <<endl;
    cin >> i >>j;
    soma = i+j;
    if (soma>20)
        cout << "A soma entre "<<i<< " e "<<j<< " resulta no valor "<<soma<< " sendo um valor maior que 20";
    else
        cout << "A soma deu um valor inferior a 20, favor tentar novamente";
    return 0;
}
