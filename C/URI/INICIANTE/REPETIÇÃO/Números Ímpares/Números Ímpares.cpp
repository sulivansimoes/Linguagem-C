/*
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os �mpares de 1 at� X,
 um valor por linha, inclusive o X, se for o caso.

Entrada
O arquivo de entrada cont�m 1 valor inteiro qualquer.

Sa�da
Imprima todos os valores �mpares de 1 at� X, inclusive X, se for o caso.
*/

#include<stdio.h>

int main(void)
{
	int n,i;
	
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2!=0){
			printf("%d\n",i);
		}
	}
	return 0;
}

/*
Exemplo de enrtrada		exemplo de saida
8				           	    1
								3
								5
								7
*/
