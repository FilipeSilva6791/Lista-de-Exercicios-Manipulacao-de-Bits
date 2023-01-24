/********************************************************************************************
15. Considere agora valores com sinal. Solicite um valor para a variável x. Se este valor for
negativo, exiba o valor absoluto em formato decimal (valor sem sinal) seguido da letra D.
Se for positivo, exiba o valor seguido da letra C
********************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL,"");

  int x;
  unsigned teste;

  printf ("Digite um valor para X: ");
  scanf("%d",&x);

  if (x<0)
  {
    x=~x+1;
    printf("\n%d D \n\n",x);

  } else {

    printf(" \n%d C \n\n",x);
  }

}




