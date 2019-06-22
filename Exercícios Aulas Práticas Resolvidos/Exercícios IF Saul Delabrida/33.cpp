#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cout<<"Digite o valor de X:\n";
    cin>>x;

    if (x<=1){
        cout<<"O valor de f(x) eh 1.";
    }
    if (x>1 && x<=2){
        cout<<"O valor de f(x) eh 2.";
    }
    if (x>2 && x<=3){
        cout<<"O valor de f(x) eh "<<pow(x,2);
    }
    if (x>3){
        cout<<"O valor de f(x) eh "<<pow(x,3);
    }
    return 0;
}
