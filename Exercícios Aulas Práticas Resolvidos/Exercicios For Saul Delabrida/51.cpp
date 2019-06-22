#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    double s=0,pi;

    for(i=1; i<=51; i++)
    {
        if (i%2==0)
        {
            s =s -1 / pow((2*i -1),3);
        }
        else
        {
            s =s +1 / pow((2*i -1),3);
        }
    }
    pi = pow((s*32),(1/3));
    cout<<"O valor de PI eh: "<<pi;
    return 0;
}
