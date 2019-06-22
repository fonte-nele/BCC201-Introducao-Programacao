#include<iostream>
using namespace std;
int main()
{
    int c,i,j,n;
    double p,xexp,x[10],coefa[20];
    cout<<"Digite o valor de N:\n";
    cin>>n;
    for(c=0;c<n;c++)
    {
        cout<<"Digite o coeficiente a:\n";
        cin>>coefa[c];
    }
    for(c=1;c<=10;c++)
    {
        cout<<"Digite o "<<c<<" valor de x:\n";
        cin>>x[c];
    }
    for(c=1;c<=10;c++)
    {
        p=coefa[0];
        for(i=1;i<=n;i++)
        {
            xexp = 1;
            for(j=1; j<=i;j++)
            {
                xexp = xexp * x[c];
            }
            p = p+ coefa[i] * xexp;
        }
        cout<<"A soma P de x "<<c<<" eh: "<<p<<endl;
    }
    return 0;
}
