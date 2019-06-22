#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265358979323846264338327950288

int main (){

    double a, b, c;
    bool eh_triangulo=false, eh_retangulo=false;

    cout << "Entre com os valores de A, B e C:\n";
    cin >> a >> b >> c;

    if (a <= b+c && b <= a+c && c <= a+b)
        eh_triangulo = true;

        if (eh_triangulo){
            cout << "Os lados formam um triangulo.\n";


        double maior, cateto1, cateto2;

        if (a>=b && a>=c){
        maior = a;
        cateto1 = b;
        cateto2 = c;
        }

        else if (b>=a && b>=c){
        maior = b;
        cateto1 = a;
        cateto2 = c;
        }

        else if (c>=b && c>=a){
        maior = c;
        cateto1 = a;
        cateto2 = b;
        }

            if (pow(maior,2) == pow(cateto1,2) + pow(cateto2,2))
            eh_retangulo=true;

                if (eh_retangulo){
                    cout << "E formam um triangulo retangulo, com os seguintes angulos:\n";
                    cout << "Angulo 1: 90 graus\n";

                    double x, relacao, graus;
                    relacao = cateto1/maior;
                    x = acos(relacao);
                    graus = (x*180)/PI;

                    cout << "Angulo 2: "<< graus << " graus" << endl;
                        relacao = cateto2/maior;
                        x = acos(relacao);
                        graus = (x*180)/PI;

                        cout << "Angulo 3: " << graus << " graus" << endl;

}
else
cout << "Mas nao formam um triangulo retangulo.\n";

}

else
cout << "Os lados nao formam um triangulo.\n";

return 0;

}
