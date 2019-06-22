#include <iostream>
using namespace std;
struct dados
{
    string nome;
    int idade;
    string pos;
    int num;
};
int menu();
dados inclusao();
void visualizar (dados a[],dados b[],int c, int d);

int main()
{
    dados jogador_titular[6];
    dados jogador_reserva[4];
    int opcao,c=1,d=1;
    do
    {
        opcao = menu();
        switch (opcao)
        {
            case 1:
                if(c<=6)
                {
                    jogador_titular[c] = inclusao();
                    c++;break;
                }
                else
                {
                    cout<<"Ja foram feitos a inclusao dos jogadores principais.\n";break;
                }
            case 2:
                if(d<=4)
                {
                    jogador_reserva[d] = inclusao();
                    d++;break;
                }
                else
                {
                    cout<<"Ja foram feitos a inclusao dos jogadores reservas.\n";break;;
                }
            case 3:
                visualizar(jogador_titular,jogador_reserva,c-1,d-1);break;
            case 4:
                cout<<"Programa finalizado com sucesso...\n";break;
            default:
                cout<<"Opcao invalida.Tente novamente.\n";break;
        }
        }while (opcao !=4);
    return 0;
}
int menu()
{
    int optar;
    cout<<"1.Digitar dados jogadores principais.\n";
    cout<<"2.Digitar dados jogadores reservas.\n";
    cout<<"3.Mostrar os dados.\n";
    cout<<"4.Sair.\n\n";
    cin>>optar;
    cin.ignore();
    return optar;
}
dados inclusao()
{
    dados jog;
    cout<<"Digite o nome do jogador.\n";
    cin>>jog.nome;
    cout<<"Digite a idade do mesmo.\n";
    cin>>jog.idade;
    cout<<"Digite a posicao do mesmo.\n";
    cin>>jog.pos;
    cout<<"Digite o numero da camisa do mesmo.\n";
    cin>>jog.num;
    cout<<endl;

    return jog;
}

void visualizar (dados a[],dados b[],int c, int d)
{
    int j,i;
    cout<<"Jogadores principais.\n\n";
    for(i=1;i<=c;i++)
    {
        cout<<"Nome: "<<a[i].nome<<endl;
        cout<<"Idade: "<<a[i].idade<<endl;
        cout<<"Posicao: "<<a[i].pos<<endl;
        cout<<"Numero: "<<a[i].num<<endl<<endl;
    }
    cout<<"\nJogadores reservas.\n\n";
    for(j=1;j<=d;j++)
    {
        cout<<"Nome: "<<b[j].nome<<endl;
        cout<<"Idade: "<<b[j].idade<<endl;
        cout<<"Posicao: "<<b[j].pos<<endl;
        cout<<"Numero: "<<b[j].num<<endl<<endl;
    }
}
