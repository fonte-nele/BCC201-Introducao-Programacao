#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int contTimes, contJogadores, idade, qtdeAbaixo18, somaIdades, qtdeAltos,qtdeMaisPesados;
  double altura, peso, mediaIdadeTime, somaAlturas, mediaAlturaTotal, percentual80;

  qtdeAbaixo18 = qtdeAltos = qtdeMaisPesados = somaAlturas = 0;

  for (contTimes = 1; contTimes <= 5; contTimes++)
  {
    //a cada novo time, somaIdades precisa ser "resetada"
    somaIdades = 0;

    for (contJogadores = 1; contJogadores <= 11; contJogadores++)
    {
      /*repare que cada variavel tem sua validacao de entrada.
        isso evita que o programa solicite que o usuario informe
        dados que ja estao corretos (ou evita que a gente tenha
        que colocar um if pra saber qual esta errado...).*/
      do
      {
        cout << "Informe a idade do jogador." << endl;
	    cin >> idade;
      } while (idade <= 0);

      if (idade < 18)
	    qtdeAbaixo18++;

      do
      {
	    cout << "Informe a altura do jogador." << endl;
	    cin >> altura;
      } while (altura <= 0);

      if ((altura >= 1.85) && (altura <= 2))
	    qtdeAltos++;

      do
      {
	    cout << "Informe o peso do jogador." << endl;
	    cin >> peso;
      } while (peso <= 0);

      if (peso >= 80)
	    qtdeMaisPesados++;

      somaIdades += idade;
      somaAlturas += altura;
    }

    //nesse exercicio, podemos usar as constantes pq o enunciado nos disse isso
    mediaIdadeTime = somaIdades / 11.0;

    cout << "A media de idade do time eh: " << fixed << setprecision(2) << mediaIdadeTime << "m" << endl;
  }
  //nesse exercicio, podemos usar as constantes pq o enunciado nos disse isso
  mediaAlturaTotal = somaAlturas / 55;
  percentual80 = qtdeMaisPesados / 55.0 * 100;

  cout << "A quantidade de jogadores com idade inferior a 18 anos eh: " << qtdeAbaixo18 << endl;
  cout << "A quantidade de jogadores com altura entre 1,85m e 2m eh: " << qtdeAltos << endl;
  cout << "O percentual de jogadores com mais de 80kg eh: " << fixed << setprecision(2) << percentual80 << "%" << endl;
  cout << "A media das alturas de todos os jogadores do campeonato eh: " << fixed << setprecision(2) << mediaAlturaTotal << "m" << endl;

  return 0;
}
