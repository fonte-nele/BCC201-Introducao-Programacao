#include<iostream>
using namespace std;
int main()
{
    int i,num,menor;

    for(i=1;i<=num;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>num;
        menor = num;
        if (num<menor)
        {
            menor = num;
        }
    }
    cout<<"O valor menor eh: "<<menor<<endl;
    return 0;
}
