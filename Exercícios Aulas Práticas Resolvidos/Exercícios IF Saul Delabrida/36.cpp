#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A,B,C,delta,x1,x2;
    cout<<"Digite o valor de A,B e C:\n";
    cin>>A>>B>>C;
    delta = B*B-(4*A*C);

    if (delta > 0){
        x1 = ((-B)+ sqrt(delta))/(2*A);
        x2 = ((-B)- sqrt(delta))/(2*A);
        cout<<"Raizes reais e diferentes: "<<x1<<" ; "<<x2;

    if (delta == 0){
        x1 = (-B  / 2*A);
        x2 = x1;
        cout<<"Raizes reais e iguais: "<<x1<<" ; "<<x2;
    }
    }
    else
        cout<<"Nao ha raizes reais.";

    return 0;
}
