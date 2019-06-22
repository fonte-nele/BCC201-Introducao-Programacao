#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Digite o numero de termos da serie:\n";
    cin>>num;
    cout<<"A serie eh:\n";

    for(i=1;i<=num;i++)
    {
        if(i%3==1)
        {
            cout<<(i/3)+1<<endl;
        }
        else
            if(i%3==2)
        {
            cout<<(i/3)+4<<endl;
        }
        else
        {
            cout<<(i/3)+3<<endl;
        }
    }
    return 0;
}
