/*
Elaborar um algoritmo que le um vetor 36 e um valor A  e multiplica vetor por valor A e coloca
os valores multiplicados do vetor por A na matriz de ordem 6 e no final escreva a matriz

*/

#include<stdio.h>
#include<stdlib.h>

#define D 3 
#define T 9
 
int main(void)
{
	int i,j,cont,a,vet[T],m[D][D];
	
	for(i=0;i<T;i++)
	{
		printf("Informe vet[%d]: ",i);
		scanf("%d",&vet[i]);
	}
	
	printf("Informe valor A: ");
	scanf("%d",&a);
	
	//MULTIPLICA VETOR POR A
	for(i=0;i<T;i++)
	{
		vet[i] *= a;
	}
	
	//COLOCA VETOR NA MATRIZ
	cont=0;
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			m[i][j] = vet[cont];
			cont++;		
		}
	}
	
	//IMPRESSAO
	printf("\nVetor Multiplicado\n");
	for(i=0;i<T;i++)
	{
		printf("%d ",vet[i]);
	}
	
	printf("\nVetor em Matriz\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("%d ",m[i][j]);		
		}
		printf("\n");
	}
}

