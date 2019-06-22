#include<iostream>
#include<string>
using namespace std;

int ocor(string a,string b)
{
	int quant=0,i,j,tam1,tam2;
	tam1 =a.size();
	tam2 =b.size();
	for(i=0;i<tam1;i++)
	{
		for(j=0;j<tam2;j++)
		{
			if(a[i+j]!=b[j])
			{
				break;
			}
		}
		if(j==tam2)
		{
			quant++;
		}
	}
	return quant;
}

int main()
{
	string pal1,pal2;
	cout<<"\nDigite a primeira string:"<<endl;
	getline(cin,pal1);
	cout<<"\nDigite a segunda string:"<<endl;
	getline(cin,pal2);
	cout<<"\nO numero de ocorrencias da string "<<pal2<<" na string "<<pal1<<" eh:"<<endl;
	cout<<endl<<ocor(pal1,pal2)<<endl;
	return 0;
}