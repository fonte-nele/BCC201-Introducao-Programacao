#include <iostream>
using namespace std;
int main()
{
    int num, quant=0;
    double tot3=0;
    cout<<"Digite um numero:\n";
    cin>>num;

    while (num>0)
    {
        if (num % 3 ==0)
        {
            quant ++;
            tot3= num + tot3;
        }

        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"A media dos numeros multiplos de 3 eh: "<<tot3 / quant;
    return 0;
}
