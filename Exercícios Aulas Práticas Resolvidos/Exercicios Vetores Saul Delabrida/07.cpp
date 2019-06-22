#include <iostream>
using namespace std;
int main ()
{
	int vetor[50],i, y=0;
	cout << "Vetor numeros pares:\n";

	for(i=0; i<=49; i++)
	{
		vetor[i] = y+2;
		y=y+2;
		cout<<vetor[i]<<endl;
	}
	return 0;
}
