#include<iostream>
#include<string>
using namespace std;

string limpeza(string a,char b);
int main()
{
    string pal,a;
    char letra;
    cout<<"\nInsira uma palavra: "<<endl;
    getline(cin,pal);
    cout<<"\nInsira uma letra para ser retirada da palavra: "<<endl;
    cin>>letra;
    a = limpeza(pal,letra);
    cout<<"\nA nova palavra com a retirada da letra "<<letra<<" eh: "<<a;
	cout<<endl<<endl;
    return 0;
}

string limpeza (string x,char z)
{
    string novo;
	int tam;
	tam = x.size();
    for(int i=0;i<tam;i++)
    {
        while(x[i] == z)
        {
            x.erase(i,1);
            novo = x;
        }
    }
    return novo;
}