#include <iostream>
using namespace std;
struct carro
{
    char marca[15];
    int ano;
    char cor[10];
    double preco;
};
int menu()
{
    int opcao;
    cout<<"**********************************MENU*********************************\n";
    cout<<"\n1.Digitar os dados dos carros.\n";
    cout<<"2.Digitar um preco e imprimir todos os carros com preco menor ou igual.\n";
    cout<<"3.Digitar uma marca e imprimir todos os carros dessa marca.\n";
    cout<<"4.Digitar marca, ano e cor para verificar se existe carro desse tipo.\n";
    cout<<"5.Sair.\n";
    cin>>opcao;
    return opcao;
}
void inserir (carro v[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        cout<<"Digite a marca.\n";
        cin>>v[i].marca;
        cout<<"Digite o ano.\n";
        cin>>v[i].ano;
        cout<<"Digite a cor.\n";
        cin>>v[i].cor;
        cout<<"Digite o preco.\n";
        cin>>v[i].preco;
        cout<<endl;
    }
}
void mostrarp (carro v[], int n, double preco)
{
    int i;
    cout<<"Carros com o preco menor ou igual ao digitado:\n";
    for (i=0; i<n ; i++)
    {
        if (v[i].preco <= preco)
        {
            cout<<"Marca: "<<v[i].marca<<endl;
            cout<<"Cor: "<<v[i].cor<<endl;
            cout<<"Ano: "<<v[i].ano<<endl<<endl;
        }
    }
}
void mostrarc (carro v[], int n, string marca)
{
    int i;
    cout<<"Carros com a marca digitada:\n";
    for (i=0; i<n; i++)
    {
        if (v[i].marca == marca)
        {
            cout<<"Ano: "<<v[i].ano<<endl;
            cout<<"Cor: "<<v[i].cor<<endl;
            cout<<"Preco: "<<v[i].preco<<endl<<endl;
        }
    }
}
void mostrartudo (carro v[], int n, string marca, int ano, string cor)
{
    int i;
    cout<<"Todos os carros cadastrados com os dados digitados:\n";
    for (i=0; i<n; i++)
    {
        if (v[i].marca == marca && v[i].ano == ano && v[i].cor == cor)
        {
            cout<<"Preco: "<<v[i].preco;
        }
    }
}
int main()
{
    struct carro v[20];
    int op,ano;
    string marca,marca1,cor;
    double valor;
    do
    {
        op = menu();
        switch(op)
        {
            case 1:
                inserir(v,20);break;
            case 2:
                cout<<"Digite um preco:\n";
                cin>>valor;
                mostrarp(v,20,valor);break;
            case 3:
                cout<<"Digite uma marca:\n";
                cin>>marca;
                mostrarc(v,20,marca);break;
            case 4:
                cout<<"Digite uma marca:\n";
                cin>>marca1;
                cout<<"Digite um ano:\n";
                cin>>ano;
                cout<<"Digite uma cor:\n";
                cin>>cor;
                mostrartudo(v,20,marca1,ano,cor);break;
            case 5:
                cout<<"Programa finalizado com sucesso.....\n";break;
            default:
                cout<<"Opcao invalida. Tente novamente.\n";break;
        }
    }while(op!=5);
    return 0;
}
