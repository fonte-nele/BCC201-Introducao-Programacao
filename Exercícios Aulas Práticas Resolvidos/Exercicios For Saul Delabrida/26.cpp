#include <iostream>
using namespace std;
int main()
{
    int limi,lims,soma=0,i;
    cout<<"Digite o limite inferior:\n";
    cin>>limi;
    cout<<"Digite o limite superior:\n";
    cin>>lims;
    cout<<"Os numeros pares deste intervalo eh:\n";

    for(i=limi+1;i<lims;i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
            soma=soma+i;
        }
    }
    cout<<"A soma dos numeros pares no intervalo dado eh de: "<<soma;
    return 0;
}
