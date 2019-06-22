#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream entrada;
    ofstream saida;
    entrada.open("texto.txt");
    saida.open("inverso.txt");
    int i,n=0;
    string v[100];
    while (!entrada.eof())
    {
        if(n>=100)
        {
            break;
        }
        getline(entrada,v[n]);
        n++;
    }
    for(i=n-1;i>=0;i--)
    {
        saida<<v[i]<<endl;
    }
    entrada.close();
    saida.close();
    return 0;
}
