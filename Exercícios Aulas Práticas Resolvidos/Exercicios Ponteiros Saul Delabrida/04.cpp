#include <iostream>
using namespace std;
void par (int v[],int n);
int main()
{
    int i,n,*v;
    cout<<"Quantos numeros deseja verificar se eh PAR ou IMPAR?\n";
    cin>>n;
    cout<<endl;
    v = new int [n];
    for(i=0;i<n;i++)
    {
        cout<<"Insira o "<<i+1<<" termo:\n";
        cin>>v[i];
    }
    par(v,n);
    delete []v;
    return 0;
}
void par (int *v,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (v[i] %2==0)
        {
            cout<<"O numero "<<v[i]<<" eh par.\n";
        }
        else
        {
            cout<<"O numero "<<v[i]<<" eh impar.\n";
        }
    }
}
