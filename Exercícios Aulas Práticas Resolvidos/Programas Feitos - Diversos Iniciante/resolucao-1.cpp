#include <iostream>

using namespace std;

int main()
{
  int i, N, tipoLote;
  double areaLote, valorIPTU;

  i = 0;

  cout << "Informe a numero de loteamentos" << endl;
  cin >> N;

  if (N > 0)
  {
    while (i < N)
    {
      cout << "Qual o tipo do loteamento (1 ou 2)?" << endl;
      cin >> tipoLote;

      //verifica se tipo de loteamento eh valido
      if ((tipoLote == 1) || (tipoLote == 2))
      {
	    //aplica restricao relativa a area
        do
        {
          cout << "Qual a area do loteamento?" << endl;
          cin >> areaLote;
        } while (areaLote <= 0);

        switch(tipoLote)
	    {
	      case 1:
	        if (areaLote < 350)
	          valorIPTU = areaLote * 1.6;
	        else
	          valorIPTU = areaLote * 1.8;

	        break;
	      case 2:
	        if (areaLote < 350)
	          valorIPTU = areaLote * 1.7;
	        else
	          valorIPTU = areaLote * 1.9;
	    }

	    i++;

	    cout << "O valor do IPTU eh: " << valorIPTU << endl;
      }
      else
        cout << "Tipo invalido!" << endl;
    }
  }
  else
    cout << "Sem loteamentos nao ha nada para calcular." << endl;

  return 0;
}
