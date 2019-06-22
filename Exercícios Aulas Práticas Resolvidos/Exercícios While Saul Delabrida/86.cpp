#include <iostream>
using namespace std;
int main()
{
    int num,primo=0,c=2;
    bool sit;
    cout<<"Entre com um numero positivo:\n";
    cin>>num;

    while (num>0)
    {
        sit = 1;
        while (sit && c<num)
        {
            if(num%c==0)
            {
            sit = 0;
            }
            c++;
        }
        if (sit==1 || num==2)
            {
            primo++;
            }
        sit=1;
        c=2;
        cout<<"Entre com um numero positivo:\n";
        cin>>num;
    }
    cout<<"A quantidade de numeros primos digitados eh: "<<primo;
    return 0;
}
