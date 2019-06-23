/*
Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, 
o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada cont�m duas linhas de dados. Em cada linha haver� 3 valores, respectivamente
dois inteiros e um valor com 2 casas decimais.

Sa�da
A sa�da dever� ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar
um espa�o ap�s os dois pontos e um espa�o ap�s o $. O valor dever� ser apresentado com 2 casas ap�s o ponto.
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
