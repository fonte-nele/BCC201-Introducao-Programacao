#include <iostream>
using namespace std;
int main()
{
    double alt1,alt2,tempo=0;
    alt1 = 1.50;
    alt2 = 1.10;


    while (alt1>alt2)
    {
        alt1 = alt1 + 0.02;
        alt2 = alt2 + 0.03;
        tempo = tempo +1;
    }
    cout<<"O tempo necessario para que a altura de Juca seja maior que a de Chico eh de "<<tempo<<" anos.";
    return 0;

}
