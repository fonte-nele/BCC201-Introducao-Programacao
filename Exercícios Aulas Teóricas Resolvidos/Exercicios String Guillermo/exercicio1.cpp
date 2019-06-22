#include <iostream>
#include <string>
using namespace std;
void troca ()
{
	int pos=0;
    string frase, palavra, palavra1;
	cout<<"Insira uma frase:\n";
	getline (cin,frase);
	cout<<"Digite uma palavra presente na frase:\n";
	cin>>palavra;
    cout<<"Por qual deseja substituir?\n";
    cin>>palavra1;
	while (pos >=0)
	{
		pos = frase.find (palavra,0);
		if (pos>=0)
		{
			frase.replace (pos, palavra.size(), palavra1);
		}
	}
	cout<<"Nova Frase:\n"<<frase;
}
int main ()
{
    troca ();
    return 0;
}
