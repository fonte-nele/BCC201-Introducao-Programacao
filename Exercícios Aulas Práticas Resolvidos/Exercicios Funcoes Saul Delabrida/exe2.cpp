#include<iostream>
using namespace std;
double lucro(double a,double b);

int main()
{
    int i;
    double vetc[8],vetv[8];
    for(i=0;i<8;i++)
    {
        cout<<"Qual o preco de custo do produto?\n";
        cin>>vetc[i];
        cout<<"Qual o preco de venda do produto?\n";
        cin>>vetv[i];
        if(lucro(vetc[i],vetv[i])<10)
        {
            cout<<"O produto tem lucro menor que 10%."<<endl;
        }
        else
            if(lucro(vetc[i],vetv[i])>=10 && lucro(vetc[i],vetv[i])<=20)
        {
            cout<<"O produto tem lucro entre 10% e 20%."<<endl;
        }
        else
        {
            cout<<"O produto tem lucro maior que 20%."<<endl;
        }
    }

    return 0;
}
double lucro (double custo,double venda)
{
    double dif;
    dif = venda - custo;
    return dif / (custo/100);
}
