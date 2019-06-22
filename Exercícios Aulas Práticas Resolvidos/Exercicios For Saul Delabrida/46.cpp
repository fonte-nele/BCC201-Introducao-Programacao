#include<iostream>
using namespace std;
int main()
{
    int num;
    double i,h=0;
    cout<<"Digite o numero N:\n";
    cin>>num;
    for(i=1;i<=num;i++)
    {
     h = h +(1/i);
    }
    cout<<"O numero H eh: "<<h<<endl;
    return 0;
}
