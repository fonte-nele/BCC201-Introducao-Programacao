#include <iostream>
using namespace std;
int main()
{
    int A,B,tempo;
    A = 5000000;
    B = 7000000;
    tempo = 0;
        while (A<B)
        {
            A =A + A*0.03;
            B =B + B*0.02;
            tempo =tempo + 1;
        }
        cout<<"O tempo necessario foi de "<<tempo<< " anos.";


    return 0;
}
