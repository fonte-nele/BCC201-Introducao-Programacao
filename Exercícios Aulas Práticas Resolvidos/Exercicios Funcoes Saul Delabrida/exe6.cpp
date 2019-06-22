#include<iostream>
using namespace std;
#define n 5
int cont=0;
int preencher_vetor(int *v)
{
	int i=0,num;
	while(num>=0 && i<n)
	{
		cout<<"Preencha o vetor:\n";
		cin>>num;
		if(num>=0)
		{
			v[i] = num;
			cont++;
		}
		
		i++;
	}
	return *v;
}

int main()
{
	int v[n];
	*v = preencher_vetor(v);
	cout<<"Vetor digitado:\n";
	for(int i=0;i<cont;i++)
	{
		cout<<v[i]<<" ";
	}
	
	return 0;
}