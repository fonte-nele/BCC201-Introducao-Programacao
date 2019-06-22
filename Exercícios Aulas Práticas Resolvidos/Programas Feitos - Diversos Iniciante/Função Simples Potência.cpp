#include <iostream>
using namespace std;

int pot (int a, int b)
{
	cout << a ^ b;
	cin >> pot;
	return pot;
}

int main ()
{
	int num1, num2;
	cout << "Entre com dois numeros: ";
	cin >> num1 >> num2;
	pot (num1, num2);
	cout << "O resultado e: " << pot (num1, num2);
	return 0;
}