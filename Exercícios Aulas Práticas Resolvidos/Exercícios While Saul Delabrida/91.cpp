#include <iostream>
using namespace std;
int main()
{
    int turma, nota,aprov=0,bacturma;
    double total=0,reprov=0;
    cout<<"Quantos alunos ha na turma?\n";
    cin>>turma;
    bacturma = turma;

    while (turma>0)
    {
        cout<<"Qual a nota do aluno?\n";
        cin>>nota;
        if (nota>=7)
        {
            aprov++;
        }
        if (nota<=7)
        {
            reprov++;
        }
        total =total + nota;
        turma--;
    }
    cout<<"A quantidade de alunos aprovados eh de: "<<aprov<<endl;
    cout<<"O percentual de reprovados eh de: "<<(reprov / bacturma) *100<<" %.\n";
    cout<<"A media da turma eh de: "<<total / bacturma;
    return 0;
}
