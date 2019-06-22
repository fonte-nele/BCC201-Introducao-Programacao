#include <iostream>
using namespace std;
int main()
{
    int i,sexo,nmulher=0;
    double altura,maior=0,menor=9999999,vetalt[50],vetsex[50],
            somaturma=0,somamulher=0,mediamulher,mediaturma;
    for(i=0;i<50;i++)
    {
        cout<<"Qual a altura da pessoa?\n";
        cin>>altura;
        cout<<"Qual o sexo? 1-Masculino; 2-Feminino.\n";
        cin>>sexo;
        vetalt[i] = altura;
        vetsex[i] = sexo;
    }
    for(i=0;i<50;i++)
    {
        if(vetalt[i] > maior)
        {
            maior = vetalt[i];
        }
        if(vetalt[i] < menor)
        {
            menor = vetalt[i];
        }
        if(vetsex[i] == 2)
        {
            nmulher++;
            somamulher = somamulher + vetalt[i];
        }
        somaturma = somaturma + vetalt[i];
    }
    mediamulher = somamulher / nmulher;
    mediaturma = somaturma / 50;
    cout<<"Maior altura da turma: "<<maior<<endl;
    cout<<"Menor altura da turma: "<<menor<<endl;
    cout<<"Altura das mulheres acima da media:\n";
    for (i=0;i<50;i++)
    {
        if(vetsex[i]==2 && vetalt[i] > mediamulher)
        {
            cout<<vetalt[i]<<endl;
        }
    }
    cout<<"Altura das pessoas abaixo da media:\n";
    for(i=0;i<50;i++)
    {
        if(vetalt[i] < mediaturma)
        {
            cout<<vetalt[i];
        }
    }
    return 0;
}
