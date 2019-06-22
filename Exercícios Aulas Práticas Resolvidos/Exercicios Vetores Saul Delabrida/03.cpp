#include <iostream>
using namespace std;
int main ()
{
	int vetor [100], i;
	cout << "Vetor decrescente:\n ";

	for (i=100; i>0; i--)
	{
		vetor [i]=i;
		cout <<vetor[i]<<endl;
	}
	return 0;
}
