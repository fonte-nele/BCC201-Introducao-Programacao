#include <iostream>
using namespace std;
int main()
{
    int num;
    double i,s=0;
    cout<<"Digite o numero N:\n";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        s =s  + i /(num-i+1);
    }
    cout<<"O valor S eh: "<<s;
    return 0;
}
