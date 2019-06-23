/*
Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada
A entrada contém um valor inteiro N (0 < N < 13).

Saída
A saída contém um valor inteiro, correspondente ao fatorial de N.
*/

#include<stdio.h>

int main(void)
{
	int i,n,fat=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) //loço de fatoração
	{
		fat *= i;  // mesma coisa que  fat= fat * i;
	}
	printf("%d\n",fat);
	return 0;
}

/*
Exemplo de Entrada			Exemplo de Saída
4								24
*/
