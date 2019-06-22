#include <iostream>
using namespace std;
int main()
{
    int m,n,i,j,off;
    double v[30],v1[20],v3[50];
    cout<<"Digite o valor de M:\n";
    cin>>m;
    for(i=0;i<m;i++)
    {
        cout<<"Digite o "<<i<<" valor da variavel A:\n";
        cin>>v[i];
        v3[i]=v[i];
    }
    off = m;
    cout<<"Digite o valor de N:\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Digite o "<<i<<" valor da variavel B:\n";
        cin>>v1[i];
        for(j=0;j<m;j++)
        {
            if(v1[i] == v[j])
            {
                j = m+1;
            }
        }
        if (j==m)
        {
            off = off + 1;
            v3[off]=v1[i];
        }
    }
    cout<<"Os valores da variavel A sao:\n";
    for(i=0;i<m;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"Os valores da variavel B sao:\n";
    for(i=0;i<n;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"Os valores de A U B sem elementos repetidos sao:\n";
    for(i=0;i<off;i++)
    {
        cout<<v3[i]<<endl;
    }
    return 0;
}
