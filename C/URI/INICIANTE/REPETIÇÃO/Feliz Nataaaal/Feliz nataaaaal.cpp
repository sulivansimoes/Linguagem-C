/*
Você fica tão feliz no natal que tem vontade de gritar para todo mundo: "Feliz natal!!". 
Pra colocar toda essa felicidade pra fora, você montou um programa que, colocado um índice I 
de felicidade, seu grito de natal é mais animado.

Entrada
A entrada é composta por um inteiro I (1 < I = 104) que representa o índice de felicidade.

Saída
A saída é composta pela frase "Feliz natal!", sendo repetidas I vezes a última letra a da frase. 
Uma quebra de linha é necessária após a impressão da frase.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,i=1;
	
	scanf("%d",&n);
	printf("Feliz nata");
	for( ;i<n;i++)
	{
		printf("a");
	}
	printf("l!\n");
	return 0;
}

/*
Exemplo de Entrada 	 Exemplo de Saída 
5					 Feliz nataaaaal!
0					 Feliz natal!
1					 Feliz natal!
*/

