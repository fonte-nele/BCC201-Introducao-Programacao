#include <iostream>
using namespace std;
int main()
{
    int i,nota,vet[10];

    for(i=1;i<=10;i++)
    {
        vet[i]=0;
    }
    for(i=0;i<80;i++)
    {
        cout<<"Digite a nota:\n";
        cin>>nota;
        if (nota>=0 && nota<=10)
        {
            vet[nota+1]=vet[nota];
        }
        else
        {
            cout<<"Nota invalida."<<endl;
        }
    }
    for (i=0;i<=10;i++)
    {
        cout<<"A frequencia absoluta da nota "<<i<<" eh "<<vet[i]<<endl;
        cout<<"A frequencia relativa da nota "<<i<<" eh "<<100*vet[i]/80<<endl;
    }
    return 0;
}
