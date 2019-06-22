#include <iostream>
using namespace std;
int main()
{
    int num, *ptr, *ptr2;
    cout<<"Digite um valor para a variavel num:\n";
    cin>>num;
    ptr = &num;
    ptr2 = ptr;
    //cout<<"Digite um valor para ptr:\n";
    //cin>>*ptr;
    //cout<<"Digite um valor para ptr2:\n";
    //cin>>*ptr2;
    cout<<"O valor de ptr eh: "<<*ptr<<endl;
    cout<<"O valor de ptr2 eh: "<<*ptr2<<endl;
    cout<<"O valor de num eh: "<<num;
    return 0;
}
//Quando digitamos um valor para num, este valor sera atribuido a ptr e ptr2.
//Quando alteramos o valor de ptr, o mesmo valor será atribuido a num e ptr2.
//Quando alteramos o valor de ptr2, o mesmo valor será atribuido a num e ptr.
