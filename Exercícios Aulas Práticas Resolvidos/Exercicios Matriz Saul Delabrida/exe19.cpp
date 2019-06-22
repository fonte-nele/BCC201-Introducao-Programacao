#include <iostream>
using namespace std;
int main()
{
    double a[5][10],maior[5];
    int i,j;

    for (i=0;i<5;i++)
    {
        for (j=0;j<10;j++)
        {
            cout<<"Digite a altura do atleta "<<j+1<<" da delegacao "<<i+1<<" :\n";
            cin>>a[i][j];
        }
    }
    for (i=0;i<5;i++)
    {
        maior[i]=a[i][0];
        for(j=0;j<10;j++)
        {
            if(a[i][j]>maior[i])
			{
                maior[i]=a[i][j];
			}
        }
    }
    for (i=0; i<5; i++)
    {
        cout<<"A maior altura da delegacao "<<i+1<<" eh: "<<maior[i]<<endl;
    }
    return 0;
}
