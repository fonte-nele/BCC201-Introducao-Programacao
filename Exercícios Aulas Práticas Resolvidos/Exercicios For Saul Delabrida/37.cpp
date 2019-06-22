#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Digite um numero:\n";
    cin>>num;
    cout<<"Os divisores de "<<num<<" eh:\n";
    for(i=1;i<num;i++)
    {
            if (num%i==0)
            {
                cout<<i<<endl;
            }
    }
    return 0;
}
