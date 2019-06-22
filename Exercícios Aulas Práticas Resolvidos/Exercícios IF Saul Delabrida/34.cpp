#include <iostream>
using namespace std;
int main()
{
    double x,f;
    cout<<"Digite o valor de X:\n";
    cin>>x;
    f = 8 / (2-x);
    if (f!=0){
        cout<<"O valor de f(x) eh: "<<f ;
    }
    else{
        cout<<"Nao foi possivel calcular o f(x).";
    }
    return 0;
}
