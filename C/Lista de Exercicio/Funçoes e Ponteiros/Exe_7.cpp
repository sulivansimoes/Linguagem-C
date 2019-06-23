/*
Criar uma função que retorne o valor para o seguinte cálculo: x^y. Criar um main para 
ler os valores de x e y e imprimir o resultado da operação. Não é permitido usar a função pow(...).
*/

#include<stdio.h>
#include<stdlib.h>

int potencia(int,int);

int main(void)
{
	int x,y;
	printf("Informe x: ");
	scanf("%d",&x);
	printf("Informe y: ");
	scanf("%d",&y);
	
	printf("%d ^ %d = %d \n",x,y,potencia(x,y));
	system("pause>nul");
}

int potencia(int x, int y)
{
	int i,prod;
	
	prod = x;
	for(i=1;i<y;i++)
	{
		prod *= x;
	}
	return prod;		
}
