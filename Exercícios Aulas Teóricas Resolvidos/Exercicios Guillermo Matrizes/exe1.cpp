#include <iostream>
#define num 3
using namespace std;
int simetria (int m[num][num])
{
    int i,j,n=num;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n;)
        {
            if (m[i][j] == m[j][i])
            {
                j++;
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
int main ()
{
    int m[num][num], i, j, n=num;
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
    int s = simetria (m);
    if (s == 1)
    {
        cout<<"Matriz simetrica.";
    }
    else
    {
        cout<<"Matriz nao-simetrica.";
    }
    return 0;
}
