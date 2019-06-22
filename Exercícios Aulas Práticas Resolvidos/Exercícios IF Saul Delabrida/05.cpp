#include <iostream>
using namespace std;
int main ()
{
    int a,b,soma;
    cout << "Digite dois numeros para que seja feito a soma:"<<endl;
    cin >> a >>b;
    soma = a+b;

    if (soma > 20)
    {
        cout << "O valor da soma deu "<< soma<<" mais o acrescimo de 08, resulta ";
        cout << soma+8;
    }
    else
    {
        cout << "O valor da soma deu "<< soma << " subtraido de 05 resulta ";
        cout << soma -5;
    }
        return 0;
}
