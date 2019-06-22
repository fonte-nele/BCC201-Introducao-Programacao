#include <iostream>
using namespace std;
int main()
{
    string nome;
    double A,B,C,D,E,quant,porc=0,tot=0;
    cout<<"Digite a quantidade de alunos na turma:\n";
    cin>>quant;
    tot=quant;
    while(quant > 0)
    {
        cout<<"Insira o nome do aluno:\n";
        cin>>nome;
        cout<<"Insira as respectivas 05 notas do aluno:\n";
        cin>>A>>B>>C>>D>>E;
        if (A>=7 || B>=7 || C>=7 || D>=7 || E>=7)
        {
            if (A>=7 && B>=7 && C>=7 && D>=7 && E>=7)
            {
            cout<<"O aluno "<<nome<<" foi aprovado em TODAS AS MATERIAS."<<endl;
            }
            if (A>=7 && D>=7)
            {
                cout<<"O aluno "<<nome<<" foi aprovado nas MATERIAS 1 e 4."<<endl;
            }
            if (C>=7)
            {
                porc = porc + 1;
            }

        }
        else
        {
            cout<<"O aluno "<<nome<<" foi REPROVADO.\n";
        }
        quant --;
    }
    cout<<"A porcentagem dos alunos aprovados na materia 3 foi: "<< (porc /tot) * 100<<" %.";
    return 0;
}
