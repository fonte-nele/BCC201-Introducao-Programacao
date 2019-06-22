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
    cout<<"\nO numero de ocorrencia da letra "<<letra<<" na palavra "<<pal<<" eh de: "<<ocor(pal,letra)<<" vezes.";
	cout<<endl<<endl;
    return 0;
}
int ocor(string f,char g)
{
    int tam,quant,i;
    quant=0;
	tam = f.size();
    for (i=0;i<tam;i++)
    {
        if (f[i]==g)
        {
            quant++;
        }
    }
    return quant;
}
