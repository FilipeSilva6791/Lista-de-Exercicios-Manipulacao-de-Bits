/***************************************************************************************
10. Solicite um valor para a vari�vel x. Se o bit 7 desta vari�vel for 1, copie o nibble
(4 bits) menos significativo para a vari�vel y e zere o bit 7 de x. Se o bit 7 de x for
zero, copie para y o nibble mais significativo. Exiba o valor de ambas vari�veis.
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

 printf("Se o bit 7 da vari�vel X for 1, o programa copiar� o nibble (4 bits) menos significativo para a vari�vel Y\n");
 printf("e zerar� o bit 7 de X. Se o bit 7 de X for zero, o programa copiar� para Y o nibble mais significativo de X.");

 printf("\n\nDigite um valor X: ");
 scanf("%d",&x);

 printb(x);
 printf("--> valor do X digitado em bin�rio.\n");

 mascara=0b10000000;
 mascara&=x; //mascara recebe o valor do bit zero de X e zera os demais.

 if(mascara==0b10000000) // testa se o bit 7 de X era 1
 {
    mascara=0b00001111;
    y=x&mascara; //atribui a Y o nibble menos significativo de X

    printb(y);
    printf("--> valor bin�rio de Y. Em decimal-> %d. \n",y);

    mascara=0b01111111;
    x&=mascara; //zera o bit 7 de X

    printb(x);
    printf("--> novo valor de X. Em decimal-> %d.\n\n",x);

 } else {
    mascara=0b11110000;
    y=x&mascara; //atribui o nibble mais significativo de X � Y

    printb(y);
    printf("--> valor bin�rio de Y. Em decimal -> %d. \n\n",y);

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


