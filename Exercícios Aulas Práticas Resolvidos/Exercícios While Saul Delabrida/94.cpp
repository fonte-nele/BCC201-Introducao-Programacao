#include <iostream>
using namespace std;
int main()
{
    int cpf;
    double renda,dep,imp;
    cout<<"Informe o CPF:\n";
    cin>>cpf;

    while (cpf != 0)
    {
        cout<<"Qual a renda anual?\n";
        cin>>renda;
        cout<<"Ha quantos dependentes?\n";
        cin>>dep;

        if (renda <12000)
        {
            cout<<"O imposto de renda eh ISENTO.\n";
        }
        if (renda>=12000 && renda<=25000)
        {
            imp = (renda * 0.12) - (dep*300);
            cout<<"O imposto de renda tem aliquota 12%, totalizando: "<<imp<<endl;
        }
        if (renda>25000)
        {
            imp = (renda * 0.275) - (dep*300);
            cout<<"O imposto de renda tem aliquota 27,5%, totalizando: "<<imp<<endl;
        }

        cout<<"Informe o CPF:\n";
        cin>>cpf;
    }

    cout<<"CPF invalido.";
    return 0;
}
