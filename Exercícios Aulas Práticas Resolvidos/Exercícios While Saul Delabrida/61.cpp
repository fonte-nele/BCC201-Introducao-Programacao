#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Digite um numero:\n";
    cin>>num;

    while(num!=-999)
    {
        cout<<"O triplo do numero eh: "<<num*3<<endl;
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    return 0;
}
