/*
Algoritmo que  gira matriz 270
*/

#include<stdio.h>

#define D 3

int main(void)
{
	int i,j,m[D][D];
	
	/*Carrega Matriz*/
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("m[%d][%d]",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	/*Impressão*/
	printf("\nMatriz Normal\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz gira 270 graus\n");
	for(j=D-1;j>=0;j--)
	{
		for(i=0;i<D;i++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
}
