#include <iostream>
using namespace std;
int main()
{
    int mes;
    cout<<"Digite um numero de 1 a 12 para identificar o mes:\n";
    cin>>mes;

    switch(mes)
    {
        case 1:
            cout<<"Mes Janeiro.";break;
        case 2:
            cout<<"Mes Fevereiro.";break;
        case 3:
            cout<<"Mes Marco.";break;
        case 4:
            cout<<"Mes Abril.";break;
        case 5:
            cout<<"Mes Maio.";break;
        case 6:
            cout<<"Mes Junho.";break;
        case 7:
            cout<<"Mes Julho.";break;
        case 8:
            cout<<"Mes Agosto.";break;
        case 9:
            cout<<"Mes Setembro.";break;
        case 10:
            cout<<"Mes Outubro.";break;
        case 11:
            cout<<"Mes Novembro.";break;
        case 12:
            cout<<"Mes Dezembro.";break;
        default:
            cout<<"Mes inexistente com este numero.";break;
    }
    return 0;
}
