#include <iostream>
using namespace std;
void troca3(int *a,int *b,int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
    cout<<"\nO valor de A depois da troca com B eh: "<<*a<<endl;
    cout<<"O valor de B depois da troca com C eh: "<<*b<<endl;
    cout<<"O valor de C depois da troca com A eh: "<<*c<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Digite o valor de A, B e C, respectivamente:\n";
    cin>>a>>b>>c;
    cout<<"Valor A digitado: "<<a<<endl;
    cout<<"Valor B digitado: "<<b<<endl;
    cout<<"Valor C digitado: "<<c<<endl;
    troca3(&a,&b,&c);
    return 0;
}
