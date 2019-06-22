#include<iostream>
#include<string>
using namespace std;

string troca(string,string,string);
int main()
{
    string st,st1,st2;
    cout<<"\nDigite uma string:"<<endl;
    getline(cin,st);
    cout<<"\nDigite uma sub:"<<endl;
    getline(cin,st1);
    cout<<"\nDigite outra sub:"<<endl;
    getline(cin,st2);
    cout<<"\nA string ficou:\n"<<troca(st,st1,st2)<<endl;
    return 0;
}

string troca(string a, string b, string c)
{
    int i,j,tam1,tam2;
    tam1=a.size();
	tam2=b.size();
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
			a.replace(i,tam2,c);
		}
	}
    return a;
}
