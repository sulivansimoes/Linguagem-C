#include <stdio.h>
#include <stdlib.h>

/*
Pedro comprou m saco de ra��o com peso um kg.Ele possui dois gatos para os quais fornece a quantidade de ra��o em gramas.
A quantidade diaria de ra��o
fornecida para cada gato sempre � a mesma Fa�a um programa que receba o peso do savo de ra��o e a 
quantidade de ra��o fornecida para cada gato, calcule e mostre o quanto restar� de ra��o ap�s 5 dias.
*/

int main()
{
	//declara��o de variaveis
	float peso,quantf,pesog;
	
	//entrada de dados
	printf("Informe o peso do saco de racao: ");
	scanf("%f",&peso);
	fflush(stdin);  //descarrega variavel no buffer
	
	printf("Informe a quantidade fornecida: ");
	scanf("%f",&quantf);
	fflush(stdin);
	
	//processamento de dados
	pesog = peso * 1000;
	pesog = (pesog - (quantf * 2) * 5)/1000; 
	
	//saida de dados
	printf("\nDepois de 5 dias restara %2.f",pesog);
	
	system("pause > nul");

}
