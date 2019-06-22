#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    double i, s=0;
    cout<<"Digite o numero N:\n";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        s=s+1/pow(i,i);
    }
    cout<<"O valor de S eh: "<<s;
    return 0;
}
