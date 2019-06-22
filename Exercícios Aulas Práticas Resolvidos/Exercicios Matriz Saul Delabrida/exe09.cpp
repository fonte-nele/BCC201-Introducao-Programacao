#include<iostream>
#define n 10
using namespace std;
int main()
{
    int i,j,m[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Digite a matriz, linha "<<i+1<<" coluna "<<j+1<<" :\n";
            cin>>m[i][j];
        }
    }
    cout<<"Os elementos acima da diagonal secundaria eh:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<n-(j+1))
            {
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
