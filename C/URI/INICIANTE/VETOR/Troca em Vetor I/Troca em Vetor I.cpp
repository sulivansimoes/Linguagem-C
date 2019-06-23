/*
Fa�a um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o �ltimo, 
o segundo elemento com o pen�ltimo, etc., at� trocar o 10� com o 11�. Mostre o vetor modificado.

Entrada
A entrada cont�m 20 valores inteiros, positivos ou negativos.

Sa�da
Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor armazenado naquela posi��o.
*/

#include <stdio.h>

#define TAM 20
int main(void)
{
	int n[TAM]={0},i,j,aux;
	
	for(i=0;i<TAM;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0,j=TAM-1;i<TAM,j>i;i++,j--)
	{
		aux = n[i];
		n[i] = n[j];
		n[j] = aux;
	}
	for(i=0;i<TAM;i++)
	{
		printf("N[%d] = %d\n",i,n[i]);
	}
	return 0;	
}

/*
exemplo de entrada			exemplo de saida
0								N[0] = 230
-5								N[1] = 63
...								...
63								N[18] = -5
230								N[19] = 0
*/
