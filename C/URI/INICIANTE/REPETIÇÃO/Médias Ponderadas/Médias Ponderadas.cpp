/*
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. 
Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. 
Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, 
o segundo valor tem peso 3 e o terceiro valor tem peso 5.

Entrada
O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso 
de teste com três valores com uma casa decimal cada valor.

Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
*/

#include<stdio.h>

#define PESO1 2
#define PESO2 3
#define PESO3 5
#define TOTAL 10

int main(void)
{
	int n,i;
	float n1,n2,n3,media;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%f %f %f",&n1,&n2,&n3);
		media = ((n1*PESO1)+(n2*PESO2)+(n3*PESO3))/TOTAL;
		printf("%.1f\n",media);	
	}
	return 0;
}

/*
exemplo de entrada					exemplo de saida
3
6.5 4.3 6.2								5.7
5.1 4.2 8.1								6.3
8.0 9.0 10.0							9.3
*/
