#include <iostream>
using namespace std;
int main()
{
    int v, *p;
    v=4;
    p=&v;
    *p=2**p;
    cout<<"\nValor:% "<<v;
    return 0;
}
//O programa irá imprimir 8, já que v tinha valor 04.
//Mas seu ponteiro foi repassado para p.
//E o ponteiro P teve seu valor multiplicado por 2.
//Fazendo com que alterasse a variavel v para 08.
//Tipico caso de memoria dinamica e ponteiros.
