#include<iostream>
using namespace std;
int main()
{
	int i,j,k,c,d,e,f;
	double a[6][6],b[6][6],g[6][6];
	cout<<"Qual a ordem da Matriz A (c x d):"<<endl;
	cin>>c>>d;
	cout<<"Qual a ordem da Matriz B (e x f):"<<endl;
	cin>>e>>f;
	if(c>6 || d>6 || e>6 || f>6)
	{
		cout<<"\nErro!!!"<<endl;
	}
	else
	{
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				cout<<"Digite a matriz A, linha "<<i+1<<" coluna "<<j+1<<endl;
				cin>>a[i][j];
			}
		}
		cout<<endl;
		for(i=0;i<e;i++)
		{
			for(j=0;j<f;j++)
			{
				cout<<"Digite a matriz B, linha "<<i+1<<" coluna "<<j+1<<endl;
				cin>>b[i][j];
			}
		}
		if(d==e)
		{
			for(i=0;i<c;i++)
			{
				for(j=0;j<d;j++)
				{
					g[i][j] = 0;
					for(k=0;k<d;k++)
					{
						g[i][j] = g[i][j] + a[i][k] * b[k][j];
					}
				}
			}
			cout<<"A matriz G com o produto matricial eh:"<<endl;
			for(i=0;i<c;i++)
			{
				for(j=0;j<f;j++)
				{
					cout<<g[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			cout<<"\nImpossivel calcular o produto matricial entre A e B!"<<endl;
			cout<<"O numero de colunas de A(d) deve ser igual ao numero de linhas de B(e) !!"<<endl<<endl;
		}
		
	}
	return 0;
}