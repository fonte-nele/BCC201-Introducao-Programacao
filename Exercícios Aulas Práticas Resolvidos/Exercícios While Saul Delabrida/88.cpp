#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int c=0;
    double num;
    cout<<"Digite um numero:\n";
    cin>>num;

    while (num>=0 && c<9)
    {
        cout<<"A raiz quadrada do numero "<<num<<" eh: "<<sqrt(num)<<endl;
        c++;

        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"A raiz quadrada do numero eh: "<<sqrt(num);
    return 0;
}
