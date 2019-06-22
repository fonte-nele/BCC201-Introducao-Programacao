#include <iostream>
using namespace std;
int main()
{
    int rendap,rendaf,alim,desp;
    double tot=0,por1=0,numr=0,por2=0,soma1=0,soma2=0;
    cout<<"Qual a renda pessoal?\n";
    cin>>rendap;

    while (rendap != 0)
    {
        tot++;
        cout<<"Qual a renda familiar?\n";
        cin>>rendaf;
        cout<<"Qual o valor total gasto com alimentacao?\n";
        cin>>alim;
        cout<<"Qual o valor total gasto com outras despesas?\n";
        cin>>desp;
        if (desp >200)
        {
            por1++;
        }
        if (rendap > rendaf)
        {
            numr++;
        }
        soma1 = soma1 + alim + desp;
        soma2 = soma2 + rendap + rendaf;

        cout<<"Qual a renda pessoal?\n";
        cin>>rendap;
    }
    cout<<"A porcentagem dos alunos que gastam acima de R$200,00 com outras despesas eh de: "<<(por1 / tot) * 100<<" %."<<endl;
    cout<<"O numero de alunos com renda pessoal maior que renda familiar eh de: "<<numr<<endl;
    cout<<"A porcentagem gasta com alimentacao e outras despesas em relacao as rendas pessoal e familiar eh de: "<<(soma1 / soma2) * 100<<" %."<<endl;
    return 0;
}
