/*
Criar uma função que receba um parâmetro inteiro (n) e retorne a soma: n + n -1. 
Caso n seja zero, a função deve retornar zero. Criar um main para ler um valor inteiro 
n da entrada padrão e somar os valores retornados pela função para cada valor de 0 até n.
*/

#include <stdio.h>
#include <stdlib.h>

int fun(int);

int main(void)
{
	int n,soma=0;
	
	printf("Informe numero: ");
	scanf("%d",&n);
	
	for(int i=0; i<=n; i++){
		soma += fun(n);}
		
	printf("O resultado eh: %d", soma);
	
	system("pause>nul");
}

int fun(int n)
{	
	if(n == 0){
		return 0;
	}else{
		return (n+n-1);
	}  
}
