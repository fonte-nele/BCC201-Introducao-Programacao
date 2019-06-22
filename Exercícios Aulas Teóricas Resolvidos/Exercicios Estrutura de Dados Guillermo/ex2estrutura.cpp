#include <iostream>
using namespace std;
struct hab
{
    int idade;
    string sexo[10];
    double salario;
    int filhos;
};
void dados ()
{
    struct hab num[500];
    int i;
    double soma=0;
    for(i=0;i<500;i++)
    {
        cout<<"Digite a idade do habitante:\n";
        cin>>num[i].idade;
        cout<<"Qual o sexo do habitante, feminino ou masculino?\n";
        cin>>num[i].sexo[i];
        cout<<"Qual o salario do habitante, em R$:\n";
        cin>>num[i].salario;
        soma = soma+num[i].salario;
        cout<<"Qual o numero de filhos deste cidadao?\n";
        cin>>num[i].filhos;
        cout<<endl;
    }
    cout<<"Pesquisa IBGE resulta nos seguintes dados:\n\n";
    for(i=0;i<500;i++)
    {
        cout<<"Cidadao "<<i+1<<":\n";
        cout<<"Idade: "<<num[i].idade<<endl;
        cout<<"Sexo: "<<num[i].sexo<<endl;
        cout<<"Salario: R$"<<num[i].salario<<endl;
        cout<<"Filhos: "<<num[i].filhos<<endl<<endl;
    }
    cout<<"A media dos salarios digitados foi: R$"<<soma/i<<endl;
}
int main()
{
    dados();
    return 0;
}
