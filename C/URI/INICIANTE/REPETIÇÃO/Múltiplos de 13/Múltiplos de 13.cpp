/*
Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não 
são múltiplos de 13 entre X e Y, incluindo ambos.

Entrada
O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, 
inclusive ambos se for o caso.
*/

#include <stdio.h>

int main(void)
{
	int n1,n2,i,aux,soma=0;
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	if(n2>n1){
		aux = n1;
		n1 = n2;
		n2 = aux;		
	}
	for(i=n2;i<=n1;i++)
	{
		if(i%13!=0){
			soma += i;
		}
	}
	printf("%d\n",soma);
	
	return 0;
}

/*
Sample Input		Sample Output
100					13954
200
*/
