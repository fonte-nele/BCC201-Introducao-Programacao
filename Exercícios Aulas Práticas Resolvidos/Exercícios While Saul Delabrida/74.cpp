#include <iostream>
using namespace std;
int main()
{
    double A,B;
    int tempo=0;
    A = 0;
    B = 2000;

    while (A<B)
    {
        A = A + 10;
        B = B - 15;
        tempo = tempo +1;
    }
     cout<<"Foram necessarios "<<tempo<<" segundos para os dois ciclistas se encontrarem no mesmo ponto.\n";
     cout<<"O ciclista A percorreu "<<A<<" metros.\n";
     cout<<"O ciclista B percorreu "<<2000-B<<" metros.";
     return 0;
}
