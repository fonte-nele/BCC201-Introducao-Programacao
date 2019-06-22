#include<iostream>
#include<string>
using namespace std;
string nova(string a,string b)
{
	string novo;
	int i,j,tam1,tam2,pos=0;
	tam1=a.size();
	tam2=b.size();

	for(i=0;i<tam1;i++)
	{
		for(j=0;j<tam2;j++)
		{			
			pos = a.find(b[j]);
			//cout<<"Passei"<<pos<<endl;
			//Condicao pois pos estava constantemente pegando valor -1.
			if(pos>=0)
			{
				a.erase(pos,1);
				novo = a;
			}
		}
	}
	return novo;
}
int main()
{
	string pal1,pal2;
	cout<<"\nDigite a primeira string:"<<endl;
	getline(cin,pal1);
	cout<<"\nDigite a segunda string:"<<endl;
	getline(cin,pal2);
	cout<<"\nA nova primeira string sem a ocorrencia dos caracteres da segunda string eh:"<<endl<<endl;
	cout<<nova(pal1,pal2)<<endl;
	return 0;
}