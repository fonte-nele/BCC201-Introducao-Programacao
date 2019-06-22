#include <iostream>
using namespace std;
int main()
{
    int idade,i,notimo=0,nbom=0,nregular=0,nruim=0,npessimo=0,
        somaidaderuim=0,maioridadepessimo,maioridadeotimo,maioridaderuim,
        mediaidaderuim;
    char nota;
    for(i=1;i<=100;i++)
    {
        cout<<"Qual a sua idade?\n";
        cin>>idade;
        cout<<"Qual a sua opiniao ao filme? A-Otimo B-Bom C-Regular D-Ruim E-Pessimo.\n";
        cin>>nota;

        if(nota=='A')
        {
            notimo++;
            if(notimo==1 || idade>maioridadeotimo)
            {
                maioridadeotimo=idade;
            }
        }
        else
            if(nota=='B')
        {
            nbom++;
        }
        else
            if(nota=='C')
        {
            nregular++;
        }
        else
            if(nota=='D')
        {
            nruim++;
            somaidaderuim = somaidaderuim + idade;
            if(nruim==1 || idade>maioridaderuim)
            {
                maioridaderuim=idade;
            }
        }
        else
            if(nota=='E')
        {
            npessimo++;
            if(npessimo==1 || idade>maioridadepessimo)
            {
                maioridadepessimo = idade;
            }
        }
        else
        {
            cout<<"Opcao de nota invalida.";
        }
    }
    cout<<"A quantidade respostas otimo eh: "<<notimo<<endl;
    cout<<"A diferenca percentual entre respostas bom e regular eh: "<<100*(nbom-nregular)/100<<endl;
    if (nruim !=0)
    {
        mediaidaderuim = somaidaderuim/nruim;
        cout<<"A media das pessoas que responderam ruim eh: "<<mediaidaderuim;
    }
    else
    {
        cout<<"Nenhuma pessoa respondeu ruim."<<endl;
    }
    cout<<"A percentagem de pessoas que responderam pessimo eh: "<<npessimo<<endl;
    cout<<"A maior idade que respondeu pessimo eh: "<<maioridadepessimo<<endl;
    cout<<"A diferenca entre a maior idade de resposta otimo e ruim eh: "<<maioridadeotimo-maioridaderuim;
    return 0;
}
