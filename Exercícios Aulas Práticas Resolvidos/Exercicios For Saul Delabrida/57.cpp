#include <iostream>
using namespace std;
int main()
{
    int i,num,nm,nm2;
    double nota,maior=0,maior2=0;

    for(i=1;i<=100;i++)
    {
        cout<<"Digite o numero da matricula do aluno:\n";
        cin>>num;
        cout<<"Digite a nota do aluno:\n";
        cin>>nota;

        if(nota>maior)
        {
            maior2 = maior;
            maior = nota;
            nm2 = nm;
            nm = num;
        }
        if (nota>maior2 && nota<maior)
        {
            maior2 = nota;
            nm2 = num;
        }
    }
    cout<<"A maior nota foi do aluno com matricula "<<nm<<" ,com nota "<<maior<<endl;
    cout<<"A segunda maior nota foi do aluno com matricula "<<nm2<<" ,com nota "<<maior2;
    return 0;
}
