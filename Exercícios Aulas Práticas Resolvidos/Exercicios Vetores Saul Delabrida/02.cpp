#include <iostream>
using namespace std;
int main ()
{
	int vetor [100], i;
	cout << "Valores armazenados no vetor:\n";

	for (i=1; i<=100; i++)
    {
		vetor [i]=i;
        cout << vetor[i]<<endl;;
	}
	return 0;
}
