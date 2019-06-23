/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N � a 
quantidade de linhas de sa�da que ser�o apresentadas na execu��o do programa.

Entrada
O arquivo de entrada cont�m um n�mero inteiro positivo N.

Sa�da
Imprima a sa�da conforme o exemplo fornecido.
*/

#include <stdio.h>

int main(void)
{
	int i,n;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d %d %d\n",i,i*i,i*i*i);
	}
	return 0;
}

/*
Exemplo de Entrada				Exemplo de Sa�da
5								1 1 1
								2 4 8
								3 9 27
								4 16 64
								5 25 125
*/
