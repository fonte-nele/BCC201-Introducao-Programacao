#include <iostream>
using namespace std;
int main()
{
    double nota1,nota2,media;
    cout<<"Digite as 02 notas do aluno:\n";
    cin>>nota1>>nota2;
    media = (nota1 + nota2) /2;

    if (media <3){
        cout<<"REPROVADO pois sua media foi "<<media;
    }
    if (media >=7){
        cout<<"APROVADO pois sua media foi "<<media;
    }
    if (media >=3 && media <7){
        cout<<"EXAME pois sua media foi "<<media;
    }
    return 0;
}
