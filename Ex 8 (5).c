/****************************************************************************************************
8. Solicite um valor para a variável x. Se a variável x for par, zere os 4 bits menos significativos,
se for impar ligue os 4 bits mais significativos. Exiba o valor original e o resultado.
****************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 unsigned char x, resultado;
 unsigned mascara;

 printf("Digite um valor X: ");
 scanf("%d",&x);

 if(x%2==0) //testando se a variável é par
 {
    mascara=0b11110000;
    resultado=x&mascara;  //zerando os 4 bits menos significativos

    printf("\n\n %d : %d \n\n",x,resultado);
 }
 else
 {
    mascara=0b11110000;
    resultado=x|mascara; //setando os 4 bits mais significativos

    printf("\n\n %d : %d \n\n",x,resultado);
 }
}



