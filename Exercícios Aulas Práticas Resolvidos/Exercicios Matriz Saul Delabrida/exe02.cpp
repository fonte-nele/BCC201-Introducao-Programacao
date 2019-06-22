#include <iostream>
using namespace std;
#define n 10
int main()
{
    int m[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Insira a matriz, linha "<<i+1<<" coluna "<<j+1<<" :\n";
            cin>>m[i][j];
        }
    }
    cout<<"A matriz digitada, sem os elementos da diagonal principal eh:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i!=j)
            {
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
