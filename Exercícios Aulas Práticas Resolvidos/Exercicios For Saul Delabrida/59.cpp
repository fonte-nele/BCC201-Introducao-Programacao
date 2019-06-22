#include <iostream>
using namespace std;
int main()
{
    int i,nam=0,nav=0,nan=0,nbm=0,nbv=0,nbn=0,ncm=0,ncv=0,ncn=0;
    char elev,periodo;

    for(i=1;i<=50;i++)
    {
        cout<<"Qual o elevador que usa com mais frequencia? A, B ou C.\n";
        cin>>elev;
        cout<<"Qual o periodo que utiliza com mais frequencia? M-Matutino, V-Vespertino ou N-Noturno.\n";
        cin>>periodo;

        if(elev=='a')
        {
            if(periodo=='m')
            {
                nam++;
            }
            else
                if(periodo=='v')
            {
                nav++;
            }
            else
            {
                nan++;
            }
        }
        if(elev=='b')
        {
            if(periodo=='m')
            {
                nbm++;
            }
            else
                if(periodo=='v')
            {
                nbv++;
            }
            else
            {
                nbn++;
            }
        }
        if (elev=='c')
        {
            if(periodo=='m')
            {
                ncm++;
            }
            else
                if(periodo=='v')
            {
                ncv++;
            }
            else
            {
                ncn++;
            }
        }
    }
    if((nam+nav+nan)>(nbm+nbv+nbn) && (nam+nav+nan)>(ncm+ncv+ncn))
    {
        cout<<"A eh o elevador mais frequentado, no periodo ";
        if((nam>nav) && (nam>nan))
        {
            cout<<"Matutino!";
        }
        else
            if((nav>nam) && (nav>nan))
        {
            cout<<"Vespertino!";
        }
        else
        {
            cout<<"Noturno!";
        }
    }
    else
        if((nbm+nbv+nbn)>(nam+nav+nan) && (nbm+nbv+nbn)>(ncm+ncv+ncn))
    {
        cout<<"B eh o elevador mais frequentado, no periodo ";
        if ((nbm>nbv) && (nbm>nbn))
        {
            cout<<"Matutino!";
        }
        else
            if((nbv>nbm) && (nbv>nbn))
        {
            cout<<"Vespertino!";
        }
        else
        {
            cout<<"Noturno!";
        }
    }
    else
        if((ncm+ncv+ncn)>(nam+nav+nan) && (ncm+ncv+ncn)>(nbm+nbv+nbn))
    {
        cout<<"C eh o elevador mais frequentado, no periodo ";
        if((ncm>ncv) && (ncm>ncn))
        {
            cout<<"Matutino!";
        }
        else
            if((ncv>ncm) && (ncv>ncn))
        {
            cout<<"Vespertino!";
        }
        else
        {
            cout<<"Noturno!";
        }
    }

    return 0;
}
