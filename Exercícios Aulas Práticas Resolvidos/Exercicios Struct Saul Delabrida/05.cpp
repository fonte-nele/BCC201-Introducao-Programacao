#include <iostream>
#include <string>
using namespace std;
struct data
{
	int mes;
	int ano;
};
struct gado
{
	int cod;
	int leite;
	int alimento;
	struct data nasc;
	char abate;
};
struct gado vetgado[2000];
int lergado()
{
	int i=0, j=1;
	do
    {
		cout<<"Digite o codigo da cabeca de gado ou 0 para ir ao menu:\n";
		cin>>j;
		if (j!=0)
		{
			vetgado[i].cod = j;
			cout<<"Digite a quantidade de litros de leite produzido por semana:\n";
			cin>>vetgado[i].leite;
			cout<<"Digite a quantidade de alimento ingerida por semana:\n";
			cin>>vetgado[i].alimento;
			cout<<"Digite o mes do nascimento:\n";
			cin>>vetgado[i].nasc.mes;
			cout<<"Digite o ano do nascimento:\n";
			cin>>vetgado[i].nasc.ano;

			if(vetgado[i].nasc.ano<2010 || (vetgado[i].leite<40  && vetgado[i].alimento>50))
				vetgado[i].abate='S';
			else
				vetgado[i].abate='N';
			i++;
		}
	}while (j!=0);
	return i;
}
int menu()
{
	int opcao;
	cout<<"1-Quantidade de leite total.\n";
    cout<<"2-Quantidade de alimento total.\n";
    cout<<"3-Quantidade de leite total apos o abate.\n";
	cout<<"4-Quantidade de alimento total apos o abate.\n";
    cout<<"5-Quantidade de cabecas de gado para o abate.\n";
    cout<<"6-Sair.\n";
	cin>>opcao;
	cin.ignore();
	return opcao;
}
int main()
{
	int quantidade = lergado();
	int op = menu();
	int a=0;

	while (op != 6)
    {
		if (op==1)
		{
			for (int i=0 ;i<quantidade; i++)
			{
				a+=vetgado[i].leite;
			}
			cout<<"Quantidade de leite: "<<a<<endl;
			a=0;
		}
		else
		if (op==2)
		{
			for (int i=0 ;i<quantidade; i++)
			{
				a+=vetgado[i].alimento;
			}
			cout<<"Quantidade de alimento: "<<a<<endl;
			a=0;
		}
		else
		if (op==3)
		{
			for (int i=0 ;i<quantidade; i++)
			{
				if (vetgado[i].abate=='N')
					a+=vetgado[i].leite;
			}
			cout<<"Quantidade de leite apos abate: "<<a<<endl;
			a=0;
		}
		else
		if (op==4)
		{
			for (int i=0 ;i<quantidade; i++)
			{
				if (vetgado[i].abate=='N')
					a+=vetgado[i].alimento;
			}
			cout<<"Quantidade de alimento apos abate: "<<a<<endl;
			a=0;
		}
		else
		if (op==5)
		{
			for (int i=0 ;i<quantidade; i++)
			{
				if(vetgado[i].abate=='S')
					a++;
			}
			cout<<"Quantidade de cabecas para o abate: "<<a<<endl;
			a=0;
		}
		else
		if (op==6)
		{
			break;
		}
		op = menu();
	}
	return 0;
}
