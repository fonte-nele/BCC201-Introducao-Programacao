#include <iostream>
using namespace std;
int main()
{
    int i,num,maior=0,menor=99999999;

    for (i=1;i<=10;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if(maior < num)
        {
            maior = num;
        }
        if(num<menor)
        {
            menor = num;
        }
    }
    cout<<"O maior numero da lista eh: "<<maior<<endl;
    cout<<"O menor numero da lista eh: "<<menor;
    return 0;
}
