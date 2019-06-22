#include <iostream>
using namespace std;
int main()
{
    int idade;
    cout<<"Entre com a idade de uma pessoa:\n";
    cin>>idade;

    if (idade>0){
        if (idade<=10)
            cout<<"O valor da mensalidade do plano de saude eh de R$30,00.";
        if (idade>10 && idade <=29)
            cout<<"O valor da mensalidade do plano de saude eh de R$60,00.";
        if (idade>29 && idade <=45)
            cout<<"O valor da mensalidade do plano de saude eh de R$120,00.";
        if (idade>45 && idade <=59)
            cout<<"O valor da mensalidade do plano de saude eh de R$150,00.";
        if (idade>59 && idade <=65)
            cout<<"O valor da mensalidade do plano de saude eh de R$250,00.";
        if (idade>65)
            cout<<"O valor da mensalidade do plano de saude eh de R$400,00.";
    }
    else{
        cout<<"Idade invalida, favor tentar novamente!";
    }
    return 0;
}
