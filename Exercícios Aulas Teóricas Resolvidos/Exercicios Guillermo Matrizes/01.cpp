#include <iostream>
#define p 5
using namespace std;
int simetrica (int,int,int);
int main()
{
    int i,j,m[p][p],n[p][p],cont=0;
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            cout<<"Digite os elementos da matriz:\n";
            cin>>m[i][j];
        }
    }
    cout<<"A matriz eh:\n";
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            n[j][i]=m[i][j];
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            if(n[i][j]==m[i][j])
            {
                cont++;
            }
        }
    }
    if (cont==p*p)
    {
        cout<<"Matriz simetrica.";
    }
    else
    {
        cout<<"Matriz nao eh simetrica.";
    }
    return 0;
}
