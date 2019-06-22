#include <iostream>
using namespace std;
void porcentagem (int *v,int n);
int main()
{
    int n, i,*v;
    cout<<"Quantos numeros deseja verificar se eh menor que 8 ou maior que 10?\n";
    cin>>n;
    cout<<endl;
    v = new int [n];
    for (i=0;i<n;i++)
    {
        cout<<"Digite o "<<i+1<<" termo:\n";
        cin>>v[i];
    }
    porcentagem(v,n);
    delete [] v;
    return 0;
}

void porcentagem (int *v,int n)
{
    double porc1, porc2,cont=0,cont1=0;
    int i;
    for (i=0;i<n;i++)
    {
        if(v[i]<8)
        {
            cont++;
        }
        else
            if(v[i]>10)
        {
            cont1++;
        }
    }
    porc1 = (cont / n)*100;
    porc2 = (cont1 / n)*100;
    cout<<"A porcentagem de numeros digitados menores que 8 eh: "<<porc1<<" %."<<endl;
    cout<<"A porcentagem de numeros digitados maiores que 10 eh: "<<porc2<<" %."<<endl;
}
