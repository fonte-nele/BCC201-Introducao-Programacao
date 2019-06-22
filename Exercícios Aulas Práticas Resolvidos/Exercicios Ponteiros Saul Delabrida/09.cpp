#include <iostream>
using namespace std;
void inserir(int *v,int n);
void uniao(int *v,int *v1, int n1, int n2);
int main()
{
    int n1,n2,*v,*v1;
    cout<<"Quantos numeros deseja colocar nesse primeiro vetor?\n";
    cin>>n1;
    v = new int [n1];
    inserir(v,n1);
    cout<<"Quantos numeros deseja colocar nesse segundo vetor?\n";
    cin>>n2;
    v1 = new int [n2];
    inserir(v1,n2);
    uniao(v,v1,n1,n2);
    delete [] v;
    delete [] v1;
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

void uniao(int *v,int *v1, int n1, int n2)
{
    int i,j,*v3,k,m=0;
    v3 = new int [n1+n2];
    for(i=0;i<n1;i++)
    {
        k=0;
        for (j=0;j<m;j++)
        {
            if (v[i]==v3[j])
            {
                k++;
                break;
            }
        }
        if (k==0)
        {
            v3[m]=v[i];
            m++;
        }
    }
    for(i=0;i<n2;i++)
    {
        k=0;
        for (j=0;j<m;j++)
        {
            if (v1[i]==v3[j])
            {
                k++;
                break;
            }
        }
        if (k==0)
        {
            v3[m]=v1[i];
            m++;
        }
    }
    cout<<"\nO vetor que contem a uniao dos dois anteriores eh:\n";
    for(i=0;i<m;i++)
    {
        cout<<v3[i]<<" ";
    }
    delete []v3;
}
