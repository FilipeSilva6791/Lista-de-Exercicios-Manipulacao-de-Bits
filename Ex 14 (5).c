/******************************************************************************************
14. Solicite um valor para a vari�vel x. Gere uma s�rie, com a seguinte regra : xn = (xn-1)/2,
onde xn � o termo atual e xn-1 � o termo anterior. A s�rie encerra quando xn for zero.
Utilize operadores de deslocamento para realizar a divis�o.
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
      x=x>>i; //o deslocamento dos bits para direita dividir� o X por dois

      printf("%2d- ",i+1);
      printf(" %d \n",x);

      x=x<<i;  //retorna X pra sua posi��o original

      i++;

  } while (x!=0);
}



