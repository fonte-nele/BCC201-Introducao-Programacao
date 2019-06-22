#include <iostream>
using namespace std;
int main()
{
    int c,i,n,menor;
    double aux,vet[20];
    cout<<"Digite o valor N:\n";
    cin>>n;
    cout<<"Digite os "<<n<<" valores da variavel composta:\n";
    for(c=1;c<=n;c++)
    {
        cin>>vet[c];
    }
    for(c=1;c<=n-1;c++)
    {
        menor = c;
        for(i=c+1;i<=n;i++)
        {
            if(vet[i]<vet[menor])
            {
                menor = i;
            }
        }
        aux = vet[menor];
        vet[menor] = vet[c];
        vet[c] = aux;
    }
    cout<<"A variavel composta ordenada em ordem crescente eh:\n";
    for(c=1;c<=n;c++)
    {
        cout<<vet[c]<<endl;
    }
    return 0;
}
