/*
Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.
*/

#include <stdio.h>

int main(void)
{
	int i;
	
	for(i=1;i<101;i++)
	{
		if(i%2==0)
			printf("%d\n",i);
	}
	return 0;
}
