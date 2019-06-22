#include<iostream>
using namespace std;
int main()
{
    int m[3][4],n[3][4],i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            cout<<"Entre com a matriz A ["<<i+1<<"]["<<j+1<<"]:\n";
            cin>>m[i][j];
        }
    }
    cout<<"A matriz B com o triplo de A eh:\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            n[i][j]= 3 * m[i][j];
            cout<<n[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
