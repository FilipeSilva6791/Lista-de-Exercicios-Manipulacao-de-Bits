/******************************************************************
2. Solicite um valor para a variável x. Coloque os bits impares
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

 printf("Dado um valor para a variável X. O programa colocará os bits ímpares (1,3,5,etc) de X em 0. Exibindo o valor original e o resultado.");

 printf("\n\nDigite um valor para X: ");
 scanf("%d",&x);

 //! Forçando os bits 1,3,5 e 7 a serem "0" por meio da operação lógica AND e a mascára.

 mascara=0b01010101;

 //! bits em 1 não alteram o bit respectivo do número original, se este for zero, continuará sendo zero, e vice-versa.

 /* exemplo:
    número 9 -> 1001 (binario)
    operação->    &
    mascara ->  1111
                -----
                1001 -> não altera o número original */

 //! bits em 0, submetidos a uma operação and, zeram os bits ímpares no número X.

 resultado=x & mascara;

 printf("\n\n %d : %d \n\n",x, resultado);

 system("pause");
}
