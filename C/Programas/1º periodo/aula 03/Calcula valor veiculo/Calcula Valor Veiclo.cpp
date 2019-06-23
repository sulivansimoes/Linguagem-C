#include <stdio.h>
#include <stdlib.h>

/*
	Programa tem como objetivo calcular valor final do veiculo.
*/

int main()
{
	//Declaração de variaveis
	float	pfab,percD,percI,vlrD,vlrI,pfinal;
	
	//Entrada de dados
	printf("Informe preço de fabrica: ");
	scanf("%f",&pfab);
	
	printf("Informe o percentual do distribuidor: ");
	scanf("%f",&percD);
	
	printf("Informe o percentual de imposto: ");
	scanf("%f",&percI);
	
	//Processamento de dados
	vlrD = pfab * percD/100;  // *./100 = %
	vlrI = pfab * percI/100;
	pfinal = pfab + percI + percD;
	
	//Saida de dados
	printf("\nValor do distribuidor: %2.f",vlrD);
	printf("\nValor do imposto: %2.f",vlrI);
	printf("\nPreco final: %2.f",pfinal);
	
	system("pause > nul");

	
	
	
	
	
	
	
	
	
}


