#include <iostream>
#include <string>
#define N 100
using namespace std;
struct produto
{
    char nome[15];
    char setor;
    int quantidade;
    double preco;
};

int menu()
{
    int opcao;
    cout<<"\n1. Inserir dados.\n";
    cout<<"2. Ler estoque.\n";
    cout<<"3. Produtos por setor.\n";
    cout<<"4. Total capital.\n";
    cout<<"5. Sair.\n";
    cin>>opcao;
    cin.ignore();
    return opcao;
}

int inserir (produto *v, int prod)
{
    char resp;
    if (prod < N)
    {
        do
        {
            cout<<"\nInserir nome do produto:\n";
            cin.get(v[prod].nome,100);
            cin.ignore();
            cout<<"Inserir setor:\n";
            cin>>v[prod].setor;
            cout<<"Inserir quantidade:\n";
            cin>>v[prod].quantidade;
            cout<<"Inserir preco:\n";
            cin>>v[prod].preco;
            cin.ignore();
            cout<<"Continua inserindo S/N? \n";
            cin>>resp;
            cin.ignore();
            prod++;
        }while (resp == 's' || resp == 'S');
    }
    else
    {
        cout<<"Nao eh possivel inserir mais produtos.\n";
    }
    return prod;
}
void lerEstoque (produto *v, int prod)
{
    int i;
    if (prod < N)
    {
        for(i=0;i<prod;i++)
        {
            cout<<"Nome: "<<v[i].nome<<endl<<
                "Setor: "<<v[i].setor<<endl<<
                "Quantidade: "<<v[i].quantidade<<endl<<
                "Preco: "<<v[i].preco<<endl;
        }
    }
}
int lerSetor (produto *v, int prod)
{
    char setor;
    int i, cont=0;
    if(prod<N)
    {
        cout<<"\nInserir setor:\n";
        cin>>setor;
        for(i=0;i<prod;i++)
        {
            if (setor == v[i].setor)
            {
                cont += v[i].quantidade;
            }
        }
        cout<<"\nProdutos no setor: "<<setor<<" = "<<cont<<endl;
    }
    return cont;
}
double capital(produto *v, int prod)
{
    int i;
    double total = 0;
    if (prod < N)
    {
        for(i=0; i<prod ; i++)
        {
            total += (v[i].preco * v[i].quantidade);
        }
    }
    return total;
}
int main()
{
    struct produto v[N];
    int numprod =0, tot, op;
    double valor;
    do
    {
        op = menu();
        switch (op)
        {
            case 1:
                numprod = inserir(v, numprod);break;
            case 2:
                lerEstoque(v, numprod);break;
            case 3:
                tot = lerSetor(v,numprod);break;
            case 4:
                valor = capital(v,numprod);
                cout<<"\nTotal capital: "<<valor;break;
            case 5:
                cout<<"Programa finalizado com sucesso...\n";break;
            default:
                cout<<"Opcao invalida. Tente novamente.\n";
        }
    }while (op!=5);
    return 0;
}
