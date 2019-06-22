#include <iostream>
using namespace std;
int main()
{
    double peso,grav;
    int plan;
    cout<<"Qual eh o peso de um objeto na Terra?\n";
    cin>>peso;
    cout<<"Em qual planeta(codigo) voce quer saber o peso: 1-MERCURIO, 2-VENUS, 3-MARTE, 4-JUPITER, 5-SATURNO, 6-URANO?\n";
    cin>>plan;

    switch(plan)
    {
        case 1:
            grav = peso * 0.37;
            cout<<"O peso no planeta MERCURIO eh: "<<grav;break;

        case 2:
            grav = peso * 0.88;
            cout<<"O peso no planeta VENUS eh: "<<grav;break;

        case 3:
            grav = peso * 0.38;
            cout<<"O peso no planeta MARTE eh: "<<grav;break;

        case 4:
            grav = peso * 2.64;
            cout<<"O peso no planeta JUPITER eh: "<<grav;break;

        case 5:
            grav=peso*1.15;
            cout<<"O peso no planeta SATURNO eh: "<<grav;break;

        case 6:
            grav=peso*1.17;
            cout<<"O peso no planeta URANO eh: "<<grav;break;

        default:
            cout<<"Nao ha planeta com esse codigo digitado, favor tentar novamente.";break;

    }
    return 0;
}
