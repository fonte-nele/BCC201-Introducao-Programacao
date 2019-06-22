#include <iostream>
using namespace std;
void inserir(int *v,int n);
void porcpares(int *v, int n);
int main()
{
    int n,*v;
    cout<<"Quantos numeros deseja verificar a porcentagem de pares?\n";
    cin>>n;
    v = new int [n];
    inserir(v,n);
    porcpares(v,n);
    delete [] v;
    return 0;
}

void inserir(int *v,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Digite o "<<i+1<<" numero:\n";
        cin>>v[i];
    }
}

void porcpares(int *v, int n)
{
    int i;
    double porc,cont=0;
    for (i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            cont++;
        }
    }
    porc = (cont / n)*100;
    cout<<"A porcentagem de numeros pares digitados eh: "<<porc<<" %.\n";
}
