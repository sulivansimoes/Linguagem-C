/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação 
à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   

Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: 
“Presentation Error”.
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
