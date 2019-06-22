#include <iostream>
#define num 3
using namespace std;
int tsuperior (int m[num][num])
{
    int i, j, n=num;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-1;)
        {
            if (m[j+1][i] == 0)
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
    cout<<"Preencha a matriz:"<<endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<"Matriz linha "<<i+1<<" coluna "<<j+1<<endl;
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
    int s = tsuperior (m);
    if (s == 1)
    {
        cout<<"Matriz triangular superior.";
    }
    else
    {
        cout<<"Matriz nao triangular superior.";
    }
    return 0;
}
