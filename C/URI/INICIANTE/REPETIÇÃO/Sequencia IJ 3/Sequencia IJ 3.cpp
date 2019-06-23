/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.
*/

#include<stdio.h>

int main(void)
{
	int i,j,k,x;

	for(i=1;i<10;i=i+2)
	{
		for(j=7;j>=5;j--)	//(x=2,k=7,j=k;j>=k-x;j--) 
		{
			printf("I=%d J=%d\n",i,j);
		}
	  printf("\n");
//	  x += 2;
	  
	}
}

/*
exemplo de saida
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13
*/
