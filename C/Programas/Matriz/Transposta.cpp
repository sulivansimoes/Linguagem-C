// Carregue uma matriz e transforme a em transposta.

#include<stdio.h>
#include<stdlib.h>

#define D 3

int main(void)
{
	int m[D][D],aux,i,j;	
	
	//CARREGA MATRIZ
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf("Informe m[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	//IMPRIME
	printf("\nMatriz Carregada\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf(" %d ",m[i][j]);
		}
		printf("\n");
	}

	//FAZ A TROCA DE LINHA COM COLUNA, CRIANDO A TRANSPOSTA.
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{ 
			  aux   = m[i][j]; //pega a linha  e descarrega na variavel.
			m[i][j] = m[j][i]; //pega a coluna e descarrega na linha.
			m[j][i] = aux;	   //pega variavel e descarrega na coluna.
		}
	}
	
	//IMPRIME
	printf("\nMatriz Transposta\n");
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			printf(" %d ",m[i][j]);
		}
		printf("\n");
	}
system("pause>nul");
}
