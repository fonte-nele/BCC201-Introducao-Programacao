#include <iostream>
using namespace std;
struct registro
{
    char marca[40];
    char modelo[40];
    int ano;
    char cor[30];
    char placa[20];
};
void visualizar(registro v[],int n);
void Insere(registro v[],int n);
void mostrar(registro v[],int n);

int main()
{
    int n;
    struct registro vet[50];
    do{
        cout<<"Quantos veiculos deseja cadastrar?\n";
        cin>>n;a
    }while(n<0 || n>50);
    Insere(vet,n);
    mostrar(vet,n);
    return 0;
}
void visualizar(registro v[],int n)
{
    int i;
    char resp;
    cout<<"Deseja visualizar os veiculos ja cadastrados? S-sim N-nao.\n";
    cin>>resp;
    if(resp=='s' || resp=='S')
    {
        for(i=0;i<n;i++)
        {
            cout<<"Carro "<<i+1<<" :\n";
            cout<<"Marca: "<<v[i].marca<<endl;
            cout<<"Modelo: "<<v[i].modelo<<endl;
            cout<<"Ano: "<<v[i].ano<<endl;
            cout<<"Cor: "<<v[i].cor<<endl;
            cout<<"Placa: "<<v[i].placa<<endl<<endl;
        }
    }
}
void Insere (registro v[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"\nDigite a marca do carro "<<i+1<<":\n";
        cin>>v[i].marca;
        cout<<"Digite o modelo do carro "<<i+1<<":\n";
        cin>>v[i].modelo;
        cout<<"Digite o ano de fabricacao do carro "<<i+1<<":\n";
        cin>>v[i].ano;
        cout<<"Digite a cor do carro "<<i+1<<":\n";
        cin>>v[i].cor;
        cout<<"Digite a placa do carro "<<i+1<<":\n";
        cin>>v[i].placa;
        cout<<endl;
        visualizar(v,i+1);
    }
}
void mostrar(registro v[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Dados carro "<<i+1<<":\n";
        cout<<"Marca: "<<v[i].marca<<endl;
        cout<<"Modelo: "<<v[i].modelo<<endl;
        cout<<"Ano: "<<v[i].ano<<endl;
        cout<<"Cor: "<<v[i].cor<<endl;
        cout<<"Placa: "<<v[i].placa<<endl<<endl;
    }
}
