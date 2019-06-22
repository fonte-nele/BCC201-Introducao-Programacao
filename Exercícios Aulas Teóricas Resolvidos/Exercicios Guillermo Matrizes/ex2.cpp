#include <iostream>
#define n 3
using namespace std;
int main ()
{
    int m[n][n], i, j;
    cout<<"Insira valores para preencher uma matriz\n\n";
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<"Digite o valor para linha "<<i<<" coluna "<<j<<":\n";
            cin>>m[i][j];
        }
    }
    cout<<"Temos a matriz:\n";
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    if ((m[1][0] == 0) && (m[2][0] == 0) && (m[2][1] == 0))
    {
        cout<<"Matriz triangular superior.";
    }
    else 
    {
        cout<<"A matriz nao e triangular superior";
    }
    return 0;
}