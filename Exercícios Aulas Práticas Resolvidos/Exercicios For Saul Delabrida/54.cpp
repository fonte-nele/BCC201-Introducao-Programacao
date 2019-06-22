#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    double x,e=1,fat=1;
    cout<<"Digite o valor de X:\n";
    cin>>x;

    for(i=2;i<=15;i++)
    {
        e=e+(pow(x,(i-1)))/fat;
        fat = fat * i;
    }
    cout<<"O valor de e elevado a x eh: "<<e;
    return 0;
}
