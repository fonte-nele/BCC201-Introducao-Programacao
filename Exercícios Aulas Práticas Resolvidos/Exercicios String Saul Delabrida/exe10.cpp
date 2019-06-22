#include<iostream>
#include<string>
using namespace std;
string conc(string a,string b)
{
	return a+b;
}
int main()
{
	string n1,n2;
	cout<<"\nDigite a primeira string:"<<endl;
	getline(cin,n1);
	cout<<"\nDigite a segunda string:"<<endl;
	getline(cin,n2);
	cout<<"\nA concatenacao das duas strings eh:"<<endl<<endl;
	cout<<conc(n1,n2)<<endl;
	return 0;
}