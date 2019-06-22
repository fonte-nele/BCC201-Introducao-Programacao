#include <iostream>
using namespace std;
int main ()
{
    double *A,*B,*media;
    A = new double;
    B = new double;
    media = new double;
    cout<<"Digite o valor de A:\n";
    cin>>*A;
    cout<<"Digite o valor de B:\n";
    cin>>*B;
    *media = (*A+*B)/2;
    cout<<"\nA media aritmetica dos dois valores digitados eh: ";
    cout<<*media;
    delete [] A;
    delete [] B;
    delete [] media;
    return 0;
}
