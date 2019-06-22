#include <iostream>
using namespace std;
int main()
{
    int fat=1,num,i;
    cout<<"Digite um numero:\n";
    cin>>num;

    for (i=2;i<=num;i++)
    {
        fat=fat * i;
    }
    cout<<"O valor do fatorial de "<<num<<" eh: "<<fat;
    return 0;
}
