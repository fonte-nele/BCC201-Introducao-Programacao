#include <iostream>
using namespace std;
int** transposta (int** M, int lin, int col)
{
    int i,j;
    int **t;
    t = new int *[col];
    for (i=0; i<col; i++)
    {
        t[i] = new int [lin];
    }
    for(i=0; i<lin;i++)
    {
        for(j=0; j<col; j++)
        {
            t[j][i]=M[i][j];
        }
    }
    cout<<"A matriz transposta de M eh:\n";
    for(i=0; i<lin;i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
    return t;
    delete []t;
}
int main ()
{
    int **M;
    int m,n,i,j;
    cout<<"Entre com numero de linhas e colunas:\n";
    cin>>m>>n;
    M = new int *[m];
    for (i=0; i<m; i++)
    {
        M[i] = new int [n];
    }
    for(i=0; i<m;i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<"Entre com a matriz M ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>M[i][j];
        }
    }
    transposta(M,m,n);
    delete [] M;
    return 0;
}
