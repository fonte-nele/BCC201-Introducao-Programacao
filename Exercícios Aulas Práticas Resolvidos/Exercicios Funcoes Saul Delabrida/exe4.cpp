#include<iostream>
#include<iomanip>
using namespace std;
#define n 12
double porc08(int *v)
{
	int i;
	double cont=0;
	for(i=0;i<n;i++)
	{
		if(v[i]<8)
		{
			cont++;
		}
	}
	return (cont/n)*100;
}

double porc10(int *v)
{
	int i;
	double cont=0;
	for(i=0;i<n;i++)
	{
		if(v[i]>10)
		{
			cont++;
		}
	}
	return (cont/n)*100;
}

int main()
{
	int i,v[n];
	for(i=0;i<n;i++)
	{
		cout<<"Preencha o vetor, posicao "<<i+1<<" :\n";
		cin>>v[i];
	}
	cout<<"A porcentagem de numeros menores que 08 eh : "<<fixed<<setprecision(2)<<porc08(v)<<" %.";
	cout<<"\nA porcentagem de numeros maiores que 10 eh: "<<fixed<<setprecision(2)<<porc10(v)<<" %.";
	return 0;
}