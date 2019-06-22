#include<iostream>
using namespace std;
int main()
{
    int i,cpf,ndep;
    double renda,salmin,imp,nsalmin;
    cout<<"Qual eh o salario minimo?\n";
    cin>>salmin;

    for(i=1;i<=10;i++)
    {
        cout<<"Qual o CPF?\n";
        cin>>cpf;
        cout<<"Qual eh o numero de dependentes?\n";
        cin>>ndep;
        cout<<"Qual eh a renda mensal?\n";
        cin>>renda;
        nsalmin = renda / salmin;
        if(nsalmin<2)
        {
            imp=0;
        }
        else
            if(nsalmin<3)
        {
            imp= (renda * 5)/100;
        }
        else
            if(nsalmin<5)
        {
            imp= (renda*10)/100;
        }
        else
            if(nsalmin<7)
        {
            imp= (renda*15)/100;
        }
        else
        {
            imp= (renda*20)/100;
        }
        imp = imp + ndep * (salmin*5/100);
        if (imp>0)
        {
            cout<<"Imposto a ser pago: "<<imp<<endl;
        }
        else
        {
            cout<<"Imposto a ser restituido: "<<imp<<endl;
        }
    }
    return 0;
}
