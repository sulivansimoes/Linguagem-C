/*
Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o 
m�s do ano por extenso, em ingl�s, com a primeira letra mai�scula.

Entrada
A entrada cont�m um �nico valor inteiro.

Sa�da
Imprima por extenso o nome do m�s correspondente ao n�mero existente na entrada, com a primeira letra em mai�scula.
*/

#include<stdio.h>

int main(void)
{
	int m;
	
	scanf("%d",&m);
	
	switch (m)
	{
		case 1 :
			printf("January\n");
		break;	
		case 2 :
			printf("February\n");
		break;
		case 3 :
			printf("March\n");
		break;
		case 4 :
			printf("April\n");
		break;
		case 5 :
			printf("May\n");
		break;
		case 6 :
			printf("June\n");
		break;
		case 7 :
			printf("July\n");
		break;
		case 8 :
			printf("August\n");
		break;
		case 9 :
			printf("September\n");
		break;
		case 10 :
			printf("October\n");
		break;	
		case 11 :
			printf("November\n");
		break;
		case 12 :
			printf("December\n");
		break;
	}
	return 0;	
}

/*
exemplo de entrada			exemplo de saida
4							April
*/
