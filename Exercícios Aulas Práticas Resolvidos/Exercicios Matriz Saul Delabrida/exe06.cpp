#include<iostream>
using namespace std;
#define n 10
int main()
{
    int i,j,m[n][n],mult=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Digite a matriz, linha "<<i+1<<" coluna "<<j+1<<" :\n";
            cin>>m[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                mult= mult * m[i][j];
            }
		}
    }
    cout<<"\nO produto dos elementos abaixo da diagonal principal eh: "<<mult<<endl<<endl;
    return 0;
}
