/*
Voc� fica t�o feliz no natal que tem vontade de gritar para todo mundo: "Feliz natal!!". 
Pra colocar toda essa felicidade pra fora, voc� montou um programa que, colocado um �ndice I 
de felicidade, seu grito de natal � mais animado.

Entrada
A entrada � composta por um inteiro I (1 < I = 104) que representa o �ndice de felicidade.

Sa�da
A sa�da � composta pela frase "Feliz natal!", sendo repetidas I vezes a �ltima letra a da frase. 
Uma quebra de linha � necess�ria ap�s a impress�o da frase.
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
Exemplo de Entrada 	 Exemplo de Sa�da 
5					 Feliz nataaaaal!
0					 Feliz natal!
1					 Feliz natal!
*/

