#include<iostream>
using namespace std;
#define n 20

int maior(int *v)
{
	int m=0;
	for(int i=0;i<n;i++)
	{
		if(m<v[i])
		{
			m = v[i];
		}
	}
	return m;
}

int menor(int *v)
{
	int m=v[0];
	for(int i=0;i<n;i++)
	{
		if(m>v[i])
		{
			m = v[i];
		}
	}
	return m;
}

double media(int *v)
{
	double soma=0;
	for(int i=0;i<n;i++)
	{
		soma += v[i];
	}
	return soma/n;
}

int main()
{
	int i,v[n];
	for(i=0;i<n;i++)
	{
		cout<<"Preencha o vetor, posicao "<<i+1<<" :\n";
		cin>>v[i];
	}
	cout<<"O menor numero digitado foi: "<<menor(v)<<" .\n";
	cout<<"O maior numero digitado foi: "<<maior(v)<<" .\n";
	cout<<"A media dos valores do vetor eh: "<<media(v)<<" .\n";
	return 0;
}