#include <stdio.h>
#include <stdlib.h>

/*
Sabe se que quilowatt de energia custa um quinto do salario minimo.Faça um progroma qu receba o valor 
do salario minimo e a quantidade de quilowatts consumidos por uma resistencias. 
Calcule e mostre: a) O valor de cada quilowatt; b) O valor a ser pago por essa resistencia; c) o valor a ser pago com 15%
de desconto.
*/

int main()
{	
	//declaração de variaveis
	float sal,qwatt,vlrq,vlrp,vlrd;
	
	//entrada de dados
	printf("Informe o valor do salario minimo: ");
	scanf("%f",&sal);
	fflush(stdin); //descarrega variavel no buffer
	
	printf("Informe a quantiade de quilowatt: ");
	scanf("%f",&qwatt);
	fflush(stdin);
	
	//processamento de dados
	vlrq = sal / 5;
	vlrp = vlrq * qwatt;
	vlrd = (vlrp - 15)/100;
	
	//saida de dados
	printf("\nValor do quilowaat igual: %2.f",vlrq);
	printf("\nValor a ser pago: %2.f",vlrp);
	printf("\nValor a ser pago com 15 por cento de desconto: %.2f",vlrd);
	
	
	system("pause > nul");
}
