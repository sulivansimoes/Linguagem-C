/*
Seguindo a mesma ideia do exercício 1, implementar outras 3 funções para: subtrair, multiplicar e 
dividir dois valores, retornando o resultado da operação e fazendo o main imprimir este resultado. 
*/

#include <stdio.h>
#include <stdlib.h>

/*protótipos*/
int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

main(void)
{
	int a,b;
	
	printf("Informar numero A: ");
	scanf("%d",&a);
	printf("Informar numero B: ");
	scanf("%d",&b);
	
	printf("\nResultados\n");
	
	printf("%d + %d = %d\n",a,b,somar(a,b));
	printf("%d - %d = %d\n",a,b,subtrair(a,b));
	printf("%d * %d = %d\n",a,b,multiplicar(a,b));
	
	if(b==0){
		printf("Divisao Inexistente\n");
	}else{
		printf("%d / %d = %.2f\n",a,b,dividir(a,b));}

	system("pause>nul"); 
}

int somar(int a, int b)
{
	return (a+b);
}

int subtrair(int a, int b)
{
	return (a-b);
}

int multiplicar(int a, int b)
{
	return (a*b);
}

float dividir(int a, int b)
{	
	return (float(a) / float(b));
}
