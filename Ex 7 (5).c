/***************************************************************************************
7. Solicite um valor para a vari�vel x e um �ndice b que indica um dos bits da vari�vel.
Mantenha o valor daquele bit, ligue os demais. Exiba o valor original e o resultado.
***************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 unsigned char x, resultado, indice;
 unsigned mascara;

 printf("Dado um valor para a vari�vel x e um �ndice b que indica um dos bits da vari�vel. O programa manter� o valor do bit indicado e ir� setar os demais bis, em seguida exibir� o valor original e o resultado. ");

 printf("\n\nDigite um valor X: ");
 scanf("%d",&x);

 printf("\nDigite um �ndice b para o byte: ");
 scanf("%d",&indice);

 if(indice>=0 && indice<=7)
 {
  mascara=0x1;          //em bin�rio -> 00000001
  mascara<<=indice;     //desloca o bit 1 pra posi��p escolhida
  mascara=~mascara;     //nega a mascara
  resultado=x|mascara;  //mantem o bit da posi��o que agora � zero e seta os demais;

  printf("\n\n %d : %d \n\n",x,resultado);
 }
 else
 {
  printf("\n\nO �ndice est� fora da faixa de um byte.\n\n");
 }
}


