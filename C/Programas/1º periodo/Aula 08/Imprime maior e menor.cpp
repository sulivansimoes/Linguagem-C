/*Construa um programa que para 5 numeros lidos no teclado, imprima o maior e o menor deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1,num2,num3,num4,num5,maior,menor;
	
	//entrada
	printf("Informe numero 1: ");
	scanf("%f",&num1);
	printf("Informe numero 2: ");
	scanf("%f",&num2);
	printf("Informe numero 3: ");
	scanf("%f",&num3);
	printf("Informe numero 4: ");
	scanf("%f",&num4);
	printf("Informe numero 5: ");
	scanf("%f",&num5);


	
	//processamento, saida etc...
	maior = num1;
	menor = num1;
	
	if (num2 > maior){
		maior = num2;}
	if (num3 > maior){
		maior = num3;}
	if (num4 > maior){
		maior = num4;}
	if (num5 > maior){
		maior = num5;}
		
	if (num2 < menor){
		maior = num2;}
	if (num3 < menor){
		maior = num3;}
	if (num4 < menor){
		maior = num4;}
	if (num5 < menor){
		maior = num5;}
		
		printf("\n o maior numero eh: %2.f",maior);
		printf("\n o menor numero eh: %2.f",menor);
		
	
	system("pause > nul");
	
}
