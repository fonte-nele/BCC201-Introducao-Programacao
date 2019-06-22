#include<iostream>
#define n 3
using namespace std;
int main()
{
    int m[n][n],f[n][n],i,j;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<"Entre com a matriz A ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            f[n-(i+1)][n-(j+1)]=m[i][j];
        }
    }
    cout<<"A matriz que gira 180 graus eh:\n";
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<f[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
