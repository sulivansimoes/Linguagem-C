/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo
*/

#include<stdio.h>
int main(void)
{
	int i,j;
	
	for(i=1,j=60;j>=0;i=i+3,j=j-5)
	{
		printf("I=%d J=%d\n",i,j);
	}
	return 0;
}


/*
exemplo de saida
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0
*/
