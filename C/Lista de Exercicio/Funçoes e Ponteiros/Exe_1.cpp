/*
Criar uma função para somar dois números e retornar o resultado da soma. A assinatura da função 
é: int somar(int a, int b) 
Criar um main para fazer a chamada a esta função 

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
