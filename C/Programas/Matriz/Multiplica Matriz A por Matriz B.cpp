/*
Crie um programa que carregue matriz A e matriz B e multiplique carregando o resultado na matriz C
*/

#include<stdio.h>
#include<stdlib.h>

#define D 3
int main(void)
{
	/*variaveis*/
	int i,j;
	
	/*Matrizes*/
	int a[D][D],b[D][D],c[D][D];
	
	/*Carrega Matrizes*/
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("Informe a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("Informe b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	/*Multiplica Matrizes*/
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	
	/*Imprime Matrizes*/
	printf("\nMatriz A\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz B\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz C produto de A e B\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
