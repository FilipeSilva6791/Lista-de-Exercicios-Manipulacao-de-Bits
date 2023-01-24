/******************************************************************************************
13. Solicite um valor para a variável x. Gere uma série com 8 termos, com a seguinte regra:
xn = 2*(xn-1), onde xn é o termo atual e xn-1 é o termo anterior. Utilize operadores de
deslocamento para realizar a multiplicação.
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
      x= x<<(i); //o deslocamento dos bits para esquerda multiplicará o número por 2.

      printf("%d-",i+1);
      printf("%d \n",x);

      x= x>>(i); // retorna x pra sua posição original
  }
}


