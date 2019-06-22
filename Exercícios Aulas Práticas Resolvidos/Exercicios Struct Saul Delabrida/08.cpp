#include<iostream>
#include<string>
#define N 100
using namespace std;
struct data
{
    int dia;
    int mes;
    int ano;
};
struct endereco
{
    string rua, bairro, cidade, estado, pais, complemento;
	int numero, cep;
};
struct telefone
{
    int ddd;
    int numero;
};
struct pessoa
{
    string nome;
    string email;
    struct telefone tel;
    struct endereco end;
    struct data nascimento;
};
int Menu()
{
    int op;
    cout<<"1-Inserir dados de uma pessoa."<<endl ;
    cout<<"2-Buscar por nome."<<endl;
    cout<<"3-Buscar por mes."<<endl;
    cout<<"4-Buscar por dia e mes."<<endl;
    cout<<"5-Inserir pessoa."<<endl;
    cout<<"6-Retirar pessoa."<<endl;
    cout<<"7-Imprimir agenda."<<endl<<endl;
    cin>>op;
    cin.ignore();
    return op;
}
void BuscaNome(pessoa V[3], int tam)
{
    char nome[20];
    cout<<"Digite o nome que quer procurar:\n";
    cin>>nome;
    for(int i=0; i<tam; i++)
    {
        if(nome == V[i].nome)
        {
            cout<<"Nome encontrado, Dados:\n";
            cout<<"Email:\n"<<V[i].email;
            cout<<"Endereco:\n"<<"Rua: "<<V[i].end.rua <<endl;
            cout<<"Numero : "<<V[i].end.numero<<endl;
            cout<<"Complemento: " <<V[i].end.complemento<<endl;
            cout<<"Bairro : "<<V[i].end.bairro<<endl;
            cout<<"Cidade:"<<V[i].end.cidade <<endl;
            cout<<"Estado: " <<V[i].end.estado <<endl;
            cout<<"Pais : " <<V[i].end.pais <<endl;
            cout<<"Dada de aniversario " <<V[i].nascimento.dia<<"/"<<V[i].nascimento.mes<<"/"<<V[i].nascimento.ano <<endl;
        }
    }
}
void ProcuraMes(pessoa *V, int tam, int mes)
{
    int mes1, dia;
    cout<<"Digite o mes/dia que quer buscar";
    cin>>mes1>>dia;
    for(int i =0; i < tam; i++)
    {
        if(V[i].nascimento.mes == mes1)
        {
            cout<<"Mes encontrado, Dados : " <<endl;
            cout<<"Nome : " <<V[i].nome;
            cout<<"Email :" <<V[i].email;
            cout<<"Endereco : " << " Rua:"<<V[i].end.rua <<endl;
            cout<<"Numero : "<<V[i].end.numero<<endl;
            cout<<"Complemento: " <<V[i].end.complemento<<endl;
            cout<<"Bairro : "<<V[i].end.bairro<<endl;
            cout<<"Cidade:"<<V[i].end.cidade <<endl;
            cout<<"Estado: " <<V[i].end.estado <<endl;
            cout<<"Pais : " <<V[i].end.pais <<endl;
            cout<<"Dada de aniversario " <<V[i].nascimento.dia<<"/"<<V[i].nascimento.mes<<"/"<<V[i].nascimento.ano <<endl;
        }
    }
}
void ProcuraMes(pessoa *V, int tam)
{
    int mes1, dia;
    cout<<"Digite o mes que quer buscar:\n";
    cin>>mes1;
    for(int i =0; i < tam; i++)
    {
        if(V[i].nascimento.mes == mes1)
        {
            cout<<"Mes encontrado, Dados : " <<endl;
            cout<<"Nome : " <<V[i].nome;
            cout<<"Email :" <<V[i].email;
            cout<<"Endereco : " << " Rua:"<<V[i].end.rua <<endl;
            cout<<"Numero : "<<V[i].end.numero<<endl;
            cout<<"Complemento: " <<V[i].end.complemento<<endl;
            cout<<"Bairro : "<<V[i].end.bairro<<endl;
            cout<<"Cidade:"<<V[i].end.cidade <<endl;
            cout<<"Estado: " <<V[i].end.estado <<endl;
            cout<<"Pais : " <<V[i].end.pais <<endl;
            cout<<"Dada de aniversario " <<V[i].nascimento.dia<<"/"<<V[i].nascimento.mes<<"/"<<V[i].nascimento.ano <<endl;
        }
    }
}
void ComparaMesEdia(pessoa *V, int tam)
{
    int mes;
    cout<<"Digite o mes que pretende buscar ";
    cin>>mes;
    for(int i =0; i < tam; i++)
    {
        if(V[i].nascimento.mes == mes )
        {
            cout<<"Mes encontrado, Dados : " <<endl;
            cout<<"Nome : " <<V[i].nome;
            cout<<"Email :" <<V[i].email;
            cout<<"Endereco : " << " Rua:"<<V[i].end.rua <<endl;
            cout<<"Numero : "<<V[i].end.numero<<endl;
            cout<<"Complemento: " <<V[i].end.complemento<<endl;
            cout<<"Bairro : "<<V[i].end.bairro<<endl;
            cout<<"Cidade:"<<V[i].end.cidade <<endl;
            cout<<"Estado: " <<V[i].end.estado <<endl;
            cout<<"Pais : " <<V[i].end.pais <<endl;
            cout<<"Dada de aniversario " <<V[i].nascimento.dia<<"/"<<V[i].nascimento.mes<<"/"<<V[i].nascimento.ano <<endl;
        }
    }
}
void inserir(pessoa *V, int num)
{
    int i;
    for (i=0;i<num;i++)
    {
        cout<<"Digite o nome da pessoa:\n";
        cin.ignore();
        getline(cin, V[i].nome);
        cout<<"Digite o email:\n";
        getline(cin,V[i].email) ;
        cout<<"Digite o nome da rua:\n";
        getline(cin,V[i].end.rua);
        cout<<"Digite o numero da casa:\n";
        cin>> V[i].end.numero;
        cout<<"Digite o complemento da rua:\n";
        cin>> V[i].end.complemento;
        cout<<"Digite o nome do bairro:\n";
        cin>> V[i].end.bairro;
        cout<<"Digite a cidade:\n";
        cin>> V[i].end.cidade;
        cout<<"Digite o nome do pais:\n";
        cin>> V[i].end.pais;
        cout<<"Digite o cep:\n";
        cin>>V[i].end.cep;
        cout<<"Digite o DDD da pessoa:\n";
        cin>>V[i].tel.ddd;
        cout<<"Digite o numero de telefone da pessoa:\n";
        cin>>V[i].tel.numero;
        cout<<"Digite a data de nascimento (dia/mes/ano):\n";
        cin>>V[i].nascimento.dia;
        cin>>V[i].nascimento.mes;
        cin>>V[i].nascimento.ano;
    }
}

int main()
{
    int op, tam = 1;
    int num;
    struct pessoa V[1];
    do
    {
        op = Menu();
        switch(op)
        {
            case 1:
                cout<<"Quantas pessoas deseja cadastrar?\n";
                cin>>num;
                inserir(V,num);break;
            case 2:
                BuscaNome(V, tam);break;
            case 3:
                ProcuraMes(V, tam);break;
            case 4:
                ComparaMesEdia(V, tam);break;
            case 5:
                break;
            case 6:
                cout <<"Programa finalizado com sucesso...\n";break;
            case 7:
                cout<<"Imprimir lista.";break;
            default:
                cout <<"Opcao invalida.Tente novamente.\n";break;
        }
	  }while( op != 6);
	  return 0;
}
