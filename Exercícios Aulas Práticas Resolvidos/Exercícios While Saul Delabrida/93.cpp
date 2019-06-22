#include<iostream>
using namespace std;
int main()
{
    int voto,soma0=0,soma1=0,soma2=0,soma3=0,soma4=0;
    cout<<"Qual eh o seu voto para o Senado? 0-Voto Branco, 1-Candidato A, 2-Candidato B, 3-Candidato C, 4-Voto Nulo.\n";
    cin>>voto;

    while (voto!=-1)
    {
       switch (voto)
       {
        case 0:
            soma0++;break;
        case 1:
            soma1++;break;
        case 2:
            soma2++;break;
        case 3:
            soma3++;break;
        case 4:
            soma4++;break;
        default:
            cout<<"Voto invalido, FAVOR TENTAR NOVAMENTE.\n";break;
       }
        cout<<"Qual eh o seu voto para o Senado? 0-Voto Branco, 1-Candidato A, 2-Candidato B, 3-Candidato C, 4-Voto Nulo.\n";
        cin>>voto;
    }
    cout<<"O numero de votos em branco eh: "<<soma0<<endl;
    cout<<"O numero de votos nulos eh: "<<soma4<<endl;
    cout<<"O numero de eleitores que compareceram as urnas foi de: "<<soma0+soma1+soma2+soma3+soma4<<endl;
    if (soma1>soma2 && soma1>soma3)
    {
        cout<<"O candidato vencedor foi o A com "<<soma1<<" votos.";
    }
    if (soma2>soma1 && soma2>soma3)
    {
        cout<<"O candidato vencedor foi o B com "<<soma2<<" votos.";
    }
    if (soma3>soma1 && soma3>soma2)
    {
        cout<<"O candidato vencedor foi o C com "<<soma3<<" votos.";
    }
    return 0;
}
