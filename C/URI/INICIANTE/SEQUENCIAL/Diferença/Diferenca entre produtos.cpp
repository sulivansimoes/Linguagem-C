/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto
de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, 
com um espaço em branco antes e depois da igualdade.
*/

#include <stdio.h>

int main()
{
  int a,b,c,d,dif;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  
  dif=((a*b)-(c*d));
  printf("DIFERENCA = %d\n",dif);	
  return 0;	
}
/*
exemplo de entrada			exemplo de saida
5							DIFERENCA = -26
6
7
8

*/
