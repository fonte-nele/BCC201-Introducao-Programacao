#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout << "Digite um numero: "<<endl;
    cin >> a;
    if (a %2==0)
        cout <<"O numero " <<a << " e par.";

    else
        cout << "Este numero "<< a<< " nao e par.";

    return 0;
}
