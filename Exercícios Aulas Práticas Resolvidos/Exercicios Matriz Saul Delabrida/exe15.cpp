#include<iostream>
using namespace std;
int main()
{
    int m[3][5],SL[3],i,j,soma=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            cout<<"Entre com a matriz ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            soma += m[i][j];
			SL[i] = soma;
        }
		soma = 0;
    }
	cout<<"O vetor SL com a soma de cada linha eh:"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<SL[i]<<" ";
	}
    return 0;
}