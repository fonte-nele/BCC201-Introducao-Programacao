#include <iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"Digite o numero N:\n";
    cin>>num;
    cout<<"Os numeros primos menores que N sao:\n";
    for(i=2;i<num;i++)
    {
        for(j=2;j<num;j++)
        {
        if(num%j==0)
        {
            i++;
            if (j==2)
            {
                cout<<i<<endl;
            }
        }
        }
    }

    return 0;
}
