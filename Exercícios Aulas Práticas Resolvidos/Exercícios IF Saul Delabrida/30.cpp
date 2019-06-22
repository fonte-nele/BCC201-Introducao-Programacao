#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Digite 03 valores para verificar se pode formar um triangulo:\n";
    cin>>A>>B>>C;

    if (A<(B+C) && B<(A+C) && C<(A+B)){
        if (A==B && B==C)
            cout<<"Pode formar um triangulo equilatero."<<endl;
        if (A!=B && A!=C && B!=C)
            cout<<"Pode formar um triangulo escaleno."<<endl;
        if (A==B || A==C || B==C)
            cout<<"Pode formar um triangulo isosceles."<<endl;
    }
    else{
        cout<<"Estes valores nao podem formar um triangulo.";
    }
    return 0;
}
