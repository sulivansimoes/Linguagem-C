/*
Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma de A e B 
atribuindo o seu resultado na vari�vel X. Imprima X conforme exemplo apresentado abaixo. 
N�o apresente mensagem alguma al�m daquilo que est� sendo especificado e n�o esque�a de imprimir o fim de
linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".

obs: fim de linha no uri � o \n
*/
#include <stdio.h>

int main()
{
  int A,B,X;	
  scanf("%d",&A);
  scanf("%d",&B);
  X=A+B;
  printf("X = %d\n",X);		
}
