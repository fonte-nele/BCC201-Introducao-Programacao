#include<iostream>
using namespace std;
#define n 8
int quant(char *v)
{
	int cont=0;
	for(int i=0;i<n;i++)
	{
		if(tolower(v[i])!='a' && tolower(v[i])!='e' && tolower(v[i])!='i' && tolower(v[i])!='o' && tolower(v[i])!='u')
		{
			cont++;
		}
	}
	return cont;
}

int main()
{
	char v[n];
	int i;
	cout<<"Digite 08 caracteres:\n";
	for(i=0;i<n;i++)
	{
		cout<<"Digite o caracter "<<i+1<<" :\n";
		cin>>v[i];
	}
	cout<<"Nestes caracteres digitados estao presentes "<<quant(v)<<" consoantes.\n";
	return 0;
}