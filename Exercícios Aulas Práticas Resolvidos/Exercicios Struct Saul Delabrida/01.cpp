#include <iostream>
#include <cmath>
using namespace std;
struct ponto2d
{
    double x;
    double y;
};

int menu();
ponto2d inclusao();
void dist (ponto2d p, ponto2d q);

int main ()
{
    ponto2d ponto_inicial;
    ponto2d ponto_final;
    int opcao;
    do
    {
        opcao = menu();
        switch (opcao)
        {
            case 1:
                ponto_inicial = inclusao();break;
            case 2:
                ponto_final = inclusao();break;
            case 3:
                dist(ponto_inicial, ponto_final);break;
            case 4:
                cout<<"Programa finalizado com sucesso...\n";break;
            default:
                cout<<"Opcao invalida! Tente novamente.\n";break;
        }
    }while (opcao!=4);
    return 0;
}

int menu()
{
    int escolha;
    cout<<"\n1.Digitar o valor do primeiro ponto.\n";
    cout<<"2.Digitar os valores do segundo ponto.\n";
    cout<<"3.Mostrar a distancia entre os pontos.\n";
    cout<<"4.Sair.\n\n";
    cin>>escolha;
    cin.ignore();
    return escolha;
}
ponto2d inclusao()
{
    ponto2d valor;
    cout<<"Digite o valor de X:\n";
    cin>>valor.x;
    cout<<"Digite o valor de Y:\n";
    cin>>valor.y;
    return valor;
}
void dist (ponto2d p, ponto2d q)
{
    double distancia;
    distancia = sqrt(pow((p.x - q.x),2) + pow((p.y - q.y),2));
    cout<<"\nA distancia entre os pontos digitados eh: "<<distancia<<endl;
}
