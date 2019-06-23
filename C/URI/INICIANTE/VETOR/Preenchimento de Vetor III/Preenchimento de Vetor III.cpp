/*
Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. 
Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado 
na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do 
vetor e Y é o valor armazenado naquela posição. Cada valor do vetor deve ser apresentado 
com 4 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100
int main(void)
{
	double n[TAM]={0},num;
	int i;
	
	system("color FC");//muda cor da tela
	scanf("%lf",&num);
	
	n[0] = num;	
	for(i=1;i<TAM;i++)
	{
		n[i] = n[i-1];
		n[i] = n[i]/2;
	}
	for(i=0;i<TAM;i++)
	{
		printf("N[%d] = %.4lf\n",i,n[i]);
	}
 return 0;
}

/*
exemplo de entrada					exemplo de saida
200.0000							N[0] = 200.0000
									N[1] = 100.0000
									N[2] = 50.0000
									N[3] = 25.0000
									N[4] = 12.5000
*/
