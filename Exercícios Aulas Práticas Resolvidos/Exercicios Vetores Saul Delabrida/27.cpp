#include<iostream>
using namespace std;
int main()
{
    int recente1=1,recente2=2,recente3=3,i=1,nemp[300],nmeses[300];
    cout<<"Digite o numero do empregado:\n";
    cin>>nemp[1];
    cout<<"Digite o numero de meses de trabalho:\n";
    cin>>nmeses[1];
    while (nemp[i]!=0 || nmeses[i]!=0)
    {
        if(nmeses[i]<nmeses[recente1])
        {
            recente3 = recente2;
            recente2 = recente1;
            recente1 = i;
        }
        else
            if(nmeses[i] <nmeses[recente2])
        {
            recente3 = recente2;
            recente2 = i;
        }
        else
            if(nmeses[i] <nmeses[recente3])
        {
            recente3 = i;
        }
        i++;
        cout<<"Digite o numero do empregado:\n";
        cin>>nemp[i];
        cout<<"Digite o numero de meses de trabalho:\n";
        cin>>nmeses[i];
    }
    if(i==1)
    {
        cout<<"Nao foi digitado nenhum empregado."<<endl;
    }
    else
    {
        cout<<"O 1o empregado mais recente eh o de numero "<<nemp[recente1]<<endl;
        cout<<"O 2o empregado mais recente eh o de numero "<<nemp[recente2]<<endl;
        cout<<"O 3o empregado mais recente eh o de numero "<<nemp[recente3]<<endl;
    }
    return 0;
}
