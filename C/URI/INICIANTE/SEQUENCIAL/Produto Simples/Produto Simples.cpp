/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta opera��o 
� vari�vel PROD. A seguir mostre a vari�vel PROD com mensagem correspondente.   

Entrada
O arquivo de entrada cont�m 2 valores inteiros.

Sa�da
Imprima a vari�vel PROD conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade.
N�o esque�a de imprimir o fim de linha ap�s o produto, caso contr�rio seu programa apresentar� a mensagem: 
�Presentation Error�.
*/

#include <stdio.h>

int main()
{
	int n1,n2,prod=0;
	scanf("%d",&n1);
	scanf("%d",&n2);
	prod = n1 * n2;
	printf("PROD = %d\n",prod);
	return 0;
}
