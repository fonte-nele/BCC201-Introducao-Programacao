#include <iostream>
using namespace std;
int main()
{
    double tempo=0,massa;
    cout<<"Digite a massa do material radioativo:\n";
    cin>>massa;

    while (massa>=0.10)
    {
        massa = massa - massa*0.25;
        tempo = tempo + 1;
    }
    cout<<"O tempo necessario para atingir 0,10g foi de "<<(tempo*30) / 60<<" minutos.";

    return 0;
}
