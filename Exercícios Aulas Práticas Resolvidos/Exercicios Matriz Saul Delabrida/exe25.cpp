#include<iostream>
#define n 2
using namespace std;

int main()
{
    int m[n][n],i,j,mult1=1,mult2=1;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<"Entre com a matriz M ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
	for (i=0,j=0;i<n;i++,j++)
    {
        mult1*=m[i][j];
    }
	for (i=0,j=n-1;i<n;i++,j--)
    {
        mult2*=m[i][j];
    }
    cout<<"O determinante da matriz de ordem 2 eh: "<<mult1-mult2<<endl;
    return 0;
}