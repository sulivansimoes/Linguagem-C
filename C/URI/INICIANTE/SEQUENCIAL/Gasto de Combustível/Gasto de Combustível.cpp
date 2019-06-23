/*
Joaozinho quer calcular e mostrar a quantidade de litros de combust�vel gastos em uma viagem, ao utilizar 
um autom�vel que faz 12 KM/L. Para isso, ele gostaria que voc� o auxiliasse atrav�s de um simples programa. 
Para efetuar o c�lculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade m�dia durante a mesma (em km/h). 
Assim, pode-se obter dist�ncia percorrida e, em seguida, calcular quantos litros seriam necess�rios. Mostre o valor com 3 
casas decimais ap�s o ponto.

Entrada
O arquivo de entrada cont�m dois inteiros. O primeiro � o tempo gasto na viagem (em horas) e o 
segundo � a velocidade m�dia durante a mesma (em km/h).

Sa�da
Imprima a quantidade de litros necess�ria para realizar a viagem, com tr�s d�gitos ap�s o ponto decimal
*/

#include<stdio.h>
#define CONSUMO 12
int main()
{
	int velo,temp;
	float dist,consumo;
	
	scanf("%d",&temp);
	scanf("%d",&velo);
	
	dist = temp*velo;
	consumo = dist/CONSUMO;
	
	printf("%.3f\n",consumo);
	return 0;	
}

/*
exemplo de entrada			exemplo de saida
10								70.833
85
*/
