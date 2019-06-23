/*
1. Implemente uma função que copia um vetor de caracteres para outro vetor de forma invertida. 
A assinatura da função deve ser: void inverter(char * str1, char * str2).
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 10

void inverter(char *,char *);

int main(void)
{
	/*Declaração de variaveis, ponteiros e vetores*/
	char fstr1[TAM], *str1;
	char fstr2[TAM], *str2;
	
	/*Atribuição de endereços nos ponteiros*/	
	str1 = &fstr1[0];
	str2 = &fstr2[0];
	
	/*Entrada das strings*/
	printf("Informe string 1: ");
	gets(fstr1);
	
	inverter(str1,str2);
		
	printf(str1);
	printf("\n");
	printf(str2);
}

void inverter(char *str1,char *str2)
{
	char *inicio = NULL; //ponteiros e vetores locais
	
	inicio = str1; 
	
	while(*str1 != '\0') 
	{	
		str1++;
	}	
	
	printf("%d\n",&inicio);
	printf("%d\n",&str1);
	
	while(str1 >= inicio) //guarda string1 invertida na string2
	{
		*str2 = *str1;
		str1--;
		str2++;
	}
}
