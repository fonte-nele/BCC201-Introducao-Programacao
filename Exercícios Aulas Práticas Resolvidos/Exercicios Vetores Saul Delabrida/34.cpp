#include <iostream>
using namespace std;
int main()
{
    int c,i,aux,num[10];
    double auxiliar, tempo[10];
    for(c=1;c<=10;c++)
    {
        cout<<"Digite o numero de inscricao do corredor:\n";
        cin>>num[c];
        cout<<"Digite o tempo de corrida deste corredor:\n";
        cin>>tempo[c];
    }
    for (c=1; c<=10; c++)
    {
        for(i=1; i<=10; i++)
        {
            if (tempo[i]>tempo[i+1])
            {
                auxiliar = tempo[i];
                tempo[i] = tempo[i+1];
                tempo[i+1] = auxiliar;
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
            }
        }
    }
    for(c=1;c<=10;c++)
    {
        cout<<"O "<<c<<" foi o de numero "<<num[c]<<" com o tempo de "<<tempo[c]<<endl;
    }
    return 0;
}
