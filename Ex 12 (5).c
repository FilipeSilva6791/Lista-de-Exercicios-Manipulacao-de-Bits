/****************************************************************************
12. Solicite um valor para a vari�vel x. Calcule o complemento-2 deste valor.
*****************************************************************************/

//Complemento de 2 de um n�mero x � a invers�o dos bits destes n�mero somada a 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void printb(unsigned char byte);

int main ()
{
  setlocale(LC_ALL,"");

  int x, complemento;

  printf("Dado um valor para a vari�vel X, o programa calcular� o complemento-2 deste valor.");
  printf("\n\nDigite um valor para X: ");
  scanf("%d",&x);

  complemento=~x+1;

  printb(x);
  printf("--> valor de X em bin�rio. \n");

  printb(complemento);
  printf("--> complemento-2 de X. Em decimal -> %d \n\n",complemento);

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

