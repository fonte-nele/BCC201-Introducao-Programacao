#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numb=0,numa=0,i;
    string vet;

    cout<<"Digite a frase contendo 80 caracteres:\n";
    cin>>vet;
    for(i=0;i<80;i++)
    {
        if (vet[i] == ' ')
        {
            numb++;
        }
        if (vet[i] == 'a' || vet[i] == 'A')
        {
            numa++;
        }
    }
    cout<<"Existem "<<numb<<" espacos em branco na frase.\n";
    cout<<"Existem "<<numa<<" letras A na frase.";
    return 0;
}
