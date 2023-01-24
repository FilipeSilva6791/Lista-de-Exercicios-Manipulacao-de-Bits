/******************************************************************************************
13. Solicite um valor para a vari�vel x. Gere uma s�rie com 8 termos, com a seguinte regra:
xn = 2*(xn-1), onde xn � o termo atual e xn-1 � o termo anterior. Utilize operadores de
deslocamento para realizar a multiplica��o.
******************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL,"");

  unsigned int x;
  int i;

  printf ("Digite um valor para X: ");
  scanf("%d",&x);

  printf("1-");
  printf("%d \n",x);


  for (i=1; i<=7; i++)

  {
      x= x<<(i); //o deslocamento dos bits para esquerda multiplicar� o n�mero por 2.

      printf("%d-",i+1);
      printf("%d \n",x);

      x= x>>(i); // retorna x pra sua posi��o original
  }
}


