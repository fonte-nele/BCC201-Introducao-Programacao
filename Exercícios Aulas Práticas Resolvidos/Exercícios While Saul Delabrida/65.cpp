#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout<<"Digite um numero:\n";
    cin>>num;

    while (num %6!=0)
    {
        cout<<"O quadrado deste numero eh: "<<pow(num,2)<<endl;
        cout<<"Digite um numero:\n";
        cin>>num;
    }
    cout<<"O quadrado deste numero eh: "<<pow(num,2);
    return 0;
}
