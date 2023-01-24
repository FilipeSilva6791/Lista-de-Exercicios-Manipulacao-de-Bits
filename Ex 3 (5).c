/*****************************************************************************
3. Solicite um valor para a vari�vel x e um �ndice b que indica um dos bits da
vari�vel. Ligue o bit correspondente. Exiba o valor original e o resultado.
*****************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 unsigned int x, resultado, indice;
 unsigned mascara;

 printf("Dado um valor para a vari�vel x e um �ndice b que indica um dos bits da vari�vel. O programa ligar� o bit correspondente, exibir� o valor original e o resultado. ");

 printf("\n\nDigite um valor X: ");
 scanf("%d",&x);

 printf("\nDigite um �ndice b para o byte: ");
 scanf("%d",&indice);

 if(indice>=0 && indice<=7)
 {
  mascara=0b00000001;
  mascara=(mascara<<indice); //coloca o bit ligado da m�scara na posi��o que ser� ligado o bit em x.
  resultado= mascara | x;      //ligando o bit da posi��o de indice b


  printf("\n\n %d : %d \n\n",x,resultado);
 }
 else
 {
  printf("\n\nO indice est� fora da faixa de um byte.\n\n");
 }
}
