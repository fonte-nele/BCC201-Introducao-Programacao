#include <iostream>
#include <string>
using namespace std;
void strpack(string b)
{
    string a;
    int o=0, p=0, f;
    f=b.size();
    a=b.at(o);
    for(o=1, p=0; o<f ;o++)
    {

        if(b.at(o) != a.at(p))
        {
            a= a + b.at(o);
            p++;
        }
    }
    cout<<"A frase ficou:\n"<<a;
}
int main()
{
    string carac;
    cout<<"Digite os caracteres:\n";
	getline (cin,carac);
    strpack(carac);

    return 0;
}
