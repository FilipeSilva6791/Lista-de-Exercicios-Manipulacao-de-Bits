/***************************************************************************************
7. Solicite um valor para a variável x e um índice b que indica um dos bits da variável.
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

 printf("Dado um valor para a variável x e um índice b que indica um dos bits da variável. O programa manterá o valor do bit indicado e irá setar os demais bis, em seguida exibirá o valor original e o resultado. ");

 printf("\n\nDigite um valor X: ");
 scanf("%d",&x);

 printf("\nDigite um índice b para o byte: ");
 scanf("%d",&indice);

 if(indice>=0 && indice<=7)
 {
  mascara=0x1;          //em binário -> 00000001
  mascara<<=indice;     //desloca o bit 1 pra posiçãp escolhida
  mascara=~mascara;     //nega a mascara
  resultado=x|mascara;  //mantem o bit da posição que agora é zero e seta os demais;

  printf("\n\n %d : %d \n\n",x,resultado);
 }
 else
 {
  printf("\n\nO índice está fora da faixa de um byte.\n\n");
 }
}


