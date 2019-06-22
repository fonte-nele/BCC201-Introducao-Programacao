#include <iostream>
using namespace std;
int main()
{
    int sexo,i,mul=0;
    double altura,soma=0,somam=0,maior=0,menor=99999;

    for(i=1;i<=50;i++)
    {
        cout<<"Digite o codigo do sexo da pessoa. 1-Masculino, 2-Feminino.\n";
        cin>>sexo;
        cout<<"Digite a altura da pessoa:\n";
        cin>>altura;
        if(altura>maior)
        {
            maior = altura;
        }
        if(altura<menor)
        {
            menor = altura;
        }
        if (sexo==2)
        {
            mul++;
            somam= somam + altura;
        }
        soma = soma + altura;
    }
    cout<<"A maior altura da turma eh: "<<maior<<endl;
    cout<<"A menor altura da turma eh: "<<menor<<endl;
    cout<<"A media de altura da turma eh: "<<soma/50<<endl;
    cout<<"A media de altura das mulheres eh: "<<somam/mul;
    return 0;
}
