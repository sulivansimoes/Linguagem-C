#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define T 20

void imprime(char *, char *);
void troca(char *, char *);
int maior(char *, char *);

int main(void)
{
	char nome1[T],nome2[T];
	char *pnome1, *pnome2;
	
	pnome1 = &nome1[0]; 
	pnome2 = &nome2[0];
	
	printf("Informe nome1: ");
	gets(nome1);
	printf("Informe nome2: ");
	gets(nome2);
	
	imprime(pnome1,pnome2);
	troca(pnome1,pnome2);
	imprime(pnome1,pnome2);
}

void imprime(char *pnome1, char *pnome2)
{	
	printf("\nNOME1: ");
	while(*pnome1!= '\0')
	{
		printf("%c",*pnome1);
		pnome1++;
	}
	
	printf("\nNOME2: ");
	while(*pnome2 != '\0')
	{
		printf("%c",*pnome2);	
		pnome2++;
	}
}

int maior(char *pnome1, char *pnome2)
{
	int tnom1, tnom2;
	char *inicio;
	
	//ve tamanho do nome1
	inicio = pnome1;
	while(*pnome1 != '\0')
	{
		pnome1++;
	}
	tnom1 = int(pnome1 - inicio);
	
	//ve tamanho do nome2
	inicio = pnome2;
	while(*pnome2 != '\0')
	{
		pnome2++;
	}
	tnom2 = int(pnome2-inicio);

	if(tnom1>tnom2)
		return 0;
	else 
		return 1;
}

void troca( char *pnome1, char *pnome2)
{
	char aux[T],i=0;
	
	switch(maior(pnome1,pnome2))
	{
		case 0:
			while(*pnome1 != '\0')
			{
				aux[i] = *pnome1;
				*pnome1 = *pnome2;
				*pnome2 = aux[i];
				
				pnome1++;
				pnome2++;
				i++;
			}
		break;
		case 1:
			while(*pnome2 != '\0')
			{
				aux[i] = *pnome1;
				*pnome1 = *pnome2;
				*pnome2 = aux[i];
				
				pnome1++;
				pnome2++;
				i++;
			}
		break;
	}
}
