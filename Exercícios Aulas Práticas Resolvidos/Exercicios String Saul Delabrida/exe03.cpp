#include<iostream>
#include<string>
using namespace std;

int ocor (string a,char b);
int main()
{
    string pal;
    char letra;
    cout<<"\nDigite uma palavra:"<<endl;
    getline(cin,pal);
    cout<<"\nDigite uma letra:"<<endl;
    cin>>letra;
	if(ocor(pal,letra)!=-1)
	{
		cout<<"\nO indice da primeira ocorrencia da letra "<<letra<<" na palavra "<<pal<<" eh: "<<ocor(pal,letra)<<" .";
		cout<<endl<<endl;
	}
	else
	{
		cout<<"\nNao ha ocorrencia da letra na palavra, entao indice eh -1."<<endl<<endl;
	}
    return 0;
}
int ocor(string f,char g)
{
    int tam,i,n=-1;
	tam = f.size();
    for(i=0;i<tam;i++)
    {
		if(f[i]!=' ')
		{
			n++;
		}
        if (f[i]==g)
        {
            return n;
        }
    }
	return -1;
}
