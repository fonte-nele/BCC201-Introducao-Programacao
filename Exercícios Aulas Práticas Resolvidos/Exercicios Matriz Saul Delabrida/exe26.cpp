#include<iostream>
using namespace std;

int main()
{
    int **m,i,j,lin,col;
	cout<<"Qual o tamanho da matriz, linhas e colunas?"<<endl;
	cin>>lin>>col;
	int t[lin][col];
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
            t[j][i]=m[i][j];
        }
    }
    cout<<"A matriz transposta de A eh:\n";
    for (i=0;i<lin;i++)
    {
        for (j=0;j<col;j++)
        {
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
	for(i=0;i<lin;i++)
	{
		delete m[i];
	}
	delete []m;
    return 0;
}
