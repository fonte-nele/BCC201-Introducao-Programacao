#include <iostream>
using namespace std;
void lucro (double *v,double *v1,int n);
int main()
{
    int i,n;
    double *v, *v1;
    cout<<"Quantos produtos deseja conferir a lucratividade?\n";
    cin>>n;
    cout<<endl;
    v = new double [n];
    v1 = new double [n];
    for (i=0;i<n;i++)
    {
        cout<<"Qual o preco de custo do produto "<<i+1<<" ?\n";
        cin>>v[i];
        cout<<"Qual o preco de venda do produto "<<i+1<<" ?\n";
        cin>>v1[i];
    }
    lucro(v,v1,n);
    delete []v;
    delete []v1;
    return 0;
}

void lucro (double *v,double *v1,int n)
{
    int i;
    double dif;
    for (i=0;i<n;i++)
    {
        dif = v1[i]-v[i];
        if(dif / (v[i]/100)<10)
            {
                cout<<"O produto "<<i+1<<" tem lucro menor que 10%."<<endl;
            }
            else
                if(dif / (v[i]/100)>=10 && dif / (v[i]/100)<=20)
            {
                cout<<"O produto "<<i+1<<" tem lucro entre 10% e 20%."<<endl;
            }
            else
            {
                cout<<"O produto "<<i+1<<" tem lucro maior que 20%."<<endl;
            }
    }
}
