#include<iostream>
#include<string>
using namespace std;
string Inv(string);
int main()
{
    string cad1, cad2;
    cout<<"\nInsira uma string:\n";
    getline(cin,cad1);
    cad2 = Inv(cad1);
    cout<<"\nA string digitada foi: "<<cad1<<endl;
    cout<<"\nO inverso dessa string eh: "<<cad2;
	cout<<endl;
    return 0;
}

string Inv(string cad)
{
    int n=cad.size(), i;
    string cadinv;
    for(i=n-1;i>=0;i--)
	{
        cadinv += cad[i];
	}
    return cadinv;
}
