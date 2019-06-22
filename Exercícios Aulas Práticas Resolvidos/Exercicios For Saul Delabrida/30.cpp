#include <iostream>
using namespace std;
int main()
{
    int i,num,somap=0,soman=0;
    for (i=1;i<=20;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if(num>0)
        {
            somap = somap+num;
        }
        else
        {
            soman= soman+num;
        }

    }
    cout<<"A soma dos numeros positivos digitados foi: "<<somap<<endl;
    cout<<"A soma dos numeros negativos digitados foi: "<<soman;
    return 0;
}
