/*
Leia um valor inteiro N. Apresente todos os n�meros entre 1 e 10000 que divididos por N d�o resto igual a 2.

Entrada
A entrada cont�m um valor inteiro N (N < 10000).

Sa�da
Imprima todos valores que quando divididos por N d�o resto = 2, um por linha.
*/

#include<stdio.h>
int main(void)
{
	int n,i;
	
	scanf("%d",&n);
	
	for(i=1;i<=10000;i++)
	{
		if(i%n==2){
			printf("%d\n",i);
		}
		continue;
	}
	return 0;
}

/*
exemplo de entrada			exemplo de saida
13								 2
								15
								28
								41
...
*/
