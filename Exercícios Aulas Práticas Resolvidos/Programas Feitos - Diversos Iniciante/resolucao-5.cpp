#include <iostream>

using namespace std;

int main()
{
  int i, j, num;

  cout << "Digite um numero natural" << endl;
  cin >> num;

  if (num > 0)
    for (i = 0; i < num; i++)
    {
      for (j = 0; j < num; j++)
        if (j == i)
          cout << num;
        else
          cout << "#";

      cout << endl;
    }
   else
     cout << "Nada pra fazer." << endl;

  return 0;
}
