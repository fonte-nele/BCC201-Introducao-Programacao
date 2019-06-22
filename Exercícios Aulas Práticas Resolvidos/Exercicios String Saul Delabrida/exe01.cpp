#include <iostream>
#include <string>
using namespace std;
int main ( )
{
    string palavra;
    int i=0,n=0;
    cout<<"\nEntre com a palavra:\n" ;
    getline(cin,palavra);

    while(palavra[i] != '\0')
    {
        if(palavra[i]!=' ')
		{
			n++;
		}
		i++;
    }
    cout<<"O numero de caracteres eh: "<<n<<endl<<endl;
    return 0 ;
}
