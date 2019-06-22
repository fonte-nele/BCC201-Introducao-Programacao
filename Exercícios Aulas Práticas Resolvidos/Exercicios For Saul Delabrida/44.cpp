#include <iostream>
using namespace std;
int main()
{
    int num,i,impar;
    cout<<"Digite o numero de termos da serie:\n";
    cin>>num;
    cout<<"A serie eh:\n";

    for(i=1;i<=num;i++)
    {
        impar = i*i;
        cout<<impar<<endl;
    }
    return 0;
}
