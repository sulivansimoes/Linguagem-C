/*
Criar uma função que receba dois parâmetros inteiros e retorne o 
MDC (máximo divisor comum) entre os números
*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int,int);

int main(void)
{
	int n1,n2;
	
	printf("Informe dois numeros N1,N2: ");
	scanf("%d,%d",&n1,&n2);
	
	printf("MDC: %d",mdc(n1,n2));
}

int mdc(int n1, int n2)
{
	int aux,div;
	
	if(n2 > n1){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}

	while(n2 != 0) //CALCULA MDC
	{
		div = n1%n2;
		n1 = n2;
		n2 = div;	
	}
	
	return n1; //mdc
}
