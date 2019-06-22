#include<iostream>
#include<string>
using namespace std;
void vetor_indice(string a,char letra)
{
	int i,j=0,n=0,tam,v[100];
	tam = a.size();
	for(i=0;i<tam;i++)
	{
		if(a[i]!=' ')
		{
			if(a[i]==letra)
			{
				v[j] = n;
				j++;
			}
			n++;
		}	
	}
	v[j++] = -1;
	cout<<"\nVetor com indices de ocorrencias do caracter na string:"<<endl;
	for(i=0;i<j;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	string pal;
	char letra;
	cout<<"\nDigite uma string:"<<endl;
	getline(cin,pal);
	cout<<"\nDigite um caracter:"<<endl;
	cin>>letra;
	vetor_indice(pal,letra);
	return 0;
}