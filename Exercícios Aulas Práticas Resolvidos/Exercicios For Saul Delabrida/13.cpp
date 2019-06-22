#include <iostream>
using namespace std;
int main()
{
    int num,i;
    for (i=1;i<=10;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        cout<<"O cubo do numero "<<num<<" eh: "<<num*num*num<<" ."<<endl;
    }

    return 0;
}
