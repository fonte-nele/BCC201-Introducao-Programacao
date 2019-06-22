#include<iostream>
#define n 10
using namespace std;

int main()
{
	int i,j,k,c,cod,aux,m[n][4];
	for(c=0;c<n;c++)
	{
		cout<<"\nDigite o codigo do aluno:"<<endl;
		cin>>cod;
		m[c][0] = cod%1000; //matricula no curso.
		m[c][2] = (cod/1000)%10000; //codigo do curso.
		cout<<"\nDigite o sexo do aluno. 0 - feminino 1 - masculino."<<endl;
		cin>>m[c][1]; //sexo do aluno.
		cout<<"\nDigite o Coeficiente de Rendimento do Aluno:"<<endl;
		cin>>m[c][3]; //CR.
	}
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(m[k][3] < m[j][3])
			{
				k=j;
			}
		}
		aux=m[i][0];
		m[i][0]=m[k][0];
		m[k][0]=aux;
		
		aux=m[i][1];
		m[i][1]=m[k][1];
		m[k][1]=aux;
		
		aux=m[i][2];
		m[i][2]=m[k][2];
		m[k][2]=aux;
		
		aux=m[i][3];
		m[i][3]=m[k][3];
		m[k][3]=aux;
	}
	cout<<"Qual o codigo do curso:\n";
	cin>>cod;
	
	for(c=0;c<n;c++)
	{
		if(cod==m[c][2] && m[c][1]==0)
		{
			cout<<"Aluna matricula: "<<m[c][0]<<" ,Coeficiente: "<<m[c][3];
			c = n;
		}
	}
	return 0;
}