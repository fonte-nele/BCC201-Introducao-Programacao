#include <iostream>
using namespace std;
void dobro(int a,int *b)
{
    b=&a;
    *b=2**b;
    cout<<"O valor do segundo parametro eh: "<<a;
}
int main ()
{
    int a,b;
    cout<<"Digite o valor do primeiro parametro:\n";
    cin>>a;
    dobro(a,&b);
    return 0;
}
