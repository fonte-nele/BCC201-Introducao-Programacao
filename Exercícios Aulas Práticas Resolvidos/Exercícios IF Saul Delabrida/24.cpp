#include <iostream>
using namespace std;
int main()
{
    int idade;
    cout<<"Digite a idade da pessoa:\n";
    cin>>idade;

    if (idade>0){
        if (idade<16)
            cout<<"Nao eleitor.";

        if (idade>=16 && idade<18 || idade>=65)
            cout<<"Eleitor facultativo.";

        if (idade >=18 && idade <65)
            cout<<"Eleitor obrigatorio.";
    }
    else{
        cout<<"Idade invalida.";
    }
    return 0;
}
