/*
Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que 
armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

Entrada
A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Saída
Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde i 
é a posição do vetor e x é o valor armazenado na posição, com uma casa após o ponto decimal.
*/

#include <stdio.h>

int main(void)
{
	float a[100];
	int i;
	
	for(i=0;i<100;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<100;i++)
	{
		if(a[i] <= 10)
			printf("A[%d] = %.1f\n",i,a[i]);
	}
	return 0;
}

/*
exemplo de entrada				exemplo de saida
0								A[0] = 0.0
-5								A[1] = -5.0
63								A[3] = -8.5
-8.5							...
...
*/
