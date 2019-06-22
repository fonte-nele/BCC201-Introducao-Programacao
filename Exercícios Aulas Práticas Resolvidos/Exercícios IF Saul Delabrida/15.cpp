#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Digite tres valores:\n";
    cin>>A>>B>>C;

    if(A>B && A>C && B>C)
    {
        cout<<"A ordem descendente eh: "<<A<<" ; "<<B<<" ; "<<C;
    }
    if (A>B && A>C && C>B)
    {
        cout<<"A ordem descendente eh: "<<A<<" ; "<<C<<" ; "<<B;
    }
    if (B>A && B>C && A>C)
    {
         cout<<"A ordem descendente eh: "<<B<<" ; "<<A<<" ; "<<C;
    }
    if (B>A && B>C && C>A)
    {
         cout<<"A ordem descendente eh: "<<B<<" ; "<<C<<" ; "<<A;
    }
    if (C>A && C>B && A>B)
    {
         cout<<"A ordem descendente eh: "<<C<<" ; "<<A<<" ; "<<B;
    }
    if (C>A && C>B && B>A)
    {
        cout<<"A ordem descendente eh: "<<C<<" ; "<<B<<" ; "<<A;
    }
    return 0;
}
