#include <iostream>
using namespace std;
int main()
{
	int vetor [100], i;
	cout << "Vetor de 100 a 200:\n";

	for (i=100; i<=200; i++)
	{
		vetor [i] = i;
		cout <<vetor[i]<< endl;
	}
	return 0;
}
