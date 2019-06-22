#include <iostream>
using namespace std;
int main()
{
    double freq, nota;
    cout<<"Qual a frequencia do aluno, em %?\n";
    cin>>freq;
    cout<<"Qual a nota do aluno?\n";
    cin>>nota;

    if (freq>=75){
        if(nota<3){
            cout<<"REPROVADO";
        }
        if (nota>=3 && nota<7){
            cout<<"EXAME";
        }
        if (nota>=7 && nota<=10){
            cout<<"APROVADO";
        }
    }
        else{
            cout<<"REPROVADO";
        }
    return 0;
}
