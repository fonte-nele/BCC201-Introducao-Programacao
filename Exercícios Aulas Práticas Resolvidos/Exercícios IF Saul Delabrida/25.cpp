#include <iostream>
using namespace std;
int main()
{
    int idade;
    cout<<"Digite a idade do(a) nadador(a):\n";
    cin>>idade;

    if (idade>=5){
        if (idade>=5 && idade <8)
            cout<<"Categoria Infantil A.";
        if (idade>=8 && idade <11)
            cout<<"Categoria Infantil B.";
        if (idade>=11 && idade <14)
            cout<<"Categoria Juvenil A.";
        if (idade>=14 && idade <18)
            cout<<"Categoria Juvenil B.";
        if (idade >=18)
            cout<<"Categoria Senior.";
    }
    else{
        cout<<"Nao ha categoria para essa idade.";
    }
    return 0;
}
