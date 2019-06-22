#include <iostream>
#include <string>
#define N 40
using namespace std;

struct condominio
{
    string nome;
    int numero;
    double area;
    int num_moradores;
    double valor;
};

int menu()
{
    int opcao;
    cout<<"\n1-Digite os dados dos apartamentos.\n";
    cout<<"2-Visualizar a area total do condominio.\n";
    cout<<"3-Saber o valor a ser pago no mes, de acordo com alguns dados pedidos.\n";
    cout<<"4-Visualizar os dados do apartamento com o maior numero de moradores.\n";
    cout<<"5-Sair do programa.\n\n";
    cin>>opcao;
    cin.ignore();
    return opcao;
}
int inserir (condominio *v, int quantap)
{
    char resp;
    if (quantap < N)
    {
        do
        {
            cout<<"\nInserir nome do responsavel pelo apartamento:\n";
            getline(cin,v[quantap].nome);
            cout<<"Inserir numero do apartamento:\n";
            cin>>v[quantap].numero;
            cout<<"Inserir numero de moradores do apartamento:\n";
            cin>>v[quantap].num_moradores;
            cout<<"Inserir area do apartamento:\n";
            cin>>v[quantap].area;
            cin.ignore();
            cout<<"Continua inserindo S/N? \n";
            cin>>resp;
            cin.ignore();
            quantap++;
        }while (resp == 's' || resp == 'S');
    }
    else
    {
        cout<<"Nao eh possivel inserir mais apartamentos.\n";
    }
    return quantap;
}
double totarea(condominio *v, int area)
{
    int i;
    double total = 0;
    if (area < N)
    {
        for (i=0; i<area; i++)
        {
            total = total + v[i].area;
        }
    }
    return total;
}
void maiornumorador(condominio *v, int num)
{
    int i,num2;
    int maior = 0;
    string nome1;
    double area2;
    for(i=0; i<num; i++)
    {
        if(maior<v[i].num_moradores)
        {
            nome1 = v[i].nome;
            num2 = v[i].numero;
            area2 = v[i].area;
        }
    }
    cout<<"Nome: "<<nome1<<endl<<
        "Numero: "<<num2<<endl<<
        "Area do apartamento: "<<area2<<endl<<endl;
}
void receberarea (condominio *v, int numap )
{
    int desp,i;
    double calculo;
    for(i=0;i<numap;i++)
    {
        cout<<"Digite o total das despesas do apartamento "<<i+1<<" :\n";
        cin>>desp;
        calculo = (desp / v[i].area) * desp;
        cout<<"Valor a ser pago no mes: "<<calculo<<endl;
    }
}
int main()
{
    struct condominio v[N];
    int op,numap=0;
    double total;
    do
    {
        op = menu();
        switch (op)
        {
            case 1:
                numap = inserir(v, numap);break;
            case 2:
                total = totarea(v, numap);
                cout<<"\nTotal area: "<<total;break;
            case 3:
                receberarea(v,numap);break;
            case 4:
                maiornumorador(v,numap);break;
            case 5:
                cout<<"Programa finalizado com sucesso.\n";break;
            default:
                cout<<"Opcao invalida. Favor tentar novamente.\n";break;
        }
    }while(op!=5);
    return 0;
}
