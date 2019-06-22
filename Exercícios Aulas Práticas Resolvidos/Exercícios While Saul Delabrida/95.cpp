#include <iostream>
using namespace std;
int main()
{
    int voto,soma1=0,soma2=0,soma3=0,soma4=0;
    double soma5=0,soma6=0,somat=0;
    cout<<"Qual eh o seu voto? 1-Candidato A; 2-Candidato B; 3-Candidato C; 4-Candidato D; 5-Voto Nulo; 6-Voto em branco.\n";
    cin>>voto;

    while (voto>0)
    {
        switch (voto)
        {
            case 1:
                somat++;
                soma1++;break;
            case 2:
                somat++;
                soma2++;break;
            case 3:
                somat++;
                soma3++;break;
            case 4:
                somat++;
                soma4++;break;
            case 5:
                somat++;
                soma5++;break;
            case 6:
                somat++;
                soma6++;break;
            default:
                cout<<"Codigo de voto invalido. FAVOR TENTAR NOVAMENTE.\n";break;
        }

        cout<<"Qual eh o seu voto? 1-Candidato A; 2-Candidato B; 3-Candidato C; 4-Candidato D; 5-Voto Nulo; 6-Voto em branco.\n";
        cin>>voto;
    }

    cout<<"O total de votos para o candidato A foi: "<<soma1<<endl;
    cout<<"O total de votos para o candidato B foi: "<<soma2<<endl;
    cout<<"O total de votos para o candidato C foi: "<<soma3<<endl;
    cout<<"O total de votos para o candidato D foi: "<<soma4<<endl;
    cout<<"O total de votos nulo foi: "<<soma5<<endl;
    cout<<"O total de votos em branco foi: "<<soma6<<endl;
    cout<<"O percentual de votos em branco sobre o total foi: "<<(soma6/somat) * 100<<" %.\n";
    cout<<"O percentual de votos nulos sobre o total foi: "<<(soma5/somat) * 100<<" %.\n";
    return 0;
}
