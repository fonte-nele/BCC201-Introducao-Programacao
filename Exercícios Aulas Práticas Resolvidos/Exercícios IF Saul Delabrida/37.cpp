#include <iostream>
using namespace std;
int main()
{
    double idade, peso,gotas;
    cout<<"Digite a idade do paciente:\n";
    cin>>idade;
    cout<<"Digite o peso do paciente:\n";
    cin>>peso;

    if (peso>=5){
        if (idade>=12 && peso<60){
            gotas = 1.75 * 20;
            cout<<"O paciente tem uma dosagem de 875mg com "<<gotas<<" gotas.";
        }
        if (idade>=12 && peso>=60){
            gotas = 2 * 20;
            cout<<"O paciente tem uma dosagem de 1000mg com "<<gotas<<" gotas.";
        }
        if (idade<12 && peso>=5 && peso<=9){
            gotas = 0.25 * 20;
            cout<<"O paciente tem sua dosagem de 125mg com "<<gotas<<" gotas.";
        }
        if (idade<12 && peso>9 && peso<=16){
            gotas = 0.5 * 20;
            cout<<"O paciente tem sua dosagem de 250mg com "<<gotas<<" gotas.";
        }
        if (idade<12 && peso>16 && peso<=24){
            gotas = 0.75 * 20;
            cout<<"O paciente tem sua dosagem de 375mg com "<<gotas<<" gotas.";
        }
        if (idade<12 && peso>24 && peso<=30){
            gotas = 1 * 20;
            cout<<"O paciente tem sua dosagem de 500mg com "<<gotas<<" gotas.";
        }
        if (idade<12 && peso>30){
            gotas = 1.5 * 20;
            cout<<"O paciente tem sua dosagem de 750mg com "<<gotas<<" gotas.";
        }
    }
        else{
                cout<<"O paciente nao pode tomar esse medicamento devido ao seu peso.";
            }


    return 0;
}
