#include <iostream>
using namespace std;
int main()
{
    int idade,sexo,quant=0, totmas=0,totfem=0;
    double soma=0;
    cout<<"Digite a idade da pessoa:\n";
    cin>>idade;


    while (idade>0)
    {
        cout<<"A pessoa eh de qual sexo? 0-Masculino e 1-Feminino\n";
        cin>>sexo;

        if (sexo ==0 || sexo ==1)
        {
            soma=soma  + idade;
            quant=quant + 1;
            if (sexo ==0)
            {
                totmas = totmas +1;
            }
            if (sexo ==1)
            {
                if (idade>30 && idade<45)
                {
                    totfem = totfem +1;
                }
            }
        }
        else
        {
            cout<<"Codigo de escolha de sexo invalido.FAVOR TENTAR NOVAMENTE.\n";continue;
        }

        cout<<"Digite a idade da pessoa:\n";
        cin>>idade;
    }
    cout<<"A media das idades eh: "<<soma/quant<<endl;
    cout<<"A quantidade de pessoas do sexo masculino eh: "<<totmas<<endl;
    cout<<"A quantidade de pessoas do sexo feminino entre 30 e 45 anos eh: "<<totfem<<endl;
    return 0;
}
