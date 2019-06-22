#include <iostream>
using namespace std;
int main()
{
    int c,i,n,k;
    double aux,vet[20];
    cout<<"Digite o valor N:\n";
    cin>>n;
    cout<<"Digite os "<<n<<" valores da variavel composta:\n";
    for(c=1;c<=n;c++)
    {
        cin>>vet[c];
    }
    cout<<"Digite o valor de K:\n";
    cin>>k;
    cout<<"O k-esimo termo antes da ordenacao eh: "<<vet[k]<<endl;
    for(c=1;c<=n-1;c++)
    {
        for(i=1;i<=n-c;i++)
        {
            if(vet[i]>vet[i+1])
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }
    cout<<"O k-esimo termo depois da ordenacao eh: "<<vet[k];
    return 0;
}
