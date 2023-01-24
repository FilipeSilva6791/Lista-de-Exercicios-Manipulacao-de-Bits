/*****************************************************************************
3. Solicite um valor para a variável x e um índice b que indica um dos bits da
variável. Ligue o bit correspondente. Exiba o valor original e o resultado.
*****************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
 setlocale(LC_ALL,"portuguese");

 unsigned int x, resultado, indice;
 unsigned mascara;

 printf("Dado um valor para a variável x e um índice b que indica um dos bits da variável. O programa ligará o bit correspondente, exibirá o valor original e o resultado. ");

 printf("\n\nDigite um valor X: ");
 scanf("%d",&x);

 printf("\nDigite um índice b para o byte: ");
 scanf("%d",&indice);

 if(indice>=0 && indice<=7)
 {
  mascara=0b00000001;
  mascara=(mascara<<indice); //coloca o bit ligado da máscara na posição que será ligado o bit em x.
  resultado= mascara | x;      //ligando o bit da posição de indice b


  printf("\n\n %d : %d \n\n",x,resultado);
 }
 else
 {
  printf("\n\nO indice está fora da faixa de um byte.\n\n");
 }
}
