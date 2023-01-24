/******************************************************************************************
14. Solicite um valor para a variável x. Gere uma série, com a seguinte regra : xn = (xn-1)/2,
onde xn é o termo atual e xn-1 é o termo anterior. A série encerra quando xn for zero.
Utilize operadores de deslocamento para realizar a divisão.
******************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main ()
{
  setlocale(LC_ALL,"");

  unsigned int x;
  int i=1;

  printf ("Digite um valor para X: ");
  scanf("%d",&x);

  printf(" 1- ");
  printf(" %d \n",x);


  do

  {
      x=x>>i; //o deslocamento dos bits para direita dividirá o X por dois

      printf("%2d- ",i+1);
      printf(" %d \n",x);

      x=x<<i;  //retorna X pra sua posição original

      i++;

  } while (x!=0);
}



