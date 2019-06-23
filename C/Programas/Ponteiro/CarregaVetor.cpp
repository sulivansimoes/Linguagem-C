#include<stdio.h>
#include<stdlib.h>

/*Protótipos*/
void carrega(int*);
void imprime(int*);

int main(void)
{
	int vet[5],*v;
	
	v = &vet[0]; //coloca o endereço da primeira posição do vetor no ponteiro	
	carrega(v); //manda o endereço do ponteiro para função
	imprime(v);
	
}

void carrega(int *v)  //recebe endereço do ponteiro em v
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Infome vet[%d]: ",i);
		scanf("%d",&v[i]);	
	}
}

void imprime(int *v)
{
	int i,aux[5];
	for(i=0;i<5;i++)
	{
		printf("Conteudo vet[%d]: %d \n",i,v[i]);	
	}
}

// O * indica que a variavel é do tipo ponteiro
