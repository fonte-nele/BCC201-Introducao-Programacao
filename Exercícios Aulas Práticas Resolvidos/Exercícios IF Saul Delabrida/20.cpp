#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A,B;
    double menor,maior;
    cout<<"Digite dois numeros:\n";
    cin>>A>>B;

    if (A>B){
        maior = A;
        menor = B;
    }
    else
    {
        maior = B;
        menor = A;
    }

    cout<<"O quadrado do numero "<<menor<<" eh "<<pow(menor,2)<<endl;
    cout<<"A raiz quadrada do numero "<<maior<<" eh "<<sqrt(maior)<<endl;

    return 0;
}
