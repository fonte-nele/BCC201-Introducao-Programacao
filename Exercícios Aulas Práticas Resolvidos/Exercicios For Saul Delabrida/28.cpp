#include <iostream>
using namespace std;
int main()

{
    int num,i,pares=0,impares=0;

    for(i=1;i<=200;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        if (num%2==0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    cout<<"A quantidade de numeros pares digitados foi: "<<pares<<endl;
    cout<<"A quantidade de numeros impares digitados foi: "<<impares;
    return 0;
}
