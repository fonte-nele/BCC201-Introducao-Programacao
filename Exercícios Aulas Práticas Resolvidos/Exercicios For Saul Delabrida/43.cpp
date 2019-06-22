#include <iostream>
using namespace std;
int main()
{
    int num,ant1,ant2,atual,i;
    cout<<"Digite o numero de termos da serie FETUCCINE:\n";
    cin>>num;
    cout<<"Digite os 02 primeiros numeros da serie:\n";
    cin>>ant1>>ant2;
    cout<<"A serie de FETUCCINE eh:\n";
    cout<<ant1<<endl;
    cout<<ant2<<endl;

    for(i=3;i<=num;i++)
    {
        if(i%2!=0)
        {
            atual = ant1 + ant2;
            cout<<atual<<endl;
        }
        else
        {
            atual = ant1 - ant2;
            cout<<atual<<endl;
        }
        ant2=ant1;
        ant1=atual;
    }
    return 0;
}
