/******************************************************************
2. Solicite um valor para a vari�vel x. Coloque os bits impares
(1,3,5..) de x em 0. Exiba o valor original e o resultado.
******************************************************************/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 unsigned char x,resultado;
 unsigned mascara;

 printf("Dado um valor para a vari�vel X. O programa colocar� os bits �mpares (1,3,5,etc) de X em 0. Exibindo o valor original e o resultado.");

 printf("\n\nDigite um valor para X: ");
 scanf("%d",&x);

 //! For�ando os bits 1,3,5 e 7 a serem "0" por meio da opera��o l�gica AND e a masc�ra.

 mascara=0b01010101;

 //! bits em 1 n�o alteram o bit respectivo do n�mero original, se este for zero, continuar� sendo zero, e vice-versa.

 /* exemplo:
    n�mero 9 -> 1001 (binario)
    opera��o->    &
    mascara ->  1111
                -----
                1001 -> n�o altera o n�mero original */

 //! bits em 0, submetidos a uma opera��o and, zeram os bits �mpares no n�mero X.

 resultado=x & mascara;

 printf("\n\n %d : %d \n\n",x, resultado);

 system("pause");
}
