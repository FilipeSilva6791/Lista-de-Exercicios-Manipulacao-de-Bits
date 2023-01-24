/**************************************************
9. Solicite um valor para a variável x. Inverta o
valor dos 3 bits mais significativos da variável x.
**************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void printb(unsigned char byte); //função pra printar números binários

int main ()
{
 setlocale(LC_ALL,"portuguese");

 unsigned char x, resultado, indice;
 unsigned mascara;

 printf("Digite um valor X: ");
 scanf("%d",&x);

 mascara=0b11100000;

 resultado=x^mascara; // invertendo os três bits mais significativos

 printb(x);
 printf(" : ");
 printb(resultado);
 printf(" ---> %d : %d \n\n",x,resultado);

}

void printb(unsigned char byte)
{
    int i;
    unsigned char mascara=0b10000000; // comecando com o bit mais significativo
    unsigned char bit;          // bit a ser exibido

    for (i=7;i>=0;i--) // Percorre os 8 bits
    {
        bit=byte & mascara; // mascara o byte, pegado o valor que interessa
        bit >>= i; // coloca o bit na posicao menos significativa, para exibir 0 ou 1
        printf("%01d",bit); // exibe o bit
        mascara >>=1;  // ajusta a mascara  para proximo bit
    }
}

