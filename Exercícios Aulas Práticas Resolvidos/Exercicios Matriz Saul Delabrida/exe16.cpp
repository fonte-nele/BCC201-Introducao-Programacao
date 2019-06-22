#include<iostream>
#include<string>
#define n 50
using namespace std;
int main()
{
    int m[n][3],i;
	string tp[n];
    for (i=0;i<n;i++)
    {
        cout<<"Digite o nome da planta "<<i+1<<" :"<<endl;
		cin>>tp[i];
		cout<<"Quantidade ideal para estoque:"<<endl;
		cin>>m[i][0];
		cout<<"Quantidade atual no estoque:"<<endl;
		cin>>m[i][1];
		m[i][2] = m[i][1] - m[i][0];
		cout<<endl;
    }
    for (i=0;i<n;i++)
    {
		if(m[i][2]<0)
		{
			cout<<"\nPlanta: "<<tp[i]<<" ,Comprar: "<<-m[i][2]<<endl;
		}
    }
    return 0;
}