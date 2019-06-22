#include<iostream>
using namespace std;
int par(int num);
int main()
{
    int i,vet[12];
    for(i=0;i<12;i++)
    {
        cout<<"Digite um numero:\n";
        cin>>vet[i];
        if(par(vet[i])==1)
        {
            cout<<"O numero "<<vet[i]<<" eh PAR."<<endl;
        }
        else
        {
            cout<<"O numero "<<vet[i]<<" eh IMPAR."<<endl;
        }
    }
}
int par (int num)
{
    if (num%2==0)
        return 1;
    else
        return 0;
}
