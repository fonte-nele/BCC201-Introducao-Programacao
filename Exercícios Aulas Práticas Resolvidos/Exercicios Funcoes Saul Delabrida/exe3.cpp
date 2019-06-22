#include<iostream>
using namespace std;
#define n 15
void intercalar(int *v1,int *v2)
{
	int j=0,v[n+n];
	for(int i=0;i<n;i++,j++)
	{
		v[j] = v1[i];
		j++;
		v[j] = v2[i];
	}
	cout<<"Vetor intercalado:\n";
	for(int i=0;i<(n+n);i++)
	{
		cout<<v[i]<<" ";
	}
}
int main()
{
	int i,v1[n],v2[n];
	for(i=0;i<n;i++)
	{
		cout<<"Preencha o primeiro vetor, posicao "<<i+1<<" :\n";
		cin>>v1[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"Preencha o segundo vetor, posicao "<<i+1<<" :\n";
		cin>>v2[i];
	}
	intercalar(v1,v2);
	return 0;
}