#include <iostream>
using namespace std;
int main()
{
    int num1,num2,mmc=1,div=2;
    cout<<"Digite dois numeros para calcular o M.M.C.: "<<endl;
    cin>>num1>>num2;

    while (div<=num1 || div<=num2)
    {
        if (num1%div==0 || num2%div==0)
        {
            mmc = mmc * div;
        }
        if (num1%div==0)
        {
            num1 = num1 / div;

        if (num2%div==0)
        {
            num2 = num2 / div;
        }
            div--;
        }
        div++;
    }
    cout<<"O MMC eh: "<<mmc;
    return 0;
}
