/*
Criar uma fun��o para somar dois n�meros e retornar o resultado da soma. A assinatura da fun��o 
�: int somar(int a, int b) 
Criar um main para fazer a chamada a esta fun��o 

*/


#include <stdio.h>
#include <stdlib.h>

int somar(int a,int b);

int main()
{
	int a,b;
	
	printf("Informar numero A: ");
	scanf("%d",&a);
	printf("Informar numero B: ");
	scanf("%d",&b);
	printf("Resultado da soma: %d \n",somar(a,b));
	system("pause>nul");
}

int somar(int a, int b)
{
	return (a+b);
}
