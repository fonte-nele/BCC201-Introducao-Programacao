#include <iostream>
#define n 10
using namespace std;

int main ()
{
    int m[n][n],i,j;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<"Entre com a matriz, linha "<<i+1<<" coluna "<<j+1<<" :\n";
            cin>>m[i][j];
        }
    }
    cout<<"A diagonal principal eh:\n";
    for (i=0,j=0;i<n;i++,j++)
    {
        cout<<m[i][j]<<"  ";
    }
    cout<<endl;
    return 0;
}
