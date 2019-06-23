/*Programa que ao informar um numero apresenta seu caracter na tabela ASCII 
e/ou ao informar um carcter o seu valor numerico para representa-lo na tabela ASCII é apresentado */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	
	printf("Informe um numero e digite 0 para parar: ");
	fflush(stdin);
	scanf("%d",&num);
	
	while(num != 0)
    {
    	printf("%d na tabela ACII eh: %c\n", num,(char)num);
    	
    	printf("Informe um numero e digite 0 para parar: ");
		scanf("%d",&num);
    }

}

