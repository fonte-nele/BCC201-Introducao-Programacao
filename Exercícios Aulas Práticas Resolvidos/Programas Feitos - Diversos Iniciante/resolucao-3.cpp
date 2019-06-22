/*link para testar: http://www.eeweb.com/toolbox/calculator
  copie e cole a expressao do enunciado (so substituia o valor de N)*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int N, num, den, sinal, i, j;
  double fat, fracao, S;

  /*i - conta de 1 a 10
    j - contador que controla quanta vezes o i sera multiplicado por ele mesmo*/

  sinal = 1;
  S = 0;

  cout << "Digite o valor de N" << endl;
  cin >> N;

  if (N > 0)
  {
    //laco referente a quantidade de termos
    for (i = 1; i <= 10; i++)
    {
      num = 1;
      //laco que calcula o numerador
      for (j = 1; j <= N; j++)
	    num *= i;

      fat = 1;
      //laco que calcula o denominador
      for (j = 1; j <= i; j++)
	    fat *= j;

      den = fat;
      //faz calculo principal
      fracao = ((num * 1.0) / den) * sinal;
      S += fracao;
      //muda sinal da variavel que controla o sinal de cada termo
      sinal *= -1;
    }

    cout << "O valor de S eh: " << fixed << setprecision(10) << S << endl;
  }
  else
    cout << "Nada para calcular, pois N precisa ser um numero positivo." << endl;

  return 0;
}
