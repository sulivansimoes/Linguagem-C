/*
Fa�a um programa que leia um valor T e preencha um vetor N[1000] com a sequ�ncia de valores 
de 0 at� T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada cont�m um valor inteiro T (2 = T = 50).

Sa�da
Para cada posi��o do vetor, escreva "N[i] = x", onde i � a posi��o do vetor e x � o valor armazenado naquela posi��o.
*/

#include<stdio.h>

#define TAM 10
int main(void)
{
	int n[TAM]={0},t,i,j,cont=1;
	
	scanf("%d",&t);
	for(j=t-1,i=0;j>=0,i<TAM;j--,i++)
	{		
		n[j] = j;
		cont += 1;
	}
	for(i=cont;i<TAM;i++)
	{
		n[i]=7;	
	}	
	for(i=0;i<TAM;i++)
	{   
		printf("N[%d] = %d\n",i,n[i]);
	}
	return 0;
}
	
/*
exemplo de entrada			exemplo de saida
3								N[0] = 0
								N[1] = 1
								N[2] = 2
								N[3] = 0
								N[4] = 1
								N[5] = 2
								N[6] = 0
								N[7] = 1
								N[8] = 2
*/
