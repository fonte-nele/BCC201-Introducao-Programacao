#include <iostream>
#include <string.h>
using namespace std;
struct incluir
{
    char titulo[15];
    char autor[20];
    char estilo[10];
    int codigo;
    double preco;
};
void media(incluir livro[50], int numlivros)
{
    double soma=0,media;
    int i;
    for (i=0;i<numlivros;i++)
    {
        soma=soma+livro[i].preco;
    }
    media=soma/numlivros;
    cout<<"A media eh: " <<media<<endl;
}
void procuraTitulo(incluir livro[50],char titulo[20],int numlivros)
{
    int i;
    for (i=0;i<numlivros;i++)
    {
        if (strcmp(titulo,livro[i].titulo)==0)
        {
            cout<<"Nome: "<<livro[i].titulo<<endl;
            cout<<"Autor: "<<livro[i].autor<<endl;
            cout<<"Estilo: "<<livro[i].estilo<<endl;
            cout<<"Codigo: "<<livro[i].codigo<<endl;
            cout<<"Preco: "<<livro[i].preco<<endl<<endl;
        }
    }
}
void procuraAutor(incluir livro[50],char autor[20],int numlivros)
{
    int i;
    for (i=0; i<numlivros; i++)
    {
        if (strcmp(autor,livro[i].autor)==0)
        {
            cout<<"Nome: "<<livro[i].titulo<<endl;
            cout<<"Autor: "<<livro[i].autor<<endl;
            cout<<"Estilo: "<<livro[i].estilo<<endl;
            cout<<"Codigo: "<<livro[i].codigo<<endl;
            cout<<"Preco: "<<livro[i].preco<<endl<<endl;
        }
    }
}
void procuraEstilo(incluir livro[50],char estilo[20],int numlivros)
{
    int i;
    for (i=0; i<numlivros; i++)
    {
        if (strcmp(estilo,livro[i].estilo)==0)
        {
            cout<<"Nome: "<<livro[i].titulo<<endl;
            cout<<"Autor: "<<livro[i].autor<<endl;
            cout<<"Estilo: "<<livro[i].estilo<<endl;
            cout<<"Codigo: "<<livro[i].codigo<<endl;
            cout<<"Preco: "<<livro[i].preco<<endl<<endl;
        }
    }
}
void mostrar(incluir livro[50], int numlivros)
{
    int i;
    for(i=0;i<numlivros;i++)
    {
        cout<<"Livro: "<<i+1<<endl;
        cout<<livro[i].titulo<<endl;
        cout<<livro[i].autor<<endl;
        cout<<livro[i].estilo<<endl;
        cout<<livro[i].codigo<<endl;
        cout<<livro[i].preco<<endl<<endl;
    }
}
void inclusao(incluir livro[50], int numlivros)
{
    cout<<"Digite o nome do livro:\n";
    cin.ignore();
    cin.get(livro[numlivros].titulo,15);
    cout<<"Digite o autor:\n";
    cin.ignore();
    cin.get(livro[numlivros].autor,20);
    cout<<"Digite o estilo:\n";
    cin.ignore();
    cin.get(livro[numlivros].estilo,10);
    cout<<"Digite o codigo:\n";
    cin>>livro[numlivros].codigo;
    cout<<"Digite o valor:\n";
    cin>>livro[numlivros].preco;
}
int menu()
{
    char opcao;
    cout <<"[I]-Digite I para incluir um livro.\n";
    cout <<"[L]-Digite L para listar o nome de todos os livros.\n";
    cout <<"[A]-Digite A para procurar livro por autor.\n";
    cout <<"[T]-Digite T para procurar livro por titulo.\n";
    cout <<"[E]-Digite E para procurar livro por estilo.\n";
    cout <<"[M]-Digite M para calcular a media de preco de todos os livros.\n";
    cout <<"[S]-Digite S para sair.\n\n";
    cin>>opcao;
    return toupper(opcao);
}
int main ()
{
    char autor[20], titulo[15],estilo[10];
    incluir livro[50];
    char op;
    int numlivros=0;
    do
    {
        op = menu();
        switch(op)
        {
            case 'I':
                inclusao(livro,numlivros);
                numlivros++;break;
            case 'L':
                mostrar(livro,numlivros);break;
            case 'A':
                cout<<"Qual autor deseja procurar?\n";
                cin.ignore();
                cin.get(autor,20);
                procuraAutor(livro,autor,numlivros);break;
            case 'T':
                cout<<"Qual titulo deseja procurar?\n";
                cin.ignore();
                cin.get(titulo,20);
                procuraTitulo(livro,titulo,numlivros);break;
            case 'E':
                cout<<"Qual estilo deseja procurar?\n";
                cin.ignore();
                cin.get(estilo,20);
                procuraEstilo(livro,estilo,numlivros);break;
            case 'M':
                media(livro, numlivros);break;
            case 'S':
                cout<<"Programa finalizado com sucesso...\n";break;
            default:
                cout<<"Opcao invalida. Tente novamente.\n";break;
        }
    }while (op!='S');
    return 0;
}
