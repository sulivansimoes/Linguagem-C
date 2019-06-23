/**********************************************************************
** Função: Calcular volume                                          ***
***********************************************************************
** Autor: Súlivan Simões                                            *** 
** Data registro: 27/02/2016                                        ***
**********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() //programa principal
{
	//variaveis
	float comp,lar,alt,vol;
	
	//Entrada de dados
	printf("Infome o comprimento: ");
	scanf("%f",&comp);	
	
	printf("Infome a largura: ");
	scanf("%f",&lar);
	
	printf("Informe a altura: ");
	scanf("%f",&alt);
	
	//Processamento
	vol= lar*comp*alt;
	
	//Saida de dados
	printf("\nVolume igual: =%2.f",vol);
	
	system("pause>nul");	
}


