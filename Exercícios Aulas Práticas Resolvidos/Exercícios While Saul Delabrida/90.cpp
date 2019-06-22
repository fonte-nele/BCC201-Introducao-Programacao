#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,c=1;
    cout<<"Digite o numero:\n";
    cin>>num;

    while (num>0)
    {
        c= sqrt(num);
        if (c*c == num )
        {
            cout<<"Eh um quadrado perfeito com raiz: "<<sqrt(num)<<endl;
        }
        else
        {
            cout<<"Nao eh um quadrado perfeito."<<endl;
        }

        cout<<"Digite o numero:\n";
        cin>>num;
    }
    cout<<"Nao eh um numero valido.";
    return 0;
}
