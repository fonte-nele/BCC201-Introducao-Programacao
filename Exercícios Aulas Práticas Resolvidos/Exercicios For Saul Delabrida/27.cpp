#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Digite um numero:\n";
    cin>>num;
    cout<<"Os multiplos de 3 e 5 no intervalo do numero digitado eh:\n";

    for(i=1;i<=num;i++)
    {

        if (i%3==0 && i%5==0)
        {
             cout<<i<<endl;
        }
    }
    return 0;
}
