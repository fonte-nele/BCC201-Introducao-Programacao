#include<iostream>
using namespace std;
int main()
{
    int i,j;
	double sal[5],m[5][3];
    for (i=0;i<5;i++)
    {
        cout<<"\nManicure "<<i+1<<" :"<<endl;
		for(j=0;j<3;j++)
		{
			if(j==0)
			{
				cout<<"\nDigite o numero de pes feitos:"<<endl;
				cin>>m[i][j];
			}
			if(j==1)
			{
				cout<<"\nDigite o numero de maos feitas:"<<endl;
				cin>>m[i][j];
			}
			if(j==2)
			{
				cout<<"\nDigite o numero de servicos de podologia feitos:"<<endl;
				cin>>m[i][j];
			}
		}
    }
    for(i=0;i<5;i++)
    {
		for(j=0;j<3;j++)
		{
			if(j==0)
			{
				m[i][j] = m[i][j] *10;
			}
			if(j==1)
			{
				m[i][j] = m[i][j] *15;
			}
			if(j==2)
			{
				m[i][j] = m[i][j] *30;
			}
		}
    }
	for(i=0;i<5;i++)
	{
		sal[i] = 0;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			sal[i] = m[i][j]/2 + sal[i];
		}
	}
	cout<<"\nSalario das manicures:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Manicure "<<i+1<<" : "<<sal[i]<<endl;
	}
    return 0;
}