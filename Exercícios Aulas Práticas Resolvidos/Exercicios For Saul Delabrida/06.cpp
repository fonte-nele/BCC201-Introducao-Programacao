#include <iostream>
using namespace std;
int main()
{
    int n;
    for(n=1;n<=500;n++)
        if (n %5==0)
        {
            cout<<"Multiplos de 5: ";
            cout<<n<<endl;
        }
    return 0;
}
