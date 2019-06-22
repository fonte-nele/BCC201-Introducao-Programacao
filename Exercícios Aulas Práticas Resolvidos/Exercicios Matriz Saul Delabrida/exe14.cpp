#include<iostream>
using namespace std;
int main()
{
    int m[4][5],i,j,soma=0;
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            cout<<"Entre com a matriz ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            soma += m[i][j];
        }
    }
	cout<<"A soma de todos os elementos da matriz eh: "<<soma<<endl<<endl;
    return 0;
}
