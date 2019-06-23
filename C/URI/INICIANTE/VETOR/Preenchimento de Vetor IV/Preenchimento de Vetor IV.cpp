/*
Neste problema voc� dever� ler 15 valores coloc�-los em 2 vetores conforme estes valores forem pares ou �mpares. 
S� que o tamanho de cada um dos dois vetores � de 5 posi��es. Ent�o, cada vez que um dos dois vetores encher, voc� 
dever� imprimir todo o vetor e utiliz�-lo novamente para os pr�ximos n�meros que forem lidos. Terminada a leitura, 
deve-se imprimir o conte�do que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. 
Cada vetor pode ser preenchido tantas vezes quantas for necess�rio.

Entrada
A entrada cont�m 15 n�meros inteiros.

Sa�da
Imprima a sa�da conforme o exemplo abaixo.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main(void)
{
	int n,i,vetImp[TAM],vetPar[TAM];
	
	for(i=0;i<TAM;i++)
	{
		scanf("%d",&n);	
		if(n%2==0)
			vetPar[i] = n;
			else
				vetImp[i] = n; 	
	}
	for(i=0;i<TAM;i++)
	{
		printf("%d")
	}
		
	
}

/*
exemplo de entrada					exemplo de saida
1										par[0] = 4
3										par[1] = -4
4										par[2] = 2
-4										par[3] = 8
2										par[4] = 2
3										impar[0] = 1
8										impar[1] = 3
2										impar[2] = 3
5										impar[3] = 5
-7										impar[4] = -7
54										impar[0] = 789
76										impar[1] = 23
789										par[0] = 54
23										par[1] = 76
98									    par[2] = 98									
*/
