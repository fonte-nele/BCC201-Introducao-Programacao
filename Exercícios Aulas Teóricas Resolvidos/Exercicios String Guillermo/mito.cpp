#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 1000
main()
{
      char opcao=0;
      int n=0, var1, var2, var3, registrador=0, contador;
      int vet1[max], vet2[max];
      /*As variáveis var1, var2, var3 sao usadas nos laços e em artificios de troca*/
      
   while(opcao!='x')
   {   
      printf("    %c------------------------------------------------------------------------%c\n",218,191);
      printf("    | Atraves desse programa, e possivel ler o numero de elementos de um     |\n");
      printf("    | vetor com capacidade de 1000 numeros. Para os que se repetem, escrever |\n");
      printf("    | a quantidade de vezes em que aparecem repetidos. Forma um novo conjunto|\n");
      printf("    | excluindo os elementos repetidos.                                      |\n"); 
      printf("    %c------------------------------------------------------------------------%c\n\n",192,217);
      
      /*Menu de opcoes*/ 
      printf("                                  %c--------%c\n",201,187);
      printf("                                  |  MENU  |\n");
      printf("                             %c----%c--------%c----%c\n",218,200,188,191);
      printf("                             |      (L)er       |\n");
      printf("                             %c------------------%c\n",204,185);
      printf("                             |    (E)screver    |\n");       
      printf("                             %c------------------%c\n",204,185);
      printf("                             |     (F)ormar     |\n");       
      printf("                             %c------------------%c\n",204,185);
      printf("                             |      Fechar   (x)|\n");       
      printf("                             %c------------------%c\n",192,217);
      
      /*Lendo a opcao do menu*/   
      printf("\n    Escolha uma opcao: ");
      scanf("%c", &opcao);
      
      /*Menu de opcoes*/
      switch(opcao)
      {   
        case 'L':
        case 'l':
      
             /*Lendo o numero de elementos do vetor.*/
             n=0;
             while(n<=0 || n>max){
                 printf("\nDigite o numero de elementos da sequencia desejada: ");
                 scanf("%d",&n);
                 if(n<=0 || n>max)
                     printf("\nNumero invalido.\n");
             }
      
             /*Lendo os elementos do vetor*/
             for(var1=0; var1<n; var1++){
                 printf("Digite o %d valor: ", var1+1);
                 scanf("%d", &vet1[var1]);
             }
      
             /*Ordenando os elementos do vetor*/
             for(var1=n-1; var1>=0; var1--){
                 for(var2=0; var2<var1; var2++){
                     if(vet1[var1]<vet1[var2]){
                        var3=vet1[var1];
                        vet1[var1]=vet1[var2];
                        vet1[var2]=var3;
                     }
                 }
             }
        printf("\nConcluido.");
        system("cls");
        break;

        case 'E':
        case 'e':
             
             /*Verificando os numeros que se repetem, e quantas vezes se repetem.*/
             contador=1;
             var3=0;
             var2=vet1[0];
             vet2[n]=0;
             for(var1=1; var1<=n; var1++){ /*Comparando os numeros entre si.*/
                 if(var2==vet1[var1])
                     contador++;
                 else if(contador>1){
                     printf("\nO numero %d se repete %d vez(es).\n", var2, contador-1);
                     vet2[var3++]=var2;
                     var2=vet1[var1];
                     contador=1;
                     registrador++;
                 }
                 else{
                     vet2[var3++]=var2;
                     var2=vet1[var1];
                     contador=1;
                     }
             }     
             
          
             /*Imprimindo uma mensagem caso nao exista numeros repetidos.*/
             if(registrador==0)
                 printf("\nNao ha numeros que se repetem na sequencia.\n");   
        
        printf("\nConcluido.");
        getch();
        system("cls");
        break; 
        
        case 'F':
        case 'f':
             
             /*Imprimindo o vetor formado por elementos que se repetiram.*/
             printf("\n    O novo conjunto e formado por:\n    ");
             for(var1=0; var1<var3; var1++)
                 printf("%d ", vet2[var1]);
                                            
        
        printf("\n\nConcluido.");
        getch();
        system("cls");
        break;
        
        case 'X':
        case 'x':
             opcao='x';
                   
        default:
             system("cls");        
        break;
      }
   }            
}                                       