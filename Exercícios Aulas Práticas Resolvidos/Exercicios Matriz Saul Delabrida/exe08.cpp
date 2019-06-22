#include<iostream>
using namespace std;
#define n 10
int main()
{
    int i,j,m[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Digite a matriz: Linha ["<<i+1<<"] Coluna ["<<j+1<<"]\n";
            cin>>m[i][j];
        }
    }
	cout<<"A matriz digitada, sem os elementos da diagonal secundaria eh:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=n-(j+1))
            {
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
