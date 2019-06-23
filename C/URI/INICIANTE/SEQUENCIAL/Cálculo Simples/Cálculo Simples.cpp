/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente
dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar
um espaço após os dois pontos e um espaço após o $. O valor deverá ser apresentado com 2 casas após o ponto.
*/

#include <stdio.h>

int main()
{
	int cod1,cod2,n1,n2;  
	float vlr1,vlr2,tot=0;
	scanf("%d %d %f",&cod1,&n1,&vlr1);
	scanf("%d %d %f",&cod2,&n2,&vlr2);
	vlr1 *= n1;
	vlr2 *= n2;
	tot = vlr1 + vlr2;
	printf("VALOR A PAGAR: R$ %.2f\n",tot);
	return 0;	
}

/*
exemplo de entrada		     	exemplo de saida
12 1 5.30					VALOR A PAGAR: R$ 15.50
16 2 5.10

*/
