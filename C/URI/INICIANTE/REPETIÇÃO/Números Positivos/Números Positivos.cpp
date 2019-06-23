/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). 
A seguir, mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/

#include<stdio.h>

int main(void)
{
	int i,pos=0;
	float n;
	
	for(i=1;i<7;i++)
	{
		scanf("%f",&n);
		if(n>=0)
			pos++;
		continue;
	}
	printf("%d valores positivos\n",pos);
	return 0;
}
