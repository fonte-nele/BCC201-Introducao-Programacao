#include <iostream>
using namespace std;
int main ()
{
	int vetor [100], i;
	cout << " O vetor decrescente de 200 a 100 eh:\n";

	for (i=200; i>=100; i--)
	{
		vetor[i] = i;
		cout << vetor[i]<<endl;
	}
	return 0;
}
