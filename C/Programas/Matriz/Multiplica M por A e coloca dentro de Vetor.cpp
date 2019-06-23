/*
Elaborar um algoritmo que le uma matriz 6,6 e um valor A  e multiplica matriz por valor A e coloca
os valores multiplicados da matriz por A no vetor 36 e no final escreva o vetor

*/

#include<stdio.h>
#include<stdlib.h>

#define D 3 
#define T 9
 
int main(void)
{
	int i,j,cont,a,vet[T],m[D][D];
	
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("Informe m[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);		
		}		
	}	
	printf("Iforme valor A: ");
	scanf("%d",&a);
	
	//MULTIPLICA MATRIZ POR A
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			m[i][j] *= a;		
		}		
	}
	
	//COLOCA MATRIZ NO VETOR
	cont =0;
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			vet[cont]=m[i][j];
			cont++;		
		}		
	}
	
	//IMPRIMESSÃO
	printf("Matriz Multiplicada\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf(" %d ",m[i][j]);		
		}		
		printf("\n");
	}
	printf("\nVetor\n");
	for(i=0;i<T;i++)
	{
		printf("%d ",vet[i]);		
	}
}
