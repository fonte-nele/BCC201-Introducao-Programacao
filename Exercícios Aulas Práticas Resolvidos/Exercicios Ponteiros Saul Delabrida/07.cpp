#include <iostream>
using namespace std;
void inserir (int *v,int n);
void multiplo (int *v, int n);
int main()
{
    int *v,n;
    cout<<"Quantos numeros deseja verificar se eh multiplo de 6?\n";
    cin>>n;
    v = new int [n];
    inserir (v,n);
    multiplo(v,n);
    delete [] v;
    return 0;
}

void inserir (int *v,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Digite o "<<i+1<<" numero:\n";
        cin>>v[i];
    }
}
void multiplo (int *v, int n)
{
    int i,cont=0;
    for(i=0;i<n;i++)
    {
        if(v[i]%6==0)
        {
            cont++;
        }
    }
    cout<<"\nForam digitados "<<cont<<" numero(s) multiplos de 6.";
}
