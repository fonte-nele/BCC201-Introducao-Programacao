#include <iostream>
using namespace std;
int main()
{
    int a,b,i,mdc;
    cout<<"Digite A e B:\n";
    cin>>a>>b;

    for(i=1;i<=a,i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            mdc=i;
        }
    }
    cout<<"O M.D.C. de A e B eh: "<<mdc;
    return 0;
}
