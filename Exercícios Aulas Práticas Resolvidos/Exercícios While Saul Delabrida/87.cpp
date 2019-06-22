#include <iostream>
using namespace std;
int main()
{
    int num,c=1;
    cout<<"Entre com um numero:\n";
    cin>>num;

    while (num != -999)
    {
        while (c<=num)
        {
            if(num%c==0)
            {
                cout<<"Divisores: "<<c<<endl;
            }
            c++;
        }
        c=1;
        cout<<"Entre com um numero:\n";
        cin>>num;
    }
    cout<<"Numero invalido.";
    return 0;
}
