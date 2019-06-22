#include <iostream>
#include <string>
using namespace std;
void codificar(string a)
{
    string b;
    char f;
    int j, l;
    l=a.size();
    for(j=0; j<l ;j++)
    {
         if(a.at(j) != ' ' && a.at(j) != 'z')
        {
            f= a.at(j)+1;
            b= b + f;
        }
        else
            if (a.at(j) == 'z')
            {
                f= 'a';
                b= b + f;
            }
            else
            {
                f= a.at(j);
                b= b + f;
            }
    }
    cout<<"A frase ficou:\n"<<b;
}
int main()
{
    string carac;
    cout<<"Digite a frase para conversao:\n";
	getline (cin,carac);
    codificar(carac);

    return 0;
}
