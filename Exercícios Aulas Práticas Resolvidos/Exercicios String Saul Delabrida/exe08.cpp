#include<iostream>
#include<string>
using namespace std;

int quant_pal(string);
int main()
{
    string pal;
    cout<<"\nDigite uma frase:"<<endl;
    getline(cin,pal);
    cout<<"\nA quantidade de palavras na string eh: "<<quant_pal(pal)<<endl<<endl;
    return 0;
}
int quant_pal(string f)
{
    int tam,i,n=1;
	tam = f.size();
    for(i=0;i<tam;i++)
    {
		if(f[i]==' ' || f[i]==',')
		{
			n++;
		}
    }
	return n;
}
