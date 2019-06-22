#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Numeros impares de 01 a 100:\n";
    for (n=1;n<=100;n++)
        if(n%2!=0)
        {
            cout<<n<<endl;
        }
    return 0;
}
