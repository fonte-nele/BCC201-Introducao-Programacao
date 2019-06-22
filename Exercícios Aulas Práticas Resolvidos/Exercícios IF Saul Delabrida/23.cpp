#include <iostream>
using namespace std;
int main()
{
    int idade;
    cout<<"Digite a idade de uma pessoa:\n";
    cin>>idade;

    if (idade>0){
        if(idade>0 && idade<18)
            cout<<"Menor de idade.";

        if (idade>=18 && idade<65)
            cout<<"Maior de idade.";

        if (idade>=65)
            cout<<"Pessoa idosa.";
    }
    else{
        cout<<"Idade invalida.";
    }
    return 0;
}
