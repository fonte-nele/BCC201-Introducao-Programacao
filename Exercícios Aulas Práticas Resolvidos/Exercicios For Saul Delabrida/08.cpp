#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Os primeiros 100 numeros impares:\n";
    for(n=1;n<200;n++)
        if(n%2!=0)
        {
            cout<<n<<endl;
        }
    return 0;
}
