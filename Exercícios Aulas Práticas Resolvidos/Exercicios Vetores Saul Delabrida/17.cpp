#include <iostream>
using namespace std;
int main()
{
	int i;
	int v[50]; v[1]=v[0]=1;
	for (i=2; i< 50; i++)
	{
		v[i] = v[i-1] + v[i-2];
	}
	cout<<"A serie de Fibonacci eh:\n";
	for (i=0; i<50; i++)
	{
		cout << v[i] <<endl;
	}
	return 0;
}
