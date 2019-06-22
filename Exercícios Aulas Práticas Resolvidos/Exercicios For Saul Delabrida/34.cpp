#include <iostream>
using namespace std;
int main()
{
    int a,b,div,md;
    cout<<"Digite um numero A:\n";
    cin>>a;
    cout<<"Digite um numero B:\n";
    cin>>b;
    div = 0;
    md = a;

    while (md>=b)
    {
        div = div + 1;
        md = md - b;
    }

    cout<<"O quociente da divisao A por B eh: "<<div;
    return 0;
}
