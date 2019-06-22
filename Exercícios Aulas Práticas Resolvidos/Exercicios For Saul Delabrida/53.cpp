#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,fat=1;
    double x,cos=0;
    cout<<"Digite o valor de X:\n";
    cin>>x;

    for(i=1;i<=15;i++)
    {
        if(x!=0)
        {
            if(i%2==0)
            {
                cos=cos - pow(x,(2*i-2));
            }
            else
            {
                cos=cos + pow(x,(2*i-2));
            }
        }
        fat=fat*(2*i-1)*(2*i);
    }
    cout<<"O valor do cosseno de X eh: "<<cos;
    return 0;
}
