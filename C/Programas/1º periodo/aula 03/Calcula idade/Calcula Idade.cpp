#include <stdio.h>
#include <stdlib.h>

/*
	Programa tem como objetivo calcular idade atual da pessoa e calcular a sua idade no ano de 2050
*/

int main()
{
	//Declaração das variaveis
	int anoA,anoN,idadeA,idade2050;
	
	//Entrada de dados
	printf("Informe o ano atual: ");
	scanf("%d",&anoA);
	
	printf("Informe o ano de nascimento: ");
	scanf("%d",&anoN);
	
	//Processamento de dados
	idadeA = anoA - anoN;
	idade2050 = 2050 - anoN;
	
	//Saida de dados
	printf("\nIdade atual igual: %d",idadeA);
	printf("\nIdade em 2050 será igual: %d",idade2050);
	
	system("pause > nul ");
	
	
	
	
	
	
	
	
	
	
	
	
	
}
