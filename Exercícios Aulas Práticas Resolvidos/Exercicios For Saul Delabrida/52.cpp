#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,fat=1;
    double x,sen=0;
    cout<<"Digite o valor de X:\n";
    cin>>x;
    for(i=1;i<=15;i++)
    {
        if(x!=0)
        {
            if(i%2==0)
            {
                sen = sen - pow(x,(2*i-1))/fat;
            }
            else
            {
                sen = sen + pow(x,(2*i-1))/fat;
            }
        }
        fat=fat*(2*i)*(2*i+1);
    }
    cout<<"O valor do seno de X eh: "<<sen;
    return 0;
}
