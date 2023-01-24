/**************************************************************************
11. Solicite um valor para a variável x. Calcule o complemento deste valor.
***************************************************************************/

//Complemento de 1 de um número x é a inversão dos bits destes número.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void printb(unsigned char byte);

int main ()
{
  setlocale(LC_ALL,"");

  unsigned int x, complemento;

  printf("Dado um valor para a variável X, o programa calculará o complemento deste valor.");
  printf("\n\nDigite um valor para X: ");
  scanf("%d",&x);

  complemento=~x;

  printb(x);
  printf("--> valor de X em binário. \n");

  printb(complemento);
  printf("--> complemento de 1 de X. \n\n");

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

