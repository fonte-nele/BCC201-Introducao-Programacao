#include <iostream>
using namespace std;
int main()
{
    int num,i,atual,ant1=1,ant2=1;
    cout<<"Digite o numero de termos:\n";
    cin>>num;
    cout<<"A serie de Fibonacci com "<<num<<" termos eh:\n";
    cout<<ant1<<endl;
    cout<<ant2<<endl;
    for (i=3; i<=num;i++)
    {
        atual = ant1 + ant2;
        cout<<atual<<endl;
        ant2 = ant1;
        ant1 = atual;
    }
    return 0;
}
