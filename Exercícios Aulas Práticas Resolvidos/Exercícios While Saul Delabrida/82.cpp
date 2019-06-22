#include <iostream>
using namespace std;
int main()
{
    int num,result,t=1;
    cout<<"Digite um numero:\n";
    cin>>num;
    result = t * (t+1) * (t+2);

    while (result<num)
    {
        result = t * (t+1) * (t+2);
        t++;
    }
    if (result == num)
    {
        cout<<"O numero "<<num<<" eh triangular.";
    }
    else
    {
        cout<<"O numero nao eh triangular.";
    }

    return 0;
}
