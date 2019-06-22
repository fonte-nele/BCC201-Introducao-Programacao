#include<iostream>
using namespace std;
int main()
{
	int i,j;
	double totmes,totsem,totano,m[12][4];
	for(i=0;i<12;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<"\nMes: "<<i+1<<" Semana: "<<j+1<<endl;
			cin>>m[i][j];
		}
	}
	totano=0;
	for(i=0;i<12;i++)
	{
		totmes=0;
		for(j=0;j<4;j++)
		{
			totmes = totmes + m[i][j];
		}
		cout<<"\nMes: "<<i+1<<" Total mes: "<<totmes<<endl;
		totano= totano + totmes;
	}
	for(j=0;j<4;j++)
	{
		totsem=0;
		for(i=0;i<12;i++)
		{
			totsem = totsem + m[i][j];
		}
		cout<<"\nSemana: "<<j+1<<" Total semana: "<<totsem<<endl;
	}
	cout<<"\nTotal Ano: "<<totano<<endl;
	return 0;
}