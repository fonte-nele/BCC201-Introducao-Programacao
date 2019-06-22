#include <iostream>
using namespace std;
int main ()
{
	int vetor [100], i;
	cout << "Vetor multiplos de 5:\n";

	for (i=1; i<=100; i++)
	{
		vetor[i]=(5*i);
		cout <<vetor[i]<<endl;
	}
	return 0;
}
