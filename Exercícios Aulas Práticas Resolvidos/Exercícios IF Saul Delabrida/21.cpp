#include <iostream>
using namespace std;
int main()
{
    double peso,altura, imc;
    cout<<"Qual o peso para o calculo do IMC?\n";
    cin>>peso;
    cout<<"Qual a altura para o calculo do IMC?\n";
    cin>>altura;
    imc = peso / (altura * altura);

    cout<<"O IMC eh: "<<imc<<endl;

    if (imc <20){
        cout<<"A situacao do peso eh: Abaixo do peso.";
    }
    if (imc >=20 && imc <25){
        cout<<"A situacao do peso eh: Peso normal.";
    }
    if (imc >=25 && imc<30){
        cout<<"A situacao do peso eh: Sobre peso.";
    }
    if (imc >=30 && imc<40){
        cout<<"A situacao do peso eh: Obeso.";
    }
    if (imc >=40){
        cout<<"A situacao do peso eh: Obeso Morbido.";
    }
    return 0;
}
