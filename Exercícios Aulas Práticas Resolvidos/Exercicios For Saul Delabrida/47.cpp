#include<iostream>
using namespace std;
int main()
{
    int num,i;
    double j,h;
    cout<<"Digite o numero N:\n";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        j=i;
        if (i%2==1)
        {
            h = h + 1/j;
        }
        else
        {
            h = h - 1/j;
        }
    }
    cout<<"O numero H eh: "<<h;
    return 0;
}
