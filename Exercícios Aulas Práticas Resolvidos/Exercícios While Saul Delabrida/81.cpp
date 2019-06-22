#include <iostream>
using namespace std;
int main()
{
    int idade,soma1=0,soma2=0;
    cout<<"Digite a idade:\n";
    cin>>idade;

    while (idade>0)
    {
        if (idade<21)
        {
            soma1 = soma1 +1;
        }
        if (idade>50)
        {
            soma2 = soma2 +1;
        }

        cout<<"Digite a idade:\n";
        cin>>idade;
    }
    cout<<"A quantidade de pessoas com menos de 21 anos eh: "<<soma1<<endl;
    cout<<"A quantidade de pessoas com mais de 50 anos eh: "<<soma2<<endl;
    return 0;
}
