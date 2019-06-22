#include <iostream>
using namespace std;
void ord3 (int *a,int *b,int *c)
{
    if (*a > *b && *a > *c)
    {
        if(*b > *c)
        {
            cout<<"\nOrdem crescente:\n";
            cout<<"A = "<<*c<<endl;
            cout<<"B = "<<*b<<endl;
            cout<<"C = "<<*a<<endl;
        }
        else
        {
            cout<<"\nOrdem crescente:\n";
            cout<<"A = "<<*b<<endl;
            cout<<"B = "<<*c<<endl;
            cout<<"C = "<<*a<<endl;
        }
    }
    if (*b > *a && *b > *c)
    {
        if(*a > *c)
        {
            cout<<"\nOrdem crescente:\n";
            cout<<"A = "<<*c<<endl;
            cout<<"B = "<<*a<<endl;
            cout<<"C = "<<*b<<endl;
        }
        else
        {
            cout<<"\nOrdem crescente:\n";
            cout<<"A = "<<*a<<endl;
            cout<<"B = "<<*c<<endl;
            cout<<"C = "<<*b<<endl;
        }
    }
    if (*c > *a && *c > *b)
    {
        if(*a > *b)
        {
            cout<<"\nOrdem crescente:\n";
            cout<<"A = "<<*b<<endl;
            cout<<"B = "<<*a<<endl;
            cout<<"C = "<<*c<<endl;
        }
        else
        {
            cout<<"\nOrdem crescente:\n";
            cout<<"A = "<<*a<<endl;
            cout<<"B = "<<*b<<endl;
            cout<<"C = "<<*c<<endl;
        }
    }
}
int main()
{
    int a,b,c;
    cout<<"Digite o valor de A, B e C, respectivamente:\n";
    cin>>a>>b>>c;
    cout<<"Valor A digitado: "<<a<<endl;
    cout<<"Valor B digitado: "<<b<<endl;
    cout<<"Valor C digitado: "<<c<<endl;
    ord3(&a,&b,&c);
    return 0;
}
