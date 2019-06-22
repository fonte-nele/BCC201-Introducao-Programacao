#include<iostream>
#define n 2
using namespace std;

int main()
{
    int i,j;
	double m[n][n],inv[n][n],det;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<"Entre com a matriz M ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
	det = (m[0][0]*m[1][1]) - (m[0][1]*m[1][0]);
	if(det!=0)
	{
		inv[0][0] = m[1][1];
		inv[1][1] = m[0][0];
		inv[0][1] = (-1) * m[0][1];
		inv[1][0] = (-1) * m[1][0];
	
		for (i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				inv[i][j] = (1/det) * inv[i][j];
			}
		}
		cout<<"A matriz inversa de ordem 2 eh:\n";
		for (i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<inv[i][j]<<"  ";
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"\nA matriz nao eh invertivel!"<<endl;
	}
    return 0;
}