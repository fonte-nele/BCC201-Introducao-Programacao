#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,f;
    cout<<"Digite o valor de X:\n";
    cin>>x;
    f = (5*x + 3) / sqrt(x*x -16);
    if (f>0){
        cout<<"O valor de f(x) eh: "<<f;
    }
    else{
        cout<<"Nao eh possivel calcular o f(x).";
    }
    return 0;
}
