#include <iostream>
using namespace std;
int main()
{
    int n,i,j,fatn=1,fatd=1;
    double soma=0,r;
    cout<<"Qual o valor de N:\n";
    cin>>n;

    for(j=2;j<=n;j++)
    {
        fatn = fatn * j;
    }
    for (i=0;i<=n;i++)
    {
        r = fatn / fatd;
        if (i%2==1)
        {
            cout<<"O termo eh "<<r<<endl;
            soma=soma+r;
        }
        if (i!=n)
        {
            fatn= fatn / (n-i);
        }
        fatd = fatd * (2*i + 1) * (2*i + 2);
    }
    cout<<"Soma resulta em: "<<soma;
    return 0;
}
