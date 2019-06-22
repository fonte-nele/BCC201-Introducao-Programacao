#include<iostream>
#include<string>
using namespace std;

string troca(string,char,char);
int main()
{
    string pal,a;
    char letra1,letra2;
    cout<<"\nInsira uma palavra: "<<endl;
    getline(cin,pal);
    cout<<"\nInsira uma letra presente na palavra:"<<endl;
    cin>>letra1;
	cout<<"\nInsira uma letra que deseja colocar no lugar da primeira:"<<endl;
	cin>>letra2;
    a = troca(pal,letra1,letra2);
    cout<<"\nA nova palavra com a troca dos caracteres eh:\n\n"<<a;
	cout<<endl;
    return 0;
}

string troca (string x,char z,char troca)
{
	int tam;
	tam = x.size();
    for(int i=0;i<tam;i++)
    {
        if(x[i]==z)
		{
			x[i]=troca;
		}
    }
    return x;
}
