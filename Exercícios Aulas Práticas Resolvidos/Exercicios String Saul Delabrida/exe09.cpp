#include<iostream>
#include<string>
using namespace std;
string ultima(string a)
{
	string novo;
	int i,tam,pos;
	tam =a.size();
	for(i=0;i<tam;i++)
	{
		if(a[i]==' ' || a[i]==',')
		{
			pos=i;
		}
	}
	for(i=pos+1;i<tam;i++)
	{
		novo+=a[i];
	}
	return novo;
}
int main()
{
	string pal;
	cout<<"\nDigite a string:"<<endl;
	getline(cin,pal);
	cout<<"\nA ultima palavra da string eh:"<<endl;
	cout<<ultima(pal)<<endl;
	return 0;
}