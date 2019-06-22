#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    double num;
    for(i=1;i<=15;i++)
    {
        cout<<"Digite um numero para calculo da raiz quadrada:\n";
        cin>>num;
        cout<<"A raiz quadrada do numero "<<num<<" eh: "<<sqrt(num)<<endl;
    }
    return 0;
}
