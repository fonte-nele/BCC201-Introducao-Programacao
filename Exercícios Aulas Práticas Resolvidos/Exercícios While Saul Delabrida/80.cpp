#include <iostream>
using namespace std;
int main()
{
    int sexo, idade;
    double peso, altura,malt=0,mpes=0,soma=0,num=0;
    string nome;
    cout<<"Digite o nome do atleta:\n";
    cin>>nome;

    while (nome !="@")
    {
        cout<<"Qual o sexo? 0-Masculino e 1-Feminino\n";
        cin>>sexo;

        if (sexo==0 || sexo==1)
        {
            cout<<"Qual a idade?\n";
            cin>>idade;
            cout<<"Qual a altura:\n";
            cin>>altura;
            cout<<"Qual o peso:\n";
            cin>>peso;
            if (sexo==0 && malt<altura)
            {
                malt = altura;
            }
            if (sexo==1 && mpes<peso)
            {
                mpes = peso;
            }
        }
        else
        {
            cout<<"Codigo de escolha de sexo invalido.FAVOR TENTAR NOVAMENTE.\n";continue;
        }
        soma = soma + idade;
        num = num + 1;
        cout<<"Digite o nome do atleta:\n";
        cin>>nome;
    }
    cout<<"O atleta masculino mais alto foi: "<<malt<<endl;
    cout<<"A atleta feminina mais pesada foi: "<<mpes<<endl;
    cout<<"A media de idade dos atletas eh: "<<soma/num;
    return 0;
}
