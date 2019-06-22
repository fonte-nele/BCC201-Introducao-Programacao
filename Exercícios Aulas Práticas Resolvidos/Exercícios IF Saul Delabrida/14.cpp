#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout << "Entre com tres valores:\n";
    cin>>A>>B>>C;

    if (A<B && A<C && B<C)
    {
        cout <<"A ordem ascendente eh: "<<A<<" ; "<<B<<" ; "<<C<<endl;
    }

    if (A<B && A<C && C<B)
    {
        cout<<"A ordem ascendente eh: "<<A<<" ; "<<C<<" ; "<<B<<endl;
    }
    if (B<A && B<C && A<C)
    {
        cout<<"A ordem ascendente eh: "<<B<<" ; "<<A<<" ; "<<C<<endl;
    }
    if (B<A && B<C && C<A)
    {
        cout<<"A ordem ascendente eh: "<<B<<" ; "<<C<<" ; "<<A<<endl;
    }
    if (C<A && C<B && A<B)
    {
        cout<<"A ordem ascendente eh: "<<C<<" ; "<<A<<" ; "<<B<<endl;
    }
    if (C<A && C<B && B<A)
    {
        cout<<"A ordem ascendente eh: "<<C<<" ; "<<B<<" ; "<<A<<endl;
    }
    return 0;
}
