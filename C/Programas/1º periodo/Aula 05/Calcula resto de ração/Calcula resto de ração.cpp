#include <stdio.h>
#include <stdlib.h>

/*
Pedro comprou m saco de ração com peso um kg.Ele possui dois gatos para os quais fornece a quantidade de ração em gramas.
A quantidade diaria de ração
fornecida para cada gato sempre é a mesma Faça um programa que receba o peso do savo de ração e a 
quantidade de ração fornecida para cada gato, calcule e mostre o quanto restará de ração após 5 dias.
*/

int main()
{
	//declaração de variaveis
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
