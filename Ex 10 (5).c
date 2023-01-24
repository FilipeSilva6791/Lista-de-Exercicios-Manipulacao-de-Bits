/***************************************************************************************
10. Solicite um valor para a variável x. Se o bit 7 desta variável for 1, copie o nibble
(4 bits) menos significativo para a variável y e zere o bit 7 de x. Se o bit 7 de x for
zero, copie para y o nibble mais significativo. Exiba o valor de ambas variáveis.
***************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void printb(unsigned char byte);

int main ()
{
 setlocale(LC_ALL,"");
 unsigned int x,y;
 unsigned mascara;

 printf("Se o bit 7 da variável X for 1, o programa copiará o nibble (4 bits) menos significativo para a variável Y\n");
 printf("e zerará o bit 7 de X. Se o bit 7 de X for zero, o programa copiará para Y o nibble mais significativo de X.");

 printf("\n\nDigite um valor X: ");
 scanf("%d",&x);

 printb(x);
 printf("--> valor do X digitado em binário.\n");

 mascara=0b10000000;
 mascara&=x; //mascara recebe o valor do bit zero de X e zera os demais.

 if(mascara==0b10000000) // testa se o bit 7 de X era 1
 {
    mascara=0b00001111;
    y=x&mascara; //atribui a Y o nibble menos significativo de X

    printb(y);
    printf("--> valor binário de Y. Em decimal-> %d. \n",y);

    mascara=0b01111111;
    x&=mascara; //zera o bit 7 de X

    printb(x);
    printf("--> novo valor de X. Em decimal-> %d.\n\n",x);

 } else {
    mascara=0b11110000;
    y=x&mascara; //atribui o nibble mais significativo de X á Y

    printb(y);
    printf("--> valor binário de Y. Em decimal -> %d. \n\n",y);

 }
system ("pause");

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


