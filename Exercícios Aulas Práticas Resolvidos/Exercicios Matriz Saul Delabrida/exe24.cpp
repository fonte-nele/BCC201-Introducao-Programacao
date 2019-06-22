#include<iostream>
#define n 10
using namespace std;
int main()
{
    int m[n][n],aux,i,j;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<"Entre com a matriz A ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
    for(j=0;j<n;j++)
	{
		aux = m[7][j];
		m[7][j] = m[1][j];
		m[1][j] = aux;
	}
	for(i=0;i<n;i++)
	{
		aux = m[i][9];
		m[i][9] = m[i][3];
		m[i][3] = aux;
	}
	for(i=0;i<n;i++)
	{
		aux = m[i][i];
		m[i][i] = m[i][n-(i+1)];
		m[i][n-(i+1)] = aux;
	}
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}