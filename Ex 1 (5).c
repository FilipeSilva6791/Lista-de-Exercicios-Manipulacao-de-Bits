/************************************************************
1. Solicite um valor para a vari�vel x. Coloque os bits pares
(0,2,4,etc) de x em 1. Exiba o valor original e o resultado.
Os dados s�o de 8 bits (sem sinal).
************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 unsigned char x,resultado;
 unsigned mascara;

 printf("Dado um valor para a vari�vel X. O programa colocar� os bits pares (0,2,4,etc) de X em 1. Exibindo o valor original e o resultado.");

 printf("\n\nDigite um valor para X: ");
 scanf("%d",&x);

 //! For�ando os bits 0,2,4 e 6 a serem "1" por meio da opera��o l�gica OR e a masc�ra.
 mascara=0b01010101;
 resultado=x | mascara;

 printf("\n\n %d : %d \n\n",x, resultado);

 system("pause");
}
