/*
Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada
A entrada cont�m um valor inteiro N (0 < N < 13).

Sa�da
A sa�da cont�m um valor inteiro, correspondente ao fatorial de N.
*/

#include<stdio.h>

int main(void)
{
	int i,n,fat=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) //lo�o de fatora��o
	{
		fat *= i;  // mesma coisa que  fat= fat * i;
	}
	printf("%d\n",fat);
	return 0;
}

/*
Exemplo de Entrada			Exemplo de Sa�da
4								24
*/
