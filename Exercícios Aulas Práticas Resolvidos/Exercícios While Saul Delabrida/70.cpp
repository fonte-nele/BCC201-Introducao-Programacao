#include <iostream>
using namespace std;
int main()
{
    int num, maior,menor;
    cout<<"Digite um numero:\n";
    cin>>num;
    maior = 0;
    menor = 999999;

    while (num !=-1)
    {
        if (num>0)
        {
            if (num<menor)
            {
                menor = num;
            }
            if (num>maior)
            {
                maior =num;
            }
        }
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"O maior numero positivo digitado foi: "<<maior<<" .O menor numero positivo digitado foi: "<<menor;
    return 0;
}
