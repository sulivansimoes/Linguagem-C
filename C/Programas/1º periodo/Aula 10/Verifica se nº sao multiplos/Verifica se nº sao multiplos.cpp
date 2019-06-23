/*Faça um programa que verifica se dois numeros são multiplos um do outro*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   //variavel
	int num1,num2,resto;
	
	//entrada
	printf("Informe o primeiro numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("Informe o segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	
	resto = num1 % num2;
	
	if (resto == 0){
		printf("\nNumeros sao multiplos um do outro");
		}else{
			printf("\nNumeros nao sao multiplos");
             }
	system("pause > nul");
	
}


