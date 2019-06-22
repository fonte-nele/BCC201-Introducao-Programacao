#include <iostream>
#include <string>
using namespace std;

bool palin(string);
int main()
{
    string palavra;
    int resultado;
    cout<<"\nEntre com uma palavra: "<<endl;
    getline(cin,palavra);
    resultado = palin(palavra);
    if(resultado)
    {
        cout<<"\nA palavra eh palindroma com resultado: "<<resultado;
		cout<<endl;
    }
    else
    {
        cout<<"\nA palavra nao eh palindroma com resultado: "<<resultado;
		cout<<endl;
    }
    return 0;
}

bool palin(string p)
{
    int i,tamanho;
    tamanho = p.size();
    string contrario;

    for(i=tamanho-1; i>=0; i--)
	{
		contrario += p[i];
	}

    if(p == contrario)
    {
        return true;
    }
	else
	{
		return false;
	}
}
