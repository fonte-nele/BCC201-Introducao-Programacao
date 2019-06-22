#include <iostream>
using namespace std;
void mostrar_consoante(char *v, int num);
int main()
{
    int i;
    char *v;
    v = new char [8];
    cout<<"Insira 08 caracteres:\n\n";
    for(i=0;i<8;i++)
    {
        cout<<"Insira o "<<i+1<<" caracter:\n";
        cin>>v[i];
    }
    mostrar_consoante(v,8);
    delete [] v;
    return 0;
}

void mostrar_consoante(char *v, int num)
{
    int i,cont=0;
    for (i=0;i<num;i++)
    {
        if(tolower(v[i])!='a' && tolower(v[i])!= 'e' && tolower(v[i])!= 'i' && tolower(v[i]) != 'o' && tolower(v[i]) != 'u')
        {
            cont++;
        }
    }
    cout<<"\nA quantidade de consoantes nesses 08 caracteres sao: "<<cont;
}
