#include <iostream>
using namespace std;
struct alunos
{
    char nome[100];
    int idade;
    int registro;
};
int main()
{
    struct alunos a[3];
    int i,idademenor;
    for(i=0;i<3;i++)
    {
        cout<<"Digite o nome do aluno "<<i+1<<":"<<endl;
        cin.ignore();
        cin.getline(a[i].nome,100);
        cout<<"Digite a idade do mesmo:\n";
        cin>>a[i].idade;
        cout<<"Digite o numero do registro academico do mesmo(somente numeros):\n";
        cin>>a[i].registro;
        cout<<endl;
    }
    cout<<"Digite uma idade:\n";
    cin>>idademenor;
    cout<<"\nOs dados dos alunos com idade menor a digitada sao:\n\n";
    for(i=0;i<3;i++)
    {
        if(idademenor>a[i].idade)
        {
            cout<<"Aluno "<<i+1<<"\nNome: "<<a[i].nome<<endl;
            cout<<"Idade: "<<a[i].idade<<endl<<endl;
        }
    }
    if(idademenor>a[i].idade)
    {
        cout<<"Nao ha alunos com idade menor que a digitada.";
    }
    return 0;
}
