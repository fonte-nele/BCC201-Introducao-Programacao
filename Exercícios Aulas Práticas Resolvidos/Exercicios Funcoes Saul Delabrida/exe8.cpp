#include<iostream>
using namespace std;
#define n 8
int preencher_vetor1(int *v)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Preencha o vetor, posicao "<<i+1<<" :\n";
		cin>>v[i];
	}
	return *v;
}

char preencher_vetor2(char *v)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Preencha as operacoes aritmeticas do vetor, posicao "<<i+1<<" :\n";
		cin>>v[i];
	}
	return *v;
}

double soma_vetores(double *soma,int *v1,char *v2,int *v3)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(v2[i]=='+')
		{
			soma[i] = v1[i] + v3[i];
		}
		else
		{
			if(v2[i]=='-')
			{
				soma[i] = v1[i] - v3[i];
			}
			else
				if(v2[i]=='/')
				{
					soma[i] = v1[i] / v3[i];
				}
				else
					if(v2[i]=='*')
					{
						soma[i] = v1[i] * v3[i];
					}
		}
	}
	
	return *soma;
}

int main()
{
	int v1[n],v3[n];
	double soma[n];
	char v2[n];
	*v1 = preencher_vetor1(v1);
	*v2 = preencher_vetor2(v2);
	*v3 = preencher_vetor1(v3);
	*soma = soma_vetores(soma,v1,v2,v3);
	cout<<"As operacoes envolvendo os tres vetores, resultou em:\n";
	for(int i=0;i<n;i++)
	{
		cout<<soma[i]<<" ";
	}
	return 0;
}