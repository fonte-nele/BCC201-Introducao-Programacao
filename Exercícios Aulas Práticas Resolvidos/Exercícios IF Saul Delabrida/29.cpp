#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Digite tres valores para verificar se eh um triangulo:\n";
    cin>>A>>B>>C;

    if(A<(B+C) && B<(A+C) && C<(A+B)){
        cout<<"Estes valores podem formar um triangulo.";
    }
    else{
        cout<<"Estes valores nao formam um triangulo.";
    }
    return 0;
}
