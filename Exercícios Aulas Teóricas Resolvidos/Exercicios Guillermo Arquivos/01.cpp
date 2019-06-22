#include <iostream>
#include <fstream>
#include <cmath>
#define N 5
using namespace std;
int main ()
{
    ifstream entrada;
    ofstream saida;
    entrada.open("arq.txt");
    saida.open("soma.txt");
    int x,y,z,i;
    for(i=0;i<N;i++)
    {
        entrada>>x>>y;
        z = pow(x,2)+pow(y,2);
        saida<<"X= "<<x<<" ,Y= "<<y
            <<" ,Z= "<<z<<endl;
    }
    entrada.close();
    saida.close();
    return 0;
}
