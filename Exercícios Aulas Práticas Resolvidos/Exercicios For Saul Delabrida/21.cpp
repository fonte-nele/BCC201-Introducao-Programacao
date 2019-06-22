#include <iostream>
using namespace std;
int main()
{
    int i,num,maior=0;

    for(i=1;i<=num;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if (num>maior)
        {
            maior = num;
        }
    }
    cout<<"O valor maior eh: "<<maior<<endl;
    return 0;
}
