#include<iostream>
#define a 4
using namespace std;
int main()
{
    int m[a][a],n[a][a],i,j,soma[a][a];
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            cout<<"Entre com a matriz A ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
	cout<<endl<<endl;
	for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            cout<<"Entre com a matriz B ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>n[i][j];
        }
    }
    cout<<"A matriz SOMA com a soma da matriz A com a matriz B eh:\n";
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            soma[i][j]= m[i][j] + n[i][j];
            cout<<soma[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}