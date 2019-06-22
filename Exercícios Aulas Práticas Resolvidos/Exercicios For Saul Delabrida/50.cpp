#include <iostream>
using namespace std;
int main()
{
    int i,fat=1;
    double x,s=0;
    cout<<"Digite o numero real X:\n";
    cin>>x;

    for(i=1;i<=20;i++)
    {
        if (i%2==0)
        {
            s=s-x/fat;
        }
        else
        {
            s=s+x/fat;
        }
        fat=fat*i;
    }
    cout<<"O somatorio resulta em: "<<s;
    return 0;
}
