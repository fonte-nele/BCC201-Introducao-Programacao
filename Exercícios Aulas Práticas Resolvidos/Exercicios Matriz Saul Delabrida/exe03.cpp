#include <iostream>
using namespace std;
#define n 10
int main()
{
    int i,j, m[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Digite a matriz, linha "<<i+1<<" coluna "<<j+1<<" :\n";
            cin>>m[i][j];
        }
    }
    cout<<"Os elementos acima da diagonal principal eh:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
