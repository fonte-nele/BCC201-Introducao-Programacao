#include <iostream>
using namespace std;
int main()
{
    double A,B,tempo=0;
    A = 0;
    B = 400000;

    while (A<B)
    {
        A = A + 30;
        B = B - 40;
        tempo = tempo +1;
    }
    cout<<"O tempo necessario para que as duas locomotivas se encontrem eh de "<<tempo /60<<" minutos.\n";
    cout<<"A locomotiva A percorreu "<<A<<" metros.\n";
    cout<<"A locomotiva B percorreu "<<400000-B<<" metros.";
    return 0;
}
