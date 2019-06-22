#include<iostream>
using namespace std;

int main()
{
    int **m,i,j,lin,col;
	bool sit;
	cout<<"Qual o tamanho da matriz, linhas e colunas?"<<endl;
	cin>>lin>>col;
	int mt[lin][col], ms[lin][col];
	m = new int*[lin];
	for(i=0;i<lin;i++)
	{
		m[i] = new int[col];
	}
    for (i=0;i<lin;i++)
    {
        for (j=0;j<col;j++)
        {
            cout<<"Entre com a matriz A ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
	for (i=0;i<lin;i++)
    {
        for (j=0;j<col;j++)
        {
            mt[i][j] = m[j][i];
			ms[i][j] = -(m[i][j]);
        }
    }
    for (i=0;i<lin;i++)
    {
        for (j=0;j<col;j++)
        {
            if(mt[i][j]!=ms[i][j])
			{
				sit = false;
			}
        }
    }
    if(sit==true)
	{
		cout<<"\nA matriz eh anti-simetrica."<<endl;
	}
	else
	{
		cout<<"\nA matriz nao eh anti-simetrica."<<endl;
	}
	for(i=0;i<lin;i++)
	{
		delete m[i];
	}
	delete []m;
    return 0;
}
