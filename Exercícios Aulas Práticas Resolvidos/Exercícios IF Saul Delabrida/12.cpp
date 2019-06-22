#include <iostream>
using namespace std;
int main()
{
    int salario, prest;
    cout <<"Qual o salario bruto do funcionario?\n";
    cin >> salario;
    cout <<"Qual o valor da prestacao desejada?\n";
    cin >> prest;

    if (prest <= 0.3 * salario)
        cout <<"O emprestimo podera ser realizado";

    else
        cout <<"O emprestimo nao podera ser realizado";

    return 0;
}
