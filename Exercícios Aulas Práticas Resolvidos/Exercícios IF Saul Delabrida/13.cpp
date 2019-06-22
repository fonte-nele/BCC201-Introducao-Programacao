#include <iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    cout <<"Digite quatro valores:\n";
    cin >> A>>B>>C>>D;

    if (A>B && A>C && A>D)
        cout << "O maior numero eh: "<<A<<endl;

    if (B>A && B>C && B>D)
        cout <<"O maior numero eh: "<<B<<endl;

    if (C>A && C>B && C>D)
        cout << "O maior numero eh: "<<C<<endl;

    if (D>A && D>B && D>C)
        cout <<"O maior numero eh: "<<D<<endl;

    if (A<B && A<C && A<D)
        cout <<"O menor numero eh: "<<A<<endl;

    if (B<A && B<C && B<D)
        cout <<"O menor numero eh: "<<B<<endl;

    if (C<A && C<B && C<D)
        cout <<"O menor numero eh: " <<C<<endl;

    if (D<A && D<B && D<C)
        cout <<"O menor numero eh: "<<D<<endl;
    return 0;
}
