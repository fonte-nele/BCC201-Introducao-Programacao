#include <iostream>
using namespace std;
int main()
{
    int i,num,maior=0,maior2=0;
    for (i=1;i<=10;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if(maior<num)
        {
            maior2 = maior;
            maior = num;
        }
        else
            if(num>maior2)
        {
            maior2 = num;
        }

    }
    cout<<"O maior numero eh: "<<maior<<endl;
    cout<<"O segundo maior numero eh: "<<maior2;
    return 0;
}
