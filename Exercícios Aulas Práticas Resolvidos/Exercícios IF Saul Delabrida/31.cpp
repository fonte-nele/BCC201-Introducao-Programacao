#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Digite tres valores para verificar se pode formar um triangulo:\n";
    cin>>A>>B>>C;

    if (A<(B+C) && B<(A+C) && C<(A+B)){
        cout<<"Os valores digitados formam um triangulo."<<endl;

            if (A*A == (B*B + C*C) || B*B == (A*A + C*C) || C*C == (A*A +B*B))
                cout<<"Triangulo Retangulo."<<endl;
            if (A*A > (B*B + C*C) || B*B > (A*A + C*C) || C*C > (A*A + B*B))
                cout<<"Triangulo Obtusangulo."<<endl;
            if (A*A < (B*B + C*C) && B*B < (A*A + C*C) && C*C < (A*A + B*B))
                cout<<"Triangulo Acutangulo."<<endl;
    }
    else{
        cout<<"Estes valores nao podem formar um triangulo."<<endl;
    }
    return 0;
}
