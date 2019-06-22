#include <iostream>
using namespace std;
int main()
{
    int A,B,C,MAIOR,MENOR,INTER;
    cout<< "Digite tres valores:\n";
    cin>>A>>B>>C;

    if(A>B && A>C && B>C)
    {
        MAIOR = A;
        INTER = B;
        MENOR = C;
    }
    if (A>B && A>C && C>B)
    {
        MAIOR = A;
        INTER = C;
        MENOR = B;
    }
    if (B>A && B>C && A>C)
    {
        MAIOR = B;
        INTER = A;
        MENOR = C;
    }
    if (B>A && B>C && C>A)
    {
        MAIOR = B;
        INTER = C;
        MENOR = A;
    }
    if (C>A && C>B && A>B)
    {
        MAIOR = C;
        INTER = A;
        MENOR = B;
    }
    if (C>A && C>B && B>A)
    {
        MAIOR = C;
        INTER = B;
        MENOR = A;
    }

    cout<<"Valor maior: "<<MAIOR<<endl;
    cout<<"Valor inter: "<<INTER<<endl;
    cout<<"Valor menor: "<<MENOR<<endl;

    return 0;
}
