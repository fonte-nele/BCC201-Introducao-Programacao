#include <iostream>
using namespace std;
int main()
{
    int num,menor;
    cout<<"Digite um numero:\n";
    cin>>num;
    menor = 99999;

    while (num !=-1)
    {
        if (num>0)
        {
            if (num<menor)
            {
                menor = num;
            }

        }
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"O valor menor positivo digitado foi: "<<menor;
    return 0;
}
