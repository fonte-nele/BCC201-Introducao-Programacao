#include <iostream>
using namespace std;
int main()
{
    int dia;
    cout<<"Digite um numero de 1 a 7 para representar um dia da semana:\n";
    cin>>dia;
    switch(dia)
    {
        case 1:
            cout<<"Numero digitado corresponde a domingo\n";break;
        case 2:
            cout<<"Numero digitado corresponde a segunda-feira\n";break;
        case 3:
            cout<<"Numero digitado corresponde a terca-feira\n";break;
        case 4:
            cout<<"Numero digitado corresponde a quarta-feira\n";break;
        case 5:
            cout<<"Numero digitado corresponde a quinta-feira\n";break;
        case 6:
            cout<<"Numero digitado corresponde a sexta-feira\n";break;
        case 7:
            cout<<"Numero digitado corresponde a sabado\n";break;
        default:
            cout<<"Nao existe dia da semana com esse numero\n";break;
    }

    return 0;
}
